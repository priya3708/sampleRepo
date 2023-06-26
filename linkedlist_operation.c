#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct  node*head;
void begin_insert();
void last_insert();
void random_insert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
void main(){
    int choice=0;
    while (choice!=9)
    {
        printf("\n***********MAIN_MENU*************\n");
        printf("\nChoose_an_option_from_the_following\n");
        printf("\n================================================\n");
        printf("\n1.Insert at beginning.\n 2.Insert at last. \n3. Insert at random location.\n4. Delete in the beginning.\n 5. Delete in the last.\n6.Delete node after specified location .\n.7Search for an element. \n 8. Show.\n9.Exit.\n");
        printf("\nEnter yorr choice.\n");
        switch (choice)
        {
        case 1:
        begin_insert();
            break;
            case 2:
            last_insert();
            break;
            case 3:
            random_insert();
            break;
            case 4:
            begin_delete();
            break;
            case 5:
            last_delete();
            break;
            case 6:
            random_delete();
            break;
            case 7:
            search();
            break;
            case 8:
            display();
            break;
            case 9:
            exit(0);
            break;
            default:
            printf("Enter a valid choice");
        }
    }
}
void begin_insert()
{
    struct node*ptr;
    int item;
    ptr =(struct node*)malloc(sizeof(struct node*));
    if(ptr==NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        printf("\nEnter_Value\n");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("\nNode_inserted");
    }
}
void last_insert()
{
    struct node*ptr,*temp;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        printf("\nEnter_Value\n");
        scanf("%d",&item);
        ptr->data=item;
        if(head==NULL)
        {
            ptr->next=NULL;
            head=ptr;
            printf("\nNode_inserted\n");
        }
        else 
        {
            temp=head;
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=NULL;
            printf("\nNode_inserted\n");
        }
    }
}
void random_insert()
{
    int i,loc,item;
    struct node*ptr,*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf(" \nOVERFLOW\n");
    }
}
 