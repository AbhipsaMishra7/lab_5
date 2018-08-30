#include<iostream>//library 
using namespace std ; // using standard definition
int main () { // using int main function
         int x ; //defining integer variable
         cout << " Enter required number " << endl ; //display in terminal
         cin >> x ;// take value entered by user
         if (x%2==0) { //defining condition
             cout << x <<  " is an even number" << endl ; //print in terminal
                    }
         else { //if first condition not satisfied then display this
             cout << x << " is an odd number " << endl ;
              }
      return 0 ; // weknowwhatthisis
}
