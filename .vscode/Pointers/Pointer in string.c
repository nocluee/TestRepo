#include<stdio.h>
#include<string.h>
void print(char *ptr)  
/*Pointer taken as formal argument
Since pointer will point to the address in the main where the value has to be insertred */
{
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    printf('\n');
}
int main()
{
    char C[20]="Hello";
    print(C);
    
}