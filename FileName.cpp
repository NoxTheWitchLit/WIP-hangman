#include <iostream>
#include <random>
using namespace std;

string Dictionary(int category);
string Guesses(int Difficulty);
int difficulty;
int main() {
	//difficulty selection
	cout << "Welcome To Hangman" << endl;
	cout << "Choose a Difficulty" << endl;
	cout << "Input 0 for Easy Difficulty" << endl;
	cout << "Input 1 for Medium Difficulty" << endl;
	cout << "Input 2 for Hard Difficulty" << endl;
	cin >> difficulty;
	if (difficulty == 0)
	Guesses(difficulty);
	else if (difficulty == 1)
		Guesses(difficulty);
	else if (difficulty == 2)
		Guesses(difficulty);
	
}

string Dictionary(int category) {
	//int choice;
	//word choice for hangman
	string chosen;
	srand(time(0)); //seed
	if (category == 0) {
		cout << "Hint: Place" << endl;
		string places[5] = { "America", "London", "Boston", "California", "Argentina" };
		chosen = places[rand() % 5];
	}
	else if (category == 1) {
		cout << "Hint: Food & Drink" << endl;
		string Food[5] = { "Burger", "Tea", "Sandwich", "Meatball", "Soda" };
		chosen = Food[rand() % 5];
	}
	//cout << chosen;
	return chosen; //chosen word
}

string Guesses(int Difficulty) {
	srand(time(0)); //seed
	string Answer = Dictionary(rand() % 2);
	int n = Answer.length();
	char input;

	//cout << n << endl;

	std::vector<char> ans(Answer.begin(), Answer.end());
	std::vector<char> blank = {'_'};
	

	for (int i = 0; i < n-1; i++) {
		blank.push_back('_');
		
	}
	//cout << blank.size() << endl;
	//for (char blanks : blank)
		//cout << blanks << " ";
	
	int guessesLeft;
	if (Difficulty == 0) {
		guessesLeft = n+5;
	}
	else if (Difficulty == 1) {
		guessesLeft = n+3;
	}
	else if (Difficulty == 2) {
		guessesLeft = n+1;
	}

	while (blank != ans) {
		for (char blanks : blank)
			cout << blanks << " ";
		if (guessesLeft > 0) {
			cin >> input;
		}
		else {
			cout << "you lose";
			return "lose";
		}
		for (int i = 0; i < n ; i++) {
			if (input == ans[i]) {
				blank[i] = input;
			}
			
			}
		guessesLeft -= 1;
		}
	cout << "you win" << endl;
	return "win";
}
