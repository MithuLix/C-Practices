#include<stdio.h>>

main()
{
    int x = 5, y = 2, z = 34;
    int *ptr;
    ptr = &x;
    printf("x = %d\n", *ptr);
    printf("value of x = %d\n", *ptr);

    ptr = &y;
    printf("z = %d\n", *ptr);
    printf("value of z = %d\n", *ptr);

    ptr = &z;
    printf("z = %d\n", *ptr);
    printf("value of z = %d\n", *ptr);



    getch();
}
