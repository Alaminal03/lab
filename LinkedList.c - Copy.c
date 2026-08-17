#include<stdio.h>
#include <stdlib.h>
#include "MS_3.h"

int main()
{
    int n,c,v,p,q;
    struct node *list;
    q=sizeof (struct node);
    list=(struct node*)malloc(q);
    list->value=0;
    list->add=NULL;


    while(1)
    {
     printf("\n .............. Menu.............");
     printf("\n press 0 for quit ");
     printf("\n Press 1 for insertion at last");
     printf("\n Press 2 for insertion at specific position");
     printf("\n press 3 for display linked list");
     printf("\n Press 4 for deletion from specific position");
     printf("\n Press 5 for linear search");
     printf("\n Press 6 for count node");

     printf("\nEnter your choice:");
     scanf("%d",&c);

     switch(c)
     {
        case 0: exit(0);
            break;
        case 1:
            printf("\n Choice = Insertion at last position\n");
            printf("Enter New Value:");
            scanf("%d",&v);
            LinkedList_InsertionLast(list,v);
            printf("\nChoice = Inserted Successfully at specific position");
            break;
        case 2:
            printf("\nChoice = Insertion at specific positon");

            break;
        case 3:
            printf("\n Choice = Display \n");
            if(list->add!=NULL)
            LinkedList_Display(list);
            else
                printf("\nList is Empty");
            break;
        case 4:
            printf("\nChoice = Deletion at specific positon");
            break;
        case 5:
            printf("\n choice = Linear search");

            break;

        case 6:
            printf("\n Choice = Bubble Sort");

            break;

        case 8:
        break;
        default:printf("\n Wrong choice");
     }
    }

   // int a[n];
    return 0;
};

