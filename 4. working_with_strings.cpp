
#include <iostream>

using namespace std;

int main()
{
   string str1= "Giraffe academy";
   string str2;
   
   cout << str1 << endl;           // you use endl of \n to go to next line
   cout << str1.length() << endl;  // .length()   
   cout << str1[2] << endl;
 
  // cout << str1[0:3] << endl;   // can't slice a string in cpp
  
   str1[0] = 'B'; // modify a character in the string. notice we used ''  
   cout << str1 << endl;
   
   cout << str1.find("academy",0) << endl; // .find(target, startindex_4_search)
   cout << str1.find("f",0) << endl;
   
   str2= str1.substr(4,5); // .substr(starting_index, length_of_substring )
   cout << str2 << endl;
   
   
    return 0;
}
