#include <iostream>
#include <random>
using namespace std;

string Dictionary(int category);
string Guesses(int Difficulty);
int score = 0;

int main() {
	Guesses(0);
}

string Dictionary(int category) {
	//int choice;
	string chosen;
	if (category == 0) {
		cout << "Hint: Place" << endl;
		string places[5] = {"America", "London", "Boston", "California", "Argentina"};
		chosen = places[rand() % 5];
	}
	else if (category == 1) {
		cout << "Hint: Food & Drink" << endl;
		string Food[5] = { "Burger", "Tea", "Sandwich", "Meatball", "Soda" };
		chosen = Food[rand() % 5];
	}
	cout << chosen;
	return chosen;
}

string Guesses(int Difficulty) {
	string Answer = Dictionary(rand() % 2);
	const int n = Answer.length();

	char blank[n];
	
	int guessesLeft;
	if (Difficulty == 0) {
		guessesLeft = 10;
	}
	return "ooga booga";
}
