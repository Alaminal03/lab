#include<stdio.h>
#include <stdlib.h>
#include "DS_3.h"

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
        printf("\n press 3 for display array");
        printf("\n Press 4 for deletion");
        printf("\n Press 5 for linear search");
        printf("\n Press 6 for count node");


        printf("\nEnter your choice: ");
        scanf("%d",&c);

        switch(c)
        {
        case 0:
            exit(0);
            break;
        case 1:
            printf("\nchoice = Insertion at last position\n");
            printf("Enter New Value:");
            scanf("%d",&v);
            LinkedList_InsertionLast(list,v);
            printf("\nInserted Successfully at the last position");
            break;
        case 2:
            printf("\nChoice = Insertion at specific position\n");

            break;
        case 3:
            printf("\n Choice = Display Linked List");
            if(list->add!=NULL)
             LinkedList_Display(list);
            break;
        case 4:
            printf("\nChoice = Deletion from specific position\n");

            break;
        case 5:
            printf("\nChoice = Linear Search\n");

            break;
        case 6:
            printf("/nChoice = Count node/n");

            break;

        default:
            printf("n Wrong choice");
        }
    }


    return 0;
};
