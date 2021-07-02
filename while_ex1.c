#include<stdio.h>

int main()
{
    int sum = 0;
    int i = 1; 
    while (1)

    {
        sum += i;
        i++;
    }
    printf("1부터 100사이 정수 합 : %d", sum);

    return 0;
}