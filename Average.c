 #include <stdio.h>

int main()
{
    int n1, n2, n3;
    int m1, m2, m3;
    printf("Enter first 3 value:");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("Enter second 3 value:");
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
    float avg = sum / 6;
    printf("Sum is = %d\n", sum);
    printf("Average = %.2f", avg);
     return 0;
 }