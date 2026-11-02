#include <stdio.h>

int main() {
    int arr[2][3] = {{2,4,5}, {1,2,1}};
    int mul = 1;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mul = mul*arr[i][j];
        }
        
    }
    printf("Array of Multiplication = %d", mul);
    return 0;
}