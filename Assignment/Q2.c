#include<stdio.h>
void main()
{
    int n;
    float area, perimeter, r;
    printf("What do you want to find?\n");
    printf("0.Area\n");
    printf("1.Perimeter\n");
    scanf("%d",&n);
    switch(n)
    {
        case 0:
        printf("Enter a value for radius: ");
        scanf("%f",&r);
        area=3.14*r*r;
        printf("Area of the circle is %f\n",area);
        break;

        case 1:
        printf("Enter a value for radius: ");
        scanf("%f",&r);
        perimeter=2*3.14*r;
        printf("Perimeter of the circle is %f\n",perimeter);
        break;

        default:
        printf("Invalid input!\n");
        break;


    }

}