//nested arrays devam
#include <iostream>
using namespace std;

//iki nested array toplamı
int main() {
    int matrix1 [3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int matrix2 [3][3] = {
        {9,8,7},
        {6,5,4},
        {3,2,1}
    };

    int sumMatrix[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "2 matris toplamı" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << sumMatrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;

}
