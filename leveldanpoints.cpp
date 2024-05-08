#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int level = 14;
    int points = 82;
    
    if(level >= 15 || points >= 100){
      cout << "Poin tercukupi, level kamu akan naik";
    }
    else{
      cout << "Poin anda belum tercukupi, teruslah bermainn!!";
    }
    return 0;
}