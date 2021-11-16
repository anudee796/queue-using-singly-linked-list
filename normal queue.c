#include<stdio.h>
#include<stdlib.h>
#define max 5
void enqueue();
int a[max];
int front=-1,rear=-1;
int main(){
    int choice;
    while(1){
        printf("\n1.enqueue\n");
        printf("2.dequeue\n");
        printf("3.display\n");
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
    int data;
    printf("enter the data");
    scanf("%d",&data);
    if(front==-1&&rear==-1){
        front=0;
        rear=0;
        a[rear]=data;
    }else if(rear==max-1){
        printf("queue is full\n");
    }else{
        rear++;
        a[rear]=data;
        
    }
}

void dequeue(){
    if(front==-1&&rear==-1){
        printf("queue is empty");
    }else if(front>rear){
        front=-1;
        rear=-1;
    }else{
        printf("deleted element is %d",a[front]);
        front++;
    }
}
void display(){
    for(int i=front;i<=rear;i++){
        printf("%d ",a[front]);
    }
}
