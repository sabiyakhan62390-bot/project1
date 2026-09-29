#include <stdio.h>
#define max 7
int stack[max]; 
int top=-1;
void push(){
    int value;
    if(top==max-1){
        printf("stack overflow");
    }else{
        printf("enter value:");
        scanf("%d",&value);
        top++;
        stack[top]=value;

    }
}
void pop(){
    if(top==-1){
        printf("stack underflow");
    }else{
        printf("%d\n",stack[top]);
        top--;
    }
}
void peek(){
    if(top==-1){
        printf("stack is empty!");
    }
    else{
        printf("%d\n",stack[top]);
    }
}
void display(){
    if(top==-1){
        printf("stack is empty!");
    }else{
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }printf("\n");
    }
}
int main(){
    int choice, value;
    do{
        printf("1 for push\n");
        printf("2 for pop\n");
        printf("3 for peek\n");
        printf("4 for display\n");
        printf("5 for exit\n");
        
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                return 0;
            default:
                printf("invalid choice");


        }
    }while(choice!=6);
    return 0;
}