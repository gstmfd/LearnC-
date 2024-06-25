#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int number;
    cin >> number;
    
    if(!(number >= 5)){
      cout << "True";
    }
    else{
      cout << "False";
    }
    return 0;
}