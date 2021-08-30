
#include <iostream>

using namespace std;

string getDayOfTheWeek(int dayNum){
    string dayOfTheWeek;
    
    switch(dayNum){
        case 0: dayOfTheWeek="monday";
                break;
        case 1: dayOfTheWeek="tuesday";
                break;        
        case 2: dayOfTheWeek="wednesday";
                break;
        case 3: dayOfTheWeek="thursday";
                break;
        case 4: dayOfTheWeek="friday";
                break;
        case 5: dayOfTheWeek="saturday";
                break;
        case 6: dayOfTheWeek="sunday";
                break;
        default: dayOfTheWeek="Invalid number entered. Try again.";
                break;        
    }
    return dayOfTheWeek;
}

int main()
{
    int dayNumber;
    cout << "Please enter a number between 0 and 6." << endl;
    cin >> dayNumber;
    cout << getDayOfTheWeek(dayNumber) << endl;
    return 0;
}

