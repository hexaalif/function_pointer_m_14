#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    // int ans = ceil(x);
    // int ans = floor(x);
    // int ans = round(x);
    // int ans = sqrt(x);
    int ans = pow(x, y);
    // int ans = round(x);
    printf("%d", ans);
    return 0;
}