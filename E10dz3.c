#include <stdio.h>

#define SIZE 12

void rightOffset(int array[], int size, int offset)
{
    int temp[offset];
    for (int i = 0; i < offset; i++)
    {
        temp[i] = array[size - offset + i];
    }
    for (int i = size - 1; i >= offset; i--)
    {
        array[i] = array[i - offset];
    }
    for (int i = 0; i < offset; i++)
    {
        array[i] = temp[i];
    }
}

void printArrOffset(int array[], int size)
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

    printf("enter %d integers in a gap: \n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }

    int shift = 4;
    rightOffset(array, SIZE, shift);
    printArrOffset(array, SIZE);

    return 0;
}

