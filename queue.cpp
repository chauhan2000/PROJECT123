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
      struct node *tmp;
    int item;
    if( isEmpty( ) )
    {
        printf("Queue Underflow\n");
        exit(1);
    }
    tmp=front;
    item=tmp->info;
    front=front->link;
    free(tmp);
    return item;
}


void display()
{
   //dimri will add here
}
