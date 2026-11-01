#include <stdio.h>

int main()
{
    int arr[9] = {1, 2, 3, -4, 5, -6, -7, 8, 9};
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] > 0)
        {
            printf("Positive: %d\n", arr[i]);
        }
        else if (arr[i] < 0)
        {
            printf("Negative: %d\n", arr[i]);
        }
        else
        {
            printf("Zero: %d", arr[i]);
        }
    }

    return 0;
}