
#include <iostream>

using namespace std;


int main()
{
 /*   int secretNumber=9;
    int guess;
    
    cout << "Please enter a number you guess is right: " << endl;
    cin >> guess;
    while(guess != secretNumber){
    cout << "Nope! try again: " << endl;   
    cin >> guess;
    }
    
    cout << "you guessed right. congrats!" << endl;
    return 0;
*/


    int guess;
    int secretNumber=9;
    int guessCount=0;
 
    
    while(guessCount<=2){
       cout<< "enter guess: ";
       cin >> guess;
       
       if(guess==secretNumber){
           cout << "correct"<< endl;
           break;
       }else{
           guessCount++;
           cout << "Wrong! "<< 3-guessCount << " attempts left." << endl;
       }
        
    }
}

