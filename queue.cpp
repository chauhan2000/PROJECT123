#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
}*front=NULL,*rear=NULL;

void insert(int item);
int del();
int isEmpty();
void display();

main()
{
    int choice,item;
    while(1)
    {       
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display all elements of the queue\n");
        printf("4.Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            printf("Input the element for adding in queue : ");
            scanf("%d",&item);
            insert(item);
            break;
        case 2:
            printf("Deleted element is  %d\n",del());
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default :
            printf("Wrong choice\n");
        }
    }
}

void insert(int item)
{
    //sajal will add here
	}


int del()
{
    //pratyush will add here
}


void display()					//Required changes have been done
{
   int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        /*If queue is initially empty */
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
}
