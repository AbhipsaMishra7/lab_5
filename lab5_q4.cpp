#include<iostream>
using namespace std ;
int main () {
         int x ;
         cout << "Enter number " << endl ;
         cin >> x ;
         if ((x%5==0) && (x%11==0)) {
                 cout << "number is divisible by both 5 and 11 " << endl ;
                 }
         else { 
                 cout << " the number is not divisible by 5 and 11 " << endl ;
               }
     return 7 ;
}
         
