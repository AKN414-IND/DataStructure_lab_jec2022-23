#include<stdio.h>
int read(int a[],int n);
void linear(int a[],int n,int search);

int main(){
    int a[10],i,n,search;
    printf("Enter the limit: ");
    scanf("%d",&n);
    read(a,n);
    
    printf("Enter the element to be searched: ");
    scanf("%d",&search);
    linear(a,n,search);
    return 0;

    }
void linear(int a[],int n,int search){
    int i;
    for(i=0;i<n;i++)
    {
        if(search==a[i])
        {
            printf("Element found at index %d",i+1);
            break;
        }
    }
    if(search!=a[i])
    {
        printf("Element not found");
    }
}

int read(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
