#include<stdio.h>
#include<stdlib.h>
#include"ds_3.h"

int main()
{
    int n, c, v, p, q;
    struct node *list;
    q = sizeof(struct node);
    list = (struct node*)malloc(q);
    list->value = 0;
    list->address = NULL;

    while(1)
    {
        printf("\n..........Menu.........");
        printf("\nPress 0 for quit");
        printf("\nPress 1 for insertion at last position");
        printf("\nPress 2 for insertion at specific position");
        printf("\nPress 3 for display array");
        printf("\nPress 4 for deletion from specific position");
        printf("\nPress 5 for linear search");
        printf("\nPress 6 for count node");

        printf("\nEnter your choice : ");
        scanf("%d", &c);

            switch(c)
            {
                case 0: exit(0);
                        break;
                case 1:
                        printf("\nChoice = Insertion at last position\n");
                        printf("Enter new value : ");
                        scanf("%d", &v);
                        LinkedList_InsertionLast(list, v);
                        printf("\nInserted Successfully at the last position");
                        break;

                case 2:
                        printf("\nChoice = Insertion at specific position\n");
                        if(list->address != NULL)
                        {
                            n = LinkedList_CountNode(list);
                         M: printf("\nEnter position between %d to %d : ", 1, n);
                            scanf("%d", &p);
                            if(p>=1 && p<=n)
                            {
                                printf("\nEnter value : ");
                                scanf("%d", &v);
                                LinkedList_InsertSpecific(list, p, v);
                                printf("\nInserted %d at position %d\n", v, p);
                            }
                            else
                            {
                                printf("\nInvalid position\n");
                                goto M;
                            }
                        }
                        else
                            printf("\nList is empty\n");
                        break;

                case 3:
                        printf("\nChoice = Display linked list\n");
                        if(list->address != NULL)
                        {
                            LinkedList_Display(list);
                        }
                        else{
                            printf("\nList is Empty");
                        }
                        break;

                case 4:
                        printf("\nChoice = Deletion at specific position\n");
                        if(list->address != NULL)
                        {
                            n = LinkedList_CountNode(list);
                         N: printf("\nEnter position between %d to %d : ", 1, n);
                            scanf("%d", &p);
                            if(p>=1 && p<=n)
                            {
                                LinkedList_DeleteSpecific(list, p);
                            }
                            else
                            {
                                printf("\nInvalid position\n");
                                goto N;
                            }
                        }
                        else
                            printf("\nList is empty\n");
                        break;

                case 5:
                        printf("\nChoice = Linear Search\n");
                        if(list->address != NULL)
                        {
                            printf("\nEnter value for searching : ");
                            scanf("%d", &v);

                            LinkedList_LinearSearch(list, v);
                        }
                        else
                            printf("\nList is empty\n");
                        break;

                case 6:
                        printf("\nChoice = Count Node\n");
                        if(list->address != NULL)
                        {
                            n = LinkedList_CountNode(list);
                            printf("\nTotal Nodes = %d\n", n);
                        }
                        else{
                            printf("\nList is Empty");
                        }
                        break;

                default:
                    printf("\nWrong choice");
            }
    }
    return 0;
}
