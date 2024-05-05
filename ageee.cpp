#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
   int age = 70;
   if(age >= 65){
     cout << "Senior";
   }
   else{
     if(age >= 18){
       cout << "Adult";
     }
     else{
       cout << "Child";
     }
   }
   
}