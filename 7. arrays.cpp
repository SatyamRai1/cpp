
#include <iostream>

using namespace std;

int main()
{
    int luckyNums[]={2,3,1,6,8,3,2,1,0,8}; //make an array
    int marks[6];  // alternate way to make an array
    
    cout<< "at index [5], we have "<<luckyNums[5]<<endl;
    
    cout<< "currently, at index[1], we have "<< luckyNums[1] << endl;
    cout<<"please update the number at index [1]"<<endl;
    cin>> luckyNums[1];
    cout<<"At index [1], we have: "<< luckyNums[1]<<endl;
    return 0;
}
