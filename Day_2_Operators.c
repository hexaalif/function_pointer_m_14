#include <stdio.h>
#include <math.h>

int main()
{
    double cost;
    int tip, tax;
    scanf("%lf\n", &cost);
    scanf("%d\n", &tip);
    scanf("%d\n", &tax);
    // double cs = (cost / 100);
    // double ttip = (cs * tip);
    // double ttax = (cs * cost);
    float ttl = ((cost * tip) / 100 + (cost * tax) / 100 + cost);
    int round_cost;
    round_cost = ttl;
    float diff = ttl - round_cost;
    if (diff >= 0.5)
    {
        round_cost++;
        printf("%d", round_cost);
    }
    else
    {
        printf("%d", round_cost);
    }
    printf("\n");
    return 0;
}