#include<stdio.h>
#include<math.h>

main()
{
    double r, area, pi;
    printf("Enter the radius: ");
    scanf("%lf", &r);
    pi = acos(-1);
    area = pi * pow(r, 2);
    printf("Area : %lf\n", area);

    return 0;
}
