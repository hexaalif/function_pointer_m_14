#include <stdio.h>

int main()
{
    double cost;
    int tip, tax;
    scanf("%.2lf\n", &cost);
    scanf("%d\n", &tip);
    scanf("%d\n", &tax);
    float ttip = (cost / 100) * tip;
    float ttax = (tax / 100) * cost;
    int ttl = cost + ttax + ttip;
    printf("%d", ttl);
    return 0;
}