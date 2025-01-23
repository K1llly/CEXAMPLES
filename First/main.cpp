//nested arrays
#include <iostream>
using namespace std;

int main() {
    int matrix1[2][3] = {
        {1,2,3}, //birinci satır
        {4,5,6}  //ikinci satır
    }; // 2 satır 3 sütun

    // elemanları yazdırma

    for (int i = 0; i < 2; i++) { //satır sayısı i
        for (int j = 0; j < 3; j++) { //sütun sayısı j
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    //tüm matrix toplama

    int matrix2[2][2] = {
        {1,2},
        {3,4}
    };
    int sum = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum += matrix2[i][j];
        }
    }
    cout << sum << endl;


    //satır bazında toplama

    int matrix3[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    for (int i = 0; i < 2; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += matrix3[i][j];
        }
        cout << "satir " << i+1 << " toplami: " << rowSum << endl;

    }
        cout << endl;

    //belirli bir satırın toplamı

    int matrix4[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int targetRow = 2; //toplamak istedigim satırın indexi 0 dan başlar 1 dediğimiz için 2. satir oluyor
    int rowSum2 = 0;

    for (int i = 0; i < 3; i++) {
        rowSum2 += matrix4[i][targetRow];
    }

    cout << "satir " << targetRow+1 << "toplami: " << rowSum2 << endl;
    cout << endl;

    //çıkarma işlemi baba
    int matrix5[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int sum2 = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum2 -= matrix5[i][j]; // burada sadece += den -= e geçirdik diğerlerinde de aynı olay var
        }
    }

    cout << "tum cikarma sonucu: " << sum2 << endl;
    cout << endl;

    //carpim

    int matrix6[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int product1 = 1; // carpim baslangic degeri 1

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            product1 *= matrix6[i][j]; // burada da *= kullandik
        }
    }

    cout << "carpim sonucu: " << product1 << endl;
    cout << endl;

    //bolme

    int matrix7[3][3] = {
        {120, 2 ,3},
        {4,5,6},
        {7,8,9}
    };


    double result = matrix7[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0 && j == 0)continue; // ilk elemanı atla cunku baslangic degeri
            if (matrix7[i][j] == 0) { // sıfıra bolme kontrolu
                cout << "sifira bolunemez" << endl;
                return -1;
            }
            result /= matrix7[i][j];
        }

    }

    cout << "matri elemanlarının bolumu: " << result << endl;
    cout << endl;

return 0;
}