#include <stdio.h>
#include <stdlib.h>
#include"ds_3.h"

int main()
{
    int a[50], n, c, v, p, q;

t:
    printf("Enter Array (1-50) = ");
    scanf("%d", &n);

    if (n > 0 && n <= 50)
    {
        OneINDarray(a, n);
    }
    else
    {
        printf("\nWrong Number of Values\n");
        goto t;
    }

    while (1)
    {
        printf("\n..........MENU.............\n");
        printf("\nPress 0 for quit");
        printf("\nPress 1 for insertion at last position");
        printf("\nPress 2 for inserting at specific position");
        printf("\nPress 3 for display array");
        printf("\nPress 4 for deletion from specific position");
        printf("\nPress 5 for linear search");
        printf("\nPress 6 for bubble sort");
        printf("\nPress 7 for binary search");

        printf("\nEnter your choice: ");
        scanf("%d", &c);

        switch (c)
        {
        case 0:
            exit(0);

        case 1:
            printf("\nChoice Inserting array = ");
            scanf("%d",&v);
            int a = ONEDINTArrayInput_LP(a,n,v);
            printf("Result = %d",a);



            break;

        case 2:
            break;

        case 3:
            printf("\nChoice = Display\n");
            if (n > 0)
            {
                one_d_int_array_display(a, n);
            }
            else
            {
                printf("Array is empty.\n");
            }
            break;

        case 4:
            break;

        case 5:
            break;

        case 6:
            break;

        case 7:
            break;

        default:
            printf("\nInvalid Choice\n");
            break;
        }
    }

    return 0;
}
