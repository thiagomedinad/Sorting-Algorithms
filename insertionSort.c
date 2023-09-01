#include <stdio.h>
#include <stdlib.h>

int insertionSort(int A[], int n)
{
    int key = 0;
    for (int i = 0; i < n - 1; i++)
    {
       key = A[i+1];
       for (int j = i; j >= 0; j--)
       {
            if (key < A[j])
            {
                A[j+1] = A[j];
                A[j] = key;
            }
       }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }

    return 0;
}


int main() 
{
    int array[12] = {3, 1, 9, 2, 6, 90, 5, 77, 101, 99, 54, 23};
    insertionSort(array, 12);
}