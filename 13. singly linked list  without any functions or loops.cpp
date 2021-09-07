#include <iostream>
using namespace std;
/*
 +---+---+
 |   |   |   <------  this is what a node looks like
 +---+---+    
     
     (when accessing the node, we have to dereference the pointer that is currently pointing to it)
     
 
 +---+
 |   |       <------  this is what a pointer to the node type looks like       i, head, temp in our program
 +---+     
*/

struct node{
    int data;
    node* next;
};

int main()
{
  node* i;                // a node type pointer to iterate through the linked list
  node* head = NULL;      // a node type pointer named 'head' which will act as an identifier for the whole list. we will try not to disturb it unless necessary
  
  node* temp;             // a node type pointer we will use to store the adress of a newly created node
  temp = new node();      // creating a new node. it will return the adress of the new node which we will store in the pointer capable of storing the adress of a node (which is temp)
  
  (*temp).data = 1;       // we write (*temp) to dereference the the node type pointer to access its contents. think of the node as a house. we enter the house which has 2 rooms, 1 containing the data and other 1 containing the adress of the next node
  (*temp).next = NULL;    // we have to dereference the node to access its contents
  
  head = temp;            // we arent dereferencing in this line because we are dealing with 2 node type pointers and not the contents inside the node
  
  i = head;               // using i to move through the linked list. 
  
  cout << (*i).data << endl; 
  
  temp = new node();
  (*temp).data = 5;
  (*temp).next = NULL;
  
  (*i).next = temp;
  
  i = (*i).next;
  
  cout << (*i).data << endl;
  
  temp = new node();
  (*temp).data = 89;
  (*temp).next = NULL;
  
  (*i).next = temp;
  i=(*i).next;        // i which is currently pointing at the house, we enter the house to access the adress inside the house ( which is stored in 'next' field), and make i point to that adress
  
  cout << (*i).data << endl;
  
  temp = new node();
  (*temp).data = 56;
  (*temp).next = NULL;
  
  (*i).next = temp;  // make the adress field of the room i is currently pointing at, to point at the newly created node
  i = (*i).next;
  
  cout << (*i).data << endl;
  
 
    
    return 0;
    
}

/*

 +---+---+      +---+---+      +---+---+      +---+---+
 | 1 | --|----->| 5 | --|----->| 89| --|----->| 56| --|-------> NULL
 +---+---+      +---+---+      +---+---+      +---+---+      
   ^
   |
   |
  Head
                                                            
                                                             
                                                              
*/
