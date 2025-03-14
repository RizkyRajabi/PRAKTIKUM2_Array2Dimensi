#include <iostream>
using namespace std;

// Fungsi untuk menampilkan matriks
void displayMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk memutar matriks 90 derajat searah jarum jam
void rotateMatrix(int matrix[3][3]) {
    // Transpose matriks
    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Balik setiap baris
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 / 2; j++) {
            swap(matrix[i][j], matrix[i][3 - j - 1]);
        }
    }
}

int main() {
    int matrix[3][3];

    cout << "Masukkan elemen matriks 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemen [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatriks sebelum diputar:" << endl;
    displayMatrix(matrix);

    rotateMatrix(matrix);

    cout << "\nMatriks setelah diputar 90 derajat:" << endl;
    displayMatrix(matrix);

    return 0;
}
