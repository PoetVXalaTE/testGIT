//В данной действительной матрице размера m*n поменять местами строку, содержащую элемент с наибольшим значением, со строкой, содержащей элемент с наименьшим значением. Предполагается, что такой элемент единственный.
#include <iostream>
#include <algorithm>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(NULL));
    int a[2][2];
    int element;
    int c = 0, b = 0;
    for (int i = 0; i < 2; i++) {
        cout << endl;
        for (int j = 0; j < 2; j++) {
            a[i][j] = -15 + rand() % (30);
            cout << setw(4) << a[i][j];
        }
    }
    cout << endl;
    int min = a[0][0];
    int max = a[0][0];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
                c = i;
            }
            if (max > a[i][j]) {
                max = a[i][j];
                b = i;
            }
        }
    }
    cout << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            swap(a[i][j], a[c][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
}