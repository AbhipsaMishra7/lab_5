#include<iostream> // library
using namespace std; //standard definition
int main () { // main function
     float n1 , n2 ; // defining  float variables 
     cout << " Please enter first number n1 " << endl; // output
     cin >> n1 ; // take data from terminal
     cout << "Please enter second number n2" << endl; //ask user for n2
     cin >> n2; // extract data from terminal
     
     if ( n1>n2) { //conditional
     	cout << "First number" << n1 << " is greater than the second" << endl ;
                 }
     else        {
        cout << "Second nymber " << n2 << " is greater than the first" << endl ;
                 } // print desired output in terminal according to conditions mentioned
  return 7 ; // return integer to main function
             } 

