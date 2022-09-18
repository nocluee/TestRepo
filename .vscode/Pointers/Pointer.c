#include<stdio.h>
int main()
{
    int x = 5;
    int *p;
    p=&x;
    printf("Address of X: %d\n",&x);
    printf("Value of X: %d\n",x);
    printf("Address of P: %d\n",&p);
    printf("Value stored in address of P: %d\n",p);
    printf("Value at which P is pointing to: %d\n",*p);
    return 0;
}