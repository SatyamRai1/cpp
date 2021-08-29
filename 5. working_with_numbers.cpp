#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int num1= 5;
    cout<< (3+5)*8 << endl;
    num1++;
    num1+=1;
    
    // lets see how decimal numbers and integers work togther
    
    // math of decimal number with an integer gives a decimal result
    cout << 7.0/2  << endl;//         3.5
    cout << 7/2.0 << endl;//          3.5
    
    //math of an integer with an integer gives an integer
    cout << 7/2 << endl;//            3 // even though not the actual result'
    
    // cmath library functions
    cout << pow(2,5) << endl;   // 2 raised to power 5  
    cout << sqrt(64) << endl;   // squareroot of 64
    cout << cbrt(13.0) << endl; // cuberoot of 13
    
    cout << round(11.5) << endl; // round off 11.4 
    cout << floor(13.9) << endl; // floor
    cout << ceil(14.2) << endl; // ceil
    
    cout << fmax(4,9) << endl; // find max out of the two
    cout << fmin(4,9) << endl; // find min out of the two
    

    return 0;
}
