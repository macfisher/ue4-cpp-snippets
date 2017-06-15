#include <iostream>
#include <string>
#include "prototypes.h"

using namespace std;

void printItemChoices() {
	cout << " ,------------------." << endl;
	cout << " |                  |" << endl;
	cout << " | Choose an item:  |" << endl;
	cout << " |   1. Key         |" << endl;
	cout << " |   2. Coin        |" << endl;
	cout << " |   3. Sanddollar  |" << endl;
	cout << " |                  |" << endl;
	cout << " `------------------'" << endl;
}

void handlePlayerItemChoice(char choice) {
	// Else if example /w enum
	enum Item { // Type which values are restricted to specific range of values
		Coin, Key, Sanddollar // Variables that type Item can have
	};

	Item itemInHand;

	switch (choice) {
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
	}
	else if (itemInHand == Coin) {
		cout << "The coin is a rusted brassy color. It has a picture of a lady with a skirt." << endl;
		cout << "Using this coin you could buy a few things" << endl;
	}
	else if (itemInHand == Sanddollar) {
		cout << "The sanddollar has a little star on it." << endl;
		cout << "You might be able to trade it for something." << endl;
	}
}

void promptPlayerItemChoice() {
	char player_item_choice;
	cin >> player_item_choice;
	handlePlayerItemChoice(player_item_choice);
}