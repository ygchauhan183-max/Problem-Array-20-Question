#include <stdio.h>

int main()
{
    int arr[2][3] = {{2, 3, 4}, {6, 9, 7}};
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("Element Sum is = %d", sum);
    return 0;
}