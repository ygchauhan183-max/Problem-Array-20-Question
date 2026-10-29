#include <stdio.h>

int main()
{
    // int arr[2][3] = {{2, 3, 6}, {7, 6, 4}};
    // int sum = 0;
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum = sum + arr[i][j];
    //     }
    // }
    // printf("Sum is = %d", sum);
    int n1, n2, n3;
    int m1, m2, m3;
    printf("Enter value: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    scanf("%d %d %d", &m1, &m2, &m3);
    int arr[2][3] = {{n1, n2, n3}, {m1, m2, m3}};
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("Sum is = %d", sum);
    return 0;
}