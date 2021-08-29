#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    
    // https://stackoverflow.com/questions/21567291/why-does-stdgetline-skip-input-after-a-formatted-extraction?noredirect=1&lq=1
    
    int cgpa;
    string name;
    cout << "Enter your cgpa:" << endl;
    cin >> cgpa;
    cout << "you have " << cgpa << " cgpa" << endl;
    
    cout << "enter your name:" << endl;
    // cin >> name; dont use cin for string as it stops input on encountering namespace
    //cin.ignore();
    getline(cin, name); // cin after cin : no problem. cin takes number input and subsequent cin ignores the empty string after the first input and goes to the next number/word input
    //getline after a cin takes the empty string after 
    // use getline(cin>>ws, ) to consume whitespace or newline character, whatever causes weird behaviour.
    
    cout << "Hello " << name << " you have " << cgpa << " cgpa. Good work!" << endl;
    
    return 0;
}
