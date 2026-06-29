#include<stdio.h>

 void OneINDarray(int aa[],int nn)
 {
     for(int i=1;i<=nn;i++)
     {
         scanf("%d",&aa[i]);
     }
     int s=0;
     for(int i=1;i<=nn;i++)
     {
         s+=aa[i];

     }
     printf("%d",s);
 }


int main()
 {

    int a[50],n;
    printf("Enter Value = ");
    scanf("%d",&n);

    OneINDarray(a,n);

    return 0;
}
