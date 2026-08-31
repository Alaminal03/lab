struct node
{
    int value;
    struct node *add;
};

struct node* push_stack(struct node *t, int vv)
{
    struct node *temp;

    temp = (struct node*)malloc(sizeof(struct node));

    temp->value = vv;
    temp->add = t;

    return temp;
}

struct node* pop_stack(struct node *t)
{
    struct node *tmp;

    tmp = t->add;

    printf("\nDeleted %d from top:", t->value);

    free(t);

    return tmp;
}

void Display_stack(struct node *t)
{
    while(t != NULL)
    {
        printf("\n%d", t->value);
        t = t->add;
    }
}

int Count_stack(struct node *t)
{
    int d = 0;

    while(t != NULL)
    {
        d++;
        t = t->add;
    }

    return d;
}