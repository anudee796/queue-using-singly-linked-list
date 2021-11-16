#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;//userdefined datatype
}; //userdefined datatype is pointer var is pointer var we can access members of structure using arrow operator 
struct node *front,*rear;//userdefined datatype variable
int main(){
    int choice;
    while(1){
        printf("\n1.enqueue\n");
        printf("2.dequeue\n");
        printf("3.display\n");
        printf("4.exit\n");
        printf("enter the choice\n");
        scanf("%d",&choice);
    switch(choice){
        case 1:enqueue();
        break;
        case 2:dequeue();
        break;
        case 3:display();
        break;
        case 4:exit(0);
       }
    }
}
void enqueue(){
    struct node *newnode;//structnode is userdefined datatype struct node * is userdefineed dataype variable
    newnode=(struct node *)malloc(sizeof(struct node));
    struct node *temp;//userdefined datatype var if userdefined datatype is pointer we can access mem by ->operator
    printf("enter the data\n");
    scanf("%d",&newnode->data);
    if(front==NULL&&rear==NULL){
        front=newnode;
        rear=newnode;
        temp=newnode;
    }else{
        temp->next=newnode;
        temp=temp->next;
        rear=rear->next;
    }
}
void dequeue(){
    if(front==NULL&&rear==NULL){
        printf("queue is empty\n");
    }else{
        struct node *temp=front; //userdefined datatype var; if userdefined datatype var is poi we
        printf("del ele is %d",temp->data);
        front=front->next;
        free(temp);
       } 
    
}
void display(){
    struct node *temp=front;//userdefined dataype var 
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}