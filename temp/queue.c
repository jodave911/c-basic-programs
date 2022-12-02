#include <stdio.h>
#include<stdlib.h>
#define MAX 50

void insert();
void delete();
void display();
int q[MAX];
int rear = - 1;
int front = - 1;
void main(){
    int choice;
    while (1) {
        printf("1. to insert element to queue \n");
        printf("2. to delete element from queue \n");
        printf("3. display all elements of queue \n");
        printf("4. quit \n");
        printf("enter your choice : ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                  insert();
                   break;
            case 2:
                  delete();
                  break;
            case 3:
                 display();
                 break;
            case 4:
                  exit(1);
            default:
                printf("Wrong choice \n");
        } 
    } 
} 

void insert(){
    int item;
    if (rear == MAX - 1)
       printf("Queue Overflow \n");
    else{
        if (front == - 1)
                front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &item);
        rear= rear + 1;
        q[rear]=item;
    }
} 
void delete(){
    if (front == - 1 || front > rear){
        printf("Queue Underflow \n");
        return ;
    }
    else{
        printf("Element deleted from queue is : %d\n", q[front]);
        front = front + 1;
    }
} 
void display(){
    int i;
    if(front == - 1)
        printf("Queue is empty \n");
    else{
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", q[i]);
        printf("\n");
    }
} 
