struct node
{
    int value;
    struct node *address;
};

void LinkedList_InsertionLast(struct node *list, int v)
 {
     struct node* tmp;
     while(list->address != NULL)
     {
         list = list->address;
     }
     tmp = (struct node *)malloc(sizeof(struct node));
     tmp->value = v;
     tmp->address = list->address;
     list->address = tmp;
 }

void LinkedList_Display(struct node *list)
{
    while(list->address != NULL)
    {
        printf("\t->%d", list->address->value);
        list = list->address;
    }
}

int LinkedList_CountNode(struct node* list)
{
    int count = 0;
    while(list->address != NULL)
    {
        count++;
        list = list->address;
    }
    return count;
}

void LinkedList_LinearSearch(struct node* list, int vv)
{
    int flag = 0;
    while(list->address != NULL)
    {
        if(list->address->value == vv)
        {
            printf("\nFound\n");
            flag = 1;
            break;
        }
        list = list->address;
    }

    if(flag == 0)
    {
        printf("\nNot Found\n");
    }
}

void LinkedList_InsertSpecific(struct node* list, int pp, int vv)
{
    int c = 0;
    struct node* tmp;
    while(list->address != NULL)
    {
        if(c == pp-1)
            break;
        list = list->address;
        c = c+1;
    }
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->value = vv;
    tmp->address = list->address;
    list->address = tmp;
}

void LinkedList_DeleteSpecific(struct node* list, int pp)
{
    int c = 0;
    struct node* tmp;
    while(list->address != NULL)
    {
        if(c == pp-1)
            break;
        list = list->address;
        c = c+1;
    }
    tmp = list->address;
    list->address = tmp->address;
    printf("\nDelete %d from position %d : ", tmp->value, pp);


    // return memory to computer
    free(tmp);
}
