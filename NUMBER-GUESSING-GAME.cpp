#include <iostream>
#include <time.h>
using namespace std;

int main()
{

    cout << "\t\t\t* WELCOME TO THE NUMBER GUESSING GAME *" << endl
         << endl;

    cout << "  # RULE BOOK" << endl;
    cout << "\t* You have to guess a number between 1 and 100." << endl;
    cout << "\t* You'll have limited choices based on the level you choose." << endl;
    cout << "\t  - Click 1 for easy!\t" << endl;
    cout << "\t  - Click 2 for medium!\t" << endl;
    cout << "\t  - Click 3 for hard!\t" << endl
         << endl;

    cout << "\t\t\t<------Good Luck!------>" << endl;

    cout << "Choose the difficulty level ";

    int difficultyChoice;

    string level;

    while (difficultyChoice != 1 && difficultyChoice != 2 && difficultyChoice != 3)
    {

        cin >> difficultyChoice;
        cout << endl;

        switch (difficultyChoice)
        {
        case 1:
            level = "Easy";
            break;

        case 2:
            level = "Medium";
            break;

        case 3:
            level = "Hard";
            break;

        default:
            cout << "choose the correct level" << endl;
            break;
        }
    }

    cout << "\t\t\t Your choiced level = " + level << endl;

    srand(time(0));

    int secretNumber = (rand() % 100) + 1;
    int userChoice;

    if (difficultyChoice == 1)
    {
        cout << "you have only 10 chances for finding number" << endl;

        int choiceLeft = 10;

        for (int i = 1; i <= 10; i++)
        {
            cout << "Enter a number :";
            cin >> userChoice;

            if (userChoice == secretNumber)
            {
                cout <<endl<< "Well played! you win this game, " << secretNumber << " was the secret number" << endl;
                cout << "Thanks for playing..." << endl;
                cout << "Come again and play with me !!!" << endl;
                break;
            }
            else
            {
                cout << "Nope! , " << userChoice << " is not the secret number" << endl;

                if (userChoice < secretNumber)
                {
                    cout << "The secret number is greater than " << userChoice << endl;
                }
                else
                {
                    cout << "The secret number is smaller than " << userChoice << endl;
                }

                choiceLeft--;
                cout <<endl<< "choices left = " << choiceLeft << endl;

                if (choiceLeft == 0)
                {
                    cout << "You loss the game" << endl;
                    cout << "Sorry! you couldn't find the secret number, It was " << secretNumber << endl;
                    cout << "Don't worry! play again with us" << endl;
                }
            }
        }
    }
    else if (difficultyChoice == 2)
    {
        cout << "you have only 7 chances for finding number" << endl;

        int choiceLeft = 7;

        for (int i = 1; i <= 7; i++)
        {
            cout << "Enter a number :";
            cin >> userChoice;

            if (userChoice == secretNumber)
            {
                cout <<endl<< "Well played! you win this game, " << secretNumber << " was the secret number" << endl;
                cout << "Thanks for playing..." << endl;
                cout << "Come again and play with me !!!" << endl;
                break;
            }
            else
            {
                cout << "Nope! , " << userChoice << " is not the secret number" << endl;

                if (userChoice < secretNumber)
                {
                    cout << "The secret number is greater than " << userChoice << endl;
                }
                else
                {
                    cout << "The secret number is smaller than " << userChoice << endl;
                }

                choiceLeft--;
                cout <<endl<< "choices left = " << choiceLeft << endl;

                if (choiceLeft == 0)
                {
                    cout << "You loss the game" << endl;
                    cout << "Sorry! you couldn't find the secret number, It was " << secretNumber << endl;
                    cout << "Don't worry! play again with us" << endl;
                }
            }
        }
    }
    else{
        cout << "you have only 5 chances for finding number" << endl;

        int choiceLeft = 5;

        for (int i = 1; i <= 5; i++)
        {
            cout << "Enter a number :";
            cin >> userChoice;

            if (userChoice == secretNumber)
            {
                cout <<endl<< "Well played! you win this game, " << secretNumber << " was the secret number" << endl;
                cout << "Thanks for playing..." << endl;
                cout << "Come again and play with me !!!" << endl;
                break;
            }
            else
            {
                cout << "Nope! , " << userChoice << " is not the secret number" << endl;

                if (userChoice < secretNumber)
                {
                    cout << "The secret number is greater than " << userChoice << endl;
                }
                else
                {
                    cout << "The secret number is smaller than " << userChoice << endl;
                }

                choiceLeft--;
                cout <<endl<< "choices left = " << choiceLeft << endl;

                if (choiceLeft == 0)
                {
                    cout << "You loss the game" << endl;
                    cout << "Sorry! you couldn't find the secret number, It was " << secretNumber << endl;
                    cout << "Don't worry! play again with us" << endl;
                }
            }
        }
    }

    
    

    return 0;
}