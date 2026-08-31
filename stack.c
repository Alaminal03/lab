#include<stdio.h>
#include<stdlib.h>
#include"ds_lab.h"

int main()
{
    struct node *top=NULL;
     int n, v, c;
     while(1)
    {
        printf("\n..........Menu.........\n");
        printf("\nPress 0 for quit");
        printf("\nPress 1 for push");
        printf("\nPress 2 for pop");
        printf("\nPress 3 for display");
        printf("\nPress 4 for count node");
        printf("\nEnter your choice\n");
        scanf("%d", &c);

            switch(c)
            {
                case 0: exit(0);
                        break;
                case 1:
                        printf("\nChoice = push\n");
                        printf("Enter value of addition\n");
                        scanf("%d", &v);
                        top=push_stack(top,v);
                        break;

                case 2:
                        printf("\nChoice = pop\n");
                        if(top != NULL)
                        top=pop_stack(top);
                        else
                        printf("\nstack is empty\n");
                        break;
                case 3:
                        printf("\nChoice = Display\n");
                        if(top!= NULL)

                            Display_stack(top);

                        else

                            printf("\nstack is Empty");

                        break;

             case 4:
             printf("\nChoice = Count\n");

         if(top != NULL)
         {
              n = Count_stack(top);
               printf("\nTotal Nodes = %d\n", n);
        }
        else
             {
              printf("\nstack is Empty");
          }

                       break;


                default:
                    printf("\nWrong choice");
            }
    }
    return 0;
}