// All all stack operations in Linked List.
#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
};
struct Node *head=NULL;
void push(){
    printf("Enter the data : \n");
    if(head==NULL){
        head=(struct Node*)malloc(sizeof(struct Node));
        head->next=NULL;
        scanf("%d",&head->data);
        printf("Node Added 1\n");
    }else{
        struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
        struct Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->next=NULL;
    scanf("%d",&new_node->data);
    printf("Node Added 2\n");
    }
}
void pop(){
    if(head==NULL){
        printf("No Node in stack\n");
    }else{
        if(head->next!=NULL){
            struct Node *temp=head;
            struct Node *temp2=head;
            temp=temp->next;
            while(temp->next!=NULL){
                temp2=temp2->next;
                temp=temp->next;
            }
            temp2->next=NULL;
            free(temp);
        }else{
            free(head);
            head=NULL;
        }
    }
}
void display(){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d,",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    int i;
    while(1){
        printf("\n 1 for push\n 2 for pop\n 3 for display\n 4 for exit\n");
        scanf("%d",&i);
    switch(i){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}
