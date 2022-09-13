#include<stdio.h>
void bubble(int a[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
int read(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int main()
{
    int a[10],n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    read(a,n);
    bubble(a,n);
}