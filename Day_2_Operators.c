#include <stdio.h>
#include <math.h>

int main()
{
    double cost;
    int tip, tax;
    scanf("%lf\n", &cost);
    scanf("%d\n", &tip);
    scanf("%d\n", &tax);
    double cs = cost / 100;
    double ttip = cs * tip;
    double ttax = cs * cost;
    int ttl = ttax + cost + ttip;
    printf("%d", ttl);
    return 0;
}