#include<iostream>
#include<time.h>
using namespace std;

int main(){

    cout<<"\t\t\t* WELCOME TO THE NUMBER GUESSING GAME *"<<endl<<endl;

    cout<<"  # RULE BOOK"<<endl;
    cout<<"\t* You have to guess a number between 1 and 100."<<endl;
    cout<<"\t* You'll have limited choices based on the level you choose."<<endl;
    cout << "\t  - 1 for easy!\t"<<endl;
    cout << "\t  - 2 for medium!\t"<<endl;
    cout << "\t  - 3 for difficult!\t"<< endl<<endl;

    cout<<"\t\t\t<------Good Luck!------>"<<endl;

    cout<<"Choose the difficulty level ";

    int difficultyChoice;

    string level;

    while (difficultyChoice != 1 && difficultyChoice != 2 && difficultyChoice != 3){

        cin>>difficultyChoice;
        cout<<endl;

        switch (difficultyChoice)
        {
        case 1:
            level = "Easy";
            break;

        case 2:
            level = "Medum";
            break;

        case 3:
            level = "Hard";
            break;
        
        default:
            cout<<"choose the correct level"<<endl;
            break;
        }
    }
    
    cout<<"\t\t\t Your choiced level = " + level <<endl;
    
    
    
    
    return 0;





}