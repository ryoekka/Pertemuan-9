//RYO EKKA SAPUTRA - A11.2022.14447
//KELOMPOK = A11.4212

#include <iostream>

using namespace std;

int recursiveAddition(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + recursiveAddition(n - 1);
    }
}

int recursiveReduction(int arr[], int size) {
    if (size == 0) {
        return 0;
    } else if (size == 1) {
        return arr[0];
    } else {
        return arr[size-1] + recursiveReduction(arr, size - 1);
    }
}

int recursiveMultiplication(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + recursiveMultiplication(a, b - 1);
    }
}


int recursiveDiv(int dividend, int divisor) {
    if (dividend < divisor) {
        return 0;
    } else if (dividend == divisor) {
        return 1;
    } else {
        return 1 + recursiveDiv(dividend - divisor, divisor);
    }
}

int recursiveSquare(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (2 * n - 1) + recursiveSquare(n - 1);
    }
}

int main()
{
    int number = 6;
    int sum = recursiveAddition(number);

    cout << "hasil dari penjumlahan 1 sampai " << number << " adalah " << sum << endl;

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = recursiveReduction(arr, size);

    cout << "Hasilnya adalah " << result << endl;

    int num1 = 5;
    int num2 = 3;

    int product = recursiveMultiplication(num1, num2);

    cout << "hasil dari " << num1 << " dan " << num2 << " adalah " << product << endl;

    int dividend = 15;
    int divisor = 3;

    int quotient = recursiveDiv(dividend, divisor);

    cout << "hasil dari " << dividend << " dibagi  " << divisor << " adalah " << quotient << endl;

    int apa = 5;
    int square = recursiveSquare(number);

    cout << "pangkat dari " << number << " adalah " << square << endl;
    return 0;
}
