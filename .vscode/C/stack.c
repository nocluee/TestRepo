#include<stdio.h>
#include<conio.h>
#define size 5
int stk_arr[size];
int top=-1;
int ele;
int isempty();
int isfull();
void push();
void pop();
void peek();
void display();
void main(){
      int a;
    char ch;
    printf("\n STACK IMPLEMENTATION\n");
    do{
    printf("\n\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\nYour Choice : ");
    scanf("%d",&a);
    switch(a){
        case 1 : push();
        break;
        case 2: pop();
        break;
        case 3: peek();
        break;
        case 4: display();
        break;
        default: printf("Invalid Input");
    }
    printf("\nContinue?");
    ch=getche();
    }while(ch=='y'||ch=='Y');
    _getch();

}
int isempty(){
    if(top==-1){
        return 0;
    }
    else{
        return 1;
    }
}
int isfull(){
    if(top==size-1){
        return 0;
    }
    else{
        return 1;
    }
}
void push(){
    if(isfull()){
        printf("\nEnter an element to be pushed: ");
        scanf("%d",&ele);
        top=top+1;
        stk_arr[top]=ele;                                                       //Mistake Spotted
        printf("Element Pushed Succcessfully");
    }
    else{
        printf("Stack Overflow!");
    }
}
void pop(){
    if(isempty()){
        top=top-1;
                                                                                //Mistake Spotted
        printf("Element Popped Successfully");

    }
    else{
        printf("Stack Underflow");
    }
}
void peek(){
    printf("Peek: %d",stk_arr[top]);
}
void display(){
    for(int i=0;i<size;i++){ 
    printf("%d",stk_arr[i]);
    printf("\n");
    }
}

