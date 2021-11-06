#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int arr[10];
    int n;

    cout << "Ingrese la cantidad de valores a guardar: "; cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese un numero en la posicion " << i << " del array: "; cin >> arr[i];
        cout << endl;
    }
    for (int i = n; i >= 0 ; i--)
    {
        cout << arr[i];
        cout << endl;
    }

}