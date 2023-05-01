#include <stdio.h>

// int sum(int x, int y)
// {
//     int sum = x + y;
//     return sum;
// }
int sum()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int s = x + y;
    return s;
}

int main()
{

    printf("%d", sum());
    return 0;
}