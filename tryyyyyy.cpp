#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main(){
  cout << "I want to make little program about a most store in USA";
  cout << endl;
  string name;
  cout << "Masukan Namamu: ";
  getline(cin, name);
  cout << "Hello, " << name << "! Nice to meet you." << endl;

  //Your balance
  auto balance = 4000;
  //Your Boughts
  auto price = 2000;
  
  cout << endl;
  /* Buatlah agar mendapatkan sisa uang dari
  pembelian dan sisanya */
    
  int result = balance - price;
  cout << "Kembalian untukmu: " << result;
  return 0;
}