//PGM::24
//Queue using Linked List
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *front,*rear;
void display()
{
    struct node *ptr;
    if(front==NULL)
        printf("\nQueue is empty...");
    else
    {
        ptr=front;
        printf("\nQueue elements are: ");
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->link;
        }
    }
}
void enqueue(int item)
{
    struct node *new;
    new= (struct node *)malloc(sizeof(struct node ));
    new->data=item;
    new->link=NULL;
    if(front==NULL)
        front=rear=new;
    else
    {
        rear->link=new;
        rear=new;
    }
    display();
}
void dequeue()
{
    struct node *temp;
    if(front==NULL)
        printf("Queue is empty.");
    else if(front==rear)
    {
        temp=front;
        front=rear=NULL;
        free(temp);
        display();
    }
    else
    {
        temp=front;
        front=front->link;
        free(temp);
        display();
    }
}
void main()
{
    int opt,x;
    do
    {
        printf("\nEnter the option\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1: printf("Enter the new data: ");
                    scanf("%d",&x);
                    enqueue(x);
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
        }
    }while(opt!=4);
}

/*
OUTPUT::
Enter the option
1.ENQUEUE
2.DEQUEUE
3.DISPLAY
4.EXIT
1
Enter the new data: 22
Queue elements are: 22    
Enter the option
1.ENQUEUE
2.DEQUEUE
3.DISPLAY
4.EXIT
1
Enter the new data: 33
Queue elements are: 22    33    
Enter the option
1.ENQUEUE
2.DEQUEUE
3.DISPLAY
4.EXIT
2
Queue elements are: 33    
Enter the option
1.ENQUEUE
2.DEQUEUE
3.DISPLAY
4.EXIT
2
Queue is empty...
Enter the option
1.ENQUEUE
2.DEQUEUE
3.DISPLAY
4.EXIT
3
Queue is empty...
Enter the option
1.ENQUEUE
2.DEQUEUE
3.DISPLAY
4.EXIT
4
*/