#include <iostream>
using namespace std;

// Fungsi untuk menampilkan matriks
void displayMatrix(int (*matrix)[4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk merotasi matriks 90 derajat searah jarum jam
void rotateMatrix(int (*matrix)[4]) {
    // Transpose matriks
    for (int i = 0; i < 4; i++) {
        for (int j = i; j < 4; j++) {
            swap(*(*(matrix + i) + j), *(*(matrix + j) + i));
        }
    }

    // Balik setiap baris
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 / 2; j++) {
            swap(*(*(matrix + i) + j), *(*(matrix + i) + (3 - j)));
        }
    }
}

int main() {
    // Matriks 4x4 yang sudah ditentukan
    int matriks[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Matriks sebelum rotasi:" << endl;
    displayMatrix(matriks);

    rotateMatrix(matriks);

    cout << "\nMatriks setelah rotasi 90 derajat:" << endl;
    displayMatrix(matriks);

    return 0;
}
