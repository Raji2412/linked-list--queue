/* Implementation of queue using linked list */
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
void enqueue(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(newnode));
    newnode->data=x;
    newnode->next=0;
    if(front==0&&rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void display()
{
    struct node *temp;
    if(front==0&&rear==0)
    {
        printf("empty");
    }
    else
    {
        temp=front;
        while(temp!=0)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
void dequeue()
{
    struct node *temp;
    if(front==0&&rear==0)
    {
        printf("empty");
    }
    else{
        temp=front;
        front=front->next;
        free(temp);
    }
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    dequeue();
    display();

    return 0;
}
