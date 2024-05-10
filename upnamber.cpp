#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int number;
    cin >> number;
    
    while (number <= 100){
      cout << number << endl;
      number = number * 2;
    }
    return 0;
}