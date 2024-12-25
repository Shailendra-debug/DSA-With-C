#include<stdio.h>
#include<stdlib.h>
#define max 5
#define false 0
#define true 1
int arr[5];
int top=-1;
int isFull(){
    // Function to check if the stack is full
    if(top>=max){
        return true;
    }
    return false;
}
int isEmpty(){
    // Function to check if the stack is empty
    if(0>top){
        return true;
    }
    return false;
}
void push(){
    //Function to push an element onto the stack
    int data;
    if(!isFull()){
        printf("Enter the data\n");
        scanf("%d",&data);
        top++;
        arr[top]=data;
        printf("Element is pushed\n");
    }else{
          printf("Stack is full\n");
    }
}
void pop(){
    // Function to pop an element from the stack
    if(!isEmpty()){
        top--;
        printf("Element is poped\n");
    }else{
        printf("Stack have no Elements\n");
    }
}
void display(){
     //Function to get the display all elements of the stack
    if(isEmpty()){
        printf("Stack have no Elements\n");
        return;
    }
    printf("Stack Elements Are :- ");
    for(int i=top;i>=0;i--){
        if(i==0){
            printf("%d",arr[i]);
        }else{
            printf("%d,",arr[i]);
        }
    }
    printf("\n");
}



int main(){
  int i;
  char t[]="True";
  char f[]="False";
    while(1){
        printf(" 1 for push Element \n 2 for pop Element \n 3 for display Elements\n 4 for Peek Element \n 5 for isFull\n 6 for isEmpty \n 7 for Exit \n");
        scanf("%d",&i);
        switch(i){
            case 1:
                // case to push an element onto the stack
                push();
                break;
            case 2:
                // case to get the top element of the stack
                pop();
                break;
            case 3:
                // case to get the display all elements of the stack
                display();
                break;
            case 4:
                // case to get the top element of the stack
                printf("%d\n",arr[top]);
                break;
            case 5:
                // case to check if the stack is full
                printf("%s ",isFull()?t:f);
                break;
            case 6:
                //case to check if the stack is empty
                printf("%s\n",isEmpty()?t:f);
                break;
            case 7:
                // case to exit to code
                return 0;
            default:
                printf("wrong number\n");
        }
        printf("\n");
    }
}
