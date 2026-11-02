#include <stdio.h>

int main()
{
    int arr[2][3] = {{3, 4, 2}, {6, 8, 9}};
    int t[3][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            t[j][i] = arr[i][j]; // swap the position
        }
    }
    printf("Transpose:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}