void one_d_int_array_display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void OneINDarray(int a[], int n)
{
    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
int ONEDINTArrayInput_LP(int aa[],int nn,int vv)
{

    aa[nn]=vv;
    return nn+1;
}
int ONEDINTArrayInput_SP(int aa[50],int nn,int vv,int pp)
{
    int i;
    for (i = nn; i >= pp; i--)
    {
        aa[i + 1] = aa[i];
        
    }
    aa[pp] = vv;
    return nn + 1;
}
int oneDIntDelSP(int aa[50],int nn,int pp)
{
    int i;
    for (i = pp; i < nn;i++)
    {
        aa[i] = aa[i + 1];
    }
    return nn - 1;
}
void OneIntArrayLeanerSearch(int aa[50],int nn,int vv)
{
    int i, c = 0;
    for (i = 1; i < nn;i++)
    {
        if(vv==aa[i])
        {
            printf("\nFound at position = %d\n", i);
            c = c + 1;
        }
    }
    if(c==0)
    {
        printf("\nNot Found");
    }
    else
    {
        printf("\nTotal Found = %d\n", c);
    }
}
 void OneDIntArrayBubble_Sort(int aa[50], int nn)
 {
     int i, j, temp;
     for (int i = 1; i <= nn;i++)
     {
         for (j = i; j <= nn;j++)
         {
            if(aa[j] > aa[j+1])
            {
                temp = aa[j];
                aa[j] = aa[j + 1];
                aa[j + 1] = temp;
            }

         }
     }
 }
void OneDIntArrayBinary_Search(int aa[50],int nn,int vv)
 {
     int beg, end, mid;
     OneDIntArrayBubble_Sort(aa, nn);
     beg = 0;
     end = nn-1;
     
    while(beg<=end)
    {
        mid = (beg + end) / 2;
        if(vv==aa[mid])
        {
            printf("\nFound");
            return;
        }
        else if(vv>aa[mid])
        {
            beg = mid + 1;
        }
        else if(vv<aa[mid])
        {
            end = mid - 1;
        }
    }

     struct node
{
    int value;
    struct node *add;
};

void LinkedList_InsertionLast( struct node *l,int vv)
{
   struct node *temp;
   while(l->add!=NULL)
    l=l->add;
   temp=(struct node *)malloc(sizeof(struct node));
   temp->value=vv;
   temp->add=l->add;
   l->add=temp;
}

 void LinkedList_Display(struct node *l)

{
    while(l->add!=NULL)
    {
        printf("\t->%d",l->add->value);
        l=l->add;
    }
}
    printf("\nNot Found");
            
                
            
}
