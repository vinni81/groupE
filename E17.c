#include <stdio.h>

int main()
{
    const int SIZE = 10;
    int arr[SIZE];
    int nonRepeat[SIZE];
    int nonRepeatCount = 0;

    printf("enter %d integers in a gap: \n", SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < SIZE; i++)
    {
        int nonrep = 1;

        for (int j = 0; j < SIZE; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                nonrep = 0;
                break;
            }
        }

        if (nonrep)
        {
            nonRepeat[nonRepeatCount] = arr[i];
            nonRepeatCount++;
        }
    }

    for (int i = 0; i < nonRepeatCount; i++)
    {
        printf("%d ", nonRepeat[i]);
    }
     return 0;
}

