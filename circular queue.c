#include<stdio.h>
#include<stdlib.h>
#define max 5
int a[max];
int front=-1,rear=-1;
int main(){
    int choice;
    while(1){
        printf("\nenqueue\n");
        printf("dequeue\n");
        printf("display\n");
        printf("exit\n");
        printf("enter the choice");
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
    int data;
    printf("enter the data\n");
    scanf("%d",&data);
    if(front==-1&&rear==-1){
        front=0;
        rear=0;
        a[rear]=data;
    }else if(front==(rear+1)%max){
        printf("queue is full\n");
    }else{
        rear=(rear+1)%max;
        a[rear]=data;
    }
}
void dequeue(){
    if(front==-1&&rear==-1){
        printf("queue is empty\n");
    }else if(front==rear){
        front=-1;
        rear=-1;
    }else{
        printf("deleted element is %d",a[front]);
        front=(front+1)%max;
        
    }
}
void display(){
    int i=front;
    if(front==-1&&rear==-1){
        printf("queue is empty\n");
    }else{
        while(i!=rear){
            printf("%d ",a[i]);
            i=(i+1)%max;
        }
        printf("%d",a[rear]);
    }
}