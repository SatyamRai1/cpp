
#include <iostream>

using namespace std;

// If you're gonna write your function after main(), you must declare it first. otherwise, just write all your functions before main()

double cube(double num);

int main()
{
    cout << cube(5.0) << endl;
    return 0;
}

double cube(double num){
    return num*num*num;
}