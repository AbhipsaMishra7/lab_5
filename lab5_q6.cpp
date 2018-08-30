#include <iostream> // library
using namespace std ; // using standard definition
int main () { // using int main function
          int x ; // defining ineteger variable
          cout << "Enter the required year " << endl ; //ask user
          cin >> x ;//extract from terminal
          if (x%4==0) { //condtion
                   if (x%100==0) {//another condition
                            if (x%400==0) { // another another condition
				     cout << x << " is a leap year" << endl ;
			                  }
                            else {// another another alternative 
                                 cout << x << " is not a leap year" << endl;
                                 }
                                 }
                    else {//another alternative
                          cout << x << " is a leap year " << endl;
                          }
                       }             
          else {//alternative
                cout << x << " is not a leap year " << endl ;
                }
return 7 ;//return integer value to main function
 }
          

                 
