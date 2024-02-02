#include <stdio.h>
#define SIZE 10

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortByincrease(int array[], int start, int end)
{
    for (int i = start; i < end; i++)
    {
        for (int j = start; j < end; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

void sortBydecrease(int array[], int start, int end)
{
    for (int i = start; i < end; i++)
    {
        for (int j = start; j < end; j++)
        {
            if (array[j] < array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

void printArr(int array[], int size)
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

    int halfSize = SIZE / 2;
    sortByincrease (array, 0, halfSize);
    sortBydecrease (array, halfSize, SIZE);
    printArr(array, SIZE);
    return 0;
}
