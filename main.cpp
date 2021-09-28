#include <iostream>
using namespace std;
int main() {
    
    cout << "Enter size of the first matrix " << endl;
    int row1, col1; // строки и сттолбцы первой матрицы в будущем их кол-во
    cin >> row1 >> col1; // ввод
    int arr1[row1][col1];
    
    cout << "Enter size of the second matrix " << endl;
    int row2, col2;
    cin >> row2 >> col2;
    int arr2[row2][col2];
    
    if (col1 != row2) // введение условия о правиле умножения матриц
    {
        cout << "Eto gavno nado peredelat'" << endl;
        return 0;
    }
    cout << "Enter elements of the first matrix " << endl;

    for (int a = 0; a < row1; a++) //индексатор "а" который бежит по строчкам первого массива
            for (int b = 0; b < col1; b++) // вложенный цикл бегущий по столбцам
                    cin >> arr1[a][b]; // цикл заполняющий массив
        cout << "First matrix " << endl;
        for (int a = 0; a < row1; a++)
        {
            for (int b = 0; b < col1; b++)
            {
                cout << arr1[a][b] << "\t";
            }
            cout << endl;
        } // аналогичный цикл, но выводящий массив
        cout << "Enter elements of the second matrix " << endl; // вторая матрица
        for (int c = 0; c < row2; c++)
        {
            for (int d = 0; d < col2; d++)
            {
                cin >> arr2[c][d];
            }
        }
            cout << "Second matrix " << endl;
        for (int c = 0; c < row2; c++)
        {
            for (int d = 0; d < col2; d++)
            {
                cout << arr2[c][d] << "\t";
            }
            cout << endl;
        }
}
