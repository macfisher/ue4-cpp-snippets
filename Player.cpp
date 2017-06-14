#include <iostream>
#include <string>
using namespace std;

struct Vector {
	float x, y, z;
};

struct Player {
	string name;
	float hp;
	Vector position;
};

int main() {
	Player mac;
	mac.name = "Mac";
	mac.hp = 100.0f;
	mac.position.x = 5;
	mac.position.y = 150;
	mac.position.z = 25;

	cout << "Name: " << mac.name << endl;
	cout << "HP: " << mac.hp << endl;
	cout << "Position: " << endl;
	cout << "  x: " << mac.position.x << endl;
	cout << "  y: " << mac.position.y << endl;
	cout << "  z: " << mac.position.z << endl;

	cout << "Mac takes 10 damage." << endl;
	Player* pointer_mac; // Declare pointer
	pointer_mac = &mac;  // LINKAGE

	pointer_mac->hp -= 10;
	cout << "Mac's HP is now at " << mac.hp << endl;

	int mem_test = 444;
	cout << &mem_test << endl; // Prints varaible's address in memory

	int *pnt_mem_test;
	pnt_mem_test = &mem_test;

	cout << *pnt_mem_test << endl; // Prints out the value of pnt_mem_test - 444

	cout << endl;
	cout << "What is your class?" << endl;
	string player_class;
	cin >> player_class;
	cout << "The player has created the " << player_class << " class" << endl;

	// Using printf
	char character = 'A';
	int integer = 1;
	printf("%d integer, character %c\n", integer, character);

	// printf a string. Must use string.c_str() function
	string test = "This is a test";
	printf("%s\n", test.c_str());
}