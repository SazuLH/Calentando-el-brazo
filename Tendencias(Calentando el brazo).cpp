#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    int arr1[3] = { 3, 1, 2 };
    int arr2[4] = {2, 2, 1, 5};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << "Insercion: "<< arr2[i]<< " ";
            }
        }
    }
    
    return 0;
}





