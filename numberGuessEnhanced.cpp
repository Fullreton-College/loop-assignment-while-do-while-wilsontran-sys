#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Generate random number
    srand(time(0));
    int num = rand() % 100 + 1;

    int guess;
    int numGuesses = 0;

    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;
    cout << "------------------------------------------" << endl;
    

    do
    {
        cout << "Enter a guess: ";
        cin >> guess;

        if(guess > num)
        {
            cout << "Too high. Try again." << endl << endl;
        }
        else if(guess < num)
        {
            cout << "Too low. Try again." << endl << endl;
        }

        numGuesses++;
    } while(guess != num);

    cout << "------------------------------------------" << endl;
    cout << "Correct! You have guess my number." << endl;
    cout << "Number of guesses it took: " << numGuesses << endl;

    return 0;
}