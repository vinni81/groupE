#include <stdio.h>
#define SIZE 5

int main()
{
    int array[SIZE];
    float sum = 0.0;
    printf("Enter %d integers in a gap: \n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("%.3f\n", sum / SIZE);
    return 0;
}
