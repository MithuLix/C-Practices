#include<stdio.h>

main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    switch(age)
    {
    case 13:
        printf("You're 13 years old");
        break;

    case 14:
        printf("You're 14 years old");
        break;

    case 15:
        printf("You're 15 years old");
        break;

    case 16:
        printf("You're 16 years old");
        break;

    default:
        printf("You're not in age limit");
        break;
    }
}
