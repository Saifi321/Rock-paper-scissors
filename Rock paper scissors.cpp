#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to display choices
void displayChoices() {
    cout << "Choose one of the following: \n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
}

// Function to determine the winner
void determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        cout << "It's a tie!\n";
    } else if ((userChoice == 1 && computerChoice == 3) || 
               (userChoice == 2 && computerChoice == 1) || 
               (userChoice == 3 && computerChoice == 2)) {
        cout << "You win!\n";
    } else {
        cout << "Computer wins!\n";
    }
}

// Function to convert number to choice string
string choiceToString(int choice) {
    switch (choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        default: return "Invalid";
    }
}

int main() {
    srand(time(0));  // Seed for random number generator
    int userChoice, computerChoice;

    displayChoices();
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice, please enter a number between 1 and 3.\n";
        return 0;
    }

    computerChoice = rand() % 3 + 1;  // Generate random choice for computer

    cout << "You chose: " << choiceToString(userChoice) << "\n";
    cout << "Computer chose: " << choiceToString(computerChoice) << "\n";

    determineWinner(userChoice, computerChoice);

    return 0;
}
