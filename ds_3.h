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

    aa[nn+1]=vv;
    return nn+1;
}

