
#include <iostream>

using namespace std;

int main()
{
    string characterName="John";
    int characterAge=28;
    
    cout<<"There was once a cowboy named "<<characterName <<endl;
    cout<<"He was "<<characterAge<<" Years old"<< endl;
    characterName="Mike";                                              // change the value stored in the variable halfway through the program
    cout<<"He also named his son "<<characterName << endl;
    cout<<"But did not like being "<<characterAge<<" years old."<< endl;

    return 0;
}
