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

	// == operator
	int x = 10;
	int y = 4;

	cout << (x == y) << endl; // Prints 0 for false
	cout << boolalpha << (x == y) << endl; // Prints 'false'

	cout << "Enter first number" << endl;
	int num1, num2;
	cin >> num1;
	cout << "Enter second number" << endl;
	cin >> num2;
	cout << endl;

	if (num1 > num2) {
	cout << num1 << endl;
	} else {
	cout << num2 << endl;
	}

	// Else if example /w enum
	enum Item { // Type which values are restricted to specific range of values
		Coin, Key, Sanddollar // Variables that type Item can have
	};

	cout << " ,------------------." << endl;
	cout << " |                  |" << endl;
	cout << " | Choose an item:  |" << endl;
	cout << " |   1. Key         |" << endl;
	cout << " |   2. Coin        |" << endl;
	cout << " |   3. Sanddollar  |" << endl;
	cout << " |                  |" << endl;
	cout << " `------------------'" << endl;

	char player_item_choice;
	cin >> player_item_choice;

	Item itemInHand;

	switch (player_item_choice) {
	case '1':
		itemInHand = Key;
		break;
	case '2':
		itemInHand = Coin;
		break;
	case '3':
		itemInHand = Sanddollar;
		break;
	default:
		cout << "Invalid selection chosen" << endl;
		break;
	}
	
	if (itemInHand == Key) {
		cout << "The key has a lionshead on the handle." << endl;
		cout << "You got into a secret room using the key!" << endl;
	} else if (itemInHand == Coin) {
		cout << "The coin is a rusted brassy color. It has a picture of a lady with a skirt." << endl;
		cout << "Using this coin you could buy a few things" << endl;
	} else if (itemInHand == Sanddollar) {
		cout << "The sanddollar has a little star on it." << endl;
		cout << "You might be able to trade it for something." << endl;
	}

	return 0;
}