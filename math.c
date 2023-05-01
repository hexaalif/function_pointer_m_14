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
    double ans = pow(x, y);
    // int ans = round(x);
    printf("%0.2lf", ans);
    return 0;
}