#include <stdio.h>

#define SIZE 10

void inarr(int array[], int size)
{
    printf("enter %d integers of array in a gap:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
}

void revHalfArr(int array[], int start, int end)
{
    while (start < end)
    {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}

void outarr(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int array[SIZE];
    inarr(array, SIZE);
    revHalfArr(array, 0, SIZE / 2 - 1);
    revHalfArr(array, SIZE / 2, SIZE - 1);
    outarr(array, SIZE);
    return 0;
}
