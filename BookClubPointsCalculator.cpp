// BookClubPointsCalculator
// TITLE: Book Club Points Calculator

#include <iostream>
using namespace std;

// Function to calculate the total points based on the number of books purchased
int main() {
    cout << "\n";
    int books = 0;
    cout << "How many books have you bought this month? \n";
    cin >> books;

    // Using user input of the books to find the total points
    // and outputs the points the user gets from the purchase of the books
    if (books < 0) {
        cout << "Use a positive number bigger than zero.";

    } else if (books == 0) {
        int points = 0;
        cout << "Your points is " << points << ".\n";

    } else if (books == 1) {
        int points = 5;
        cout << "Your points is " << points << ".\n";

    } else if (books == 2) {
        int points = 15;
        cout << "Your points is " << points << ".\n";

    } else if (books == 3) {
        int points = 30;
        cout << "Your points is " << points << ".\n";

    } else if (books >= 4) {
        int points = 60;
        cout << "Your points is " << points << ".\n";
    }
}
