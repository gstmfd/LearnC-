#include <iostream>
using namespace std;

int main() {
    /*Program Kasir Sederhana*/

    int fruit;
    int price;
    int amount;
    int uaang, sisa_uang;

    //Buat Harga
    int apel = 4000;
    int salak = 1000;
    int mangga = 5000;
    int nanas = 10000;
    int anggur = 500;
    
    cout << "Welcome to MufidMaretCom" << endl;
    std::cout << endl;
    //Display Menu
    cout << "Please Choice Your Fruit:" << endl;
    cout << "1]| Apel | Rp 4000" << endl;
    cout << "2]| Salak | Rp 1000" << endl;
    cout << "3]| Mangga | Rp 5000" << endl;
    cout << "4]| Nanas | Rp 10000" << endl;
    cout << "5]| Anggur| Rp 500" << endl;
    std::cout << endl;
    
    //Menu Input
    cout << "Choice the Fruit | Enter 1-5" << endl;
    cout << "Choice:  ";
    cin >> fruit;
    cout << "Amount: ";
    cin >> amount;
    cout << "Input Your Money: Rp ";
    cin >> uaang;

    switch (fruit) 
    {
        case 1:
        cout << "This Your Purchase: " << endl;
        cout << "1] Apel" << endl;
        cout << "Price |Rp  " << price << endl;
        price = amount * apel;
        sisa_uang = uaang - price;
        std::cout << endl;
        cout << "Sisa Uang Anda, Rp" << sisa_uang << endl;

        if(uaang <= 4000){
            cout << "Uang Anda Kurang!!!";
        }
        break;
    }
}