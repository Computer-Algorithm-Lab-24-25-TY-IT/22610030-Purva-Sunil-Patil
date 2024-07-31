#include <iostream>
using namespace std;

void multiplyMatrices(int firstMatrix[3][3], int secondMatrix[3][3], int result[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int firstMatrix[3][3];
    int secondMatrix[3][3];
    int result[3][3]; 
    cout << "Enter elements of the first 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> firstMatrix[i][j];
        }
    }

    cout << "Enter elements of the second 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> secondMatrix[i][j];
        }
    }

    multiplyMatrices(firstMatrix, secondMatrix, result);

    cout << "Resultant Matrix:" << endl;
    displayMatrix(result);

    return 0;
}
