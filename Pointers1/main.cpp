#include <iostream>
using namespace std;

int main() {
    int x = 10;       // Bir tamsayı değişkeni
    int* ptr = &x;    // 'ptr', x'in adresini tutan pointer

    cout << "x'in degeri: " << x << endl;        // 10
    cout << "x'in adresi: " << &x << endl;       // Bellek adresi
    cout << "Pointer ptr'in tuttugu adres: " << ptr << endl; // x'in adresi
    cout << "Pointer'in gosterdigi deger: " << *ptr << endl; // 10

    return 0;
}
