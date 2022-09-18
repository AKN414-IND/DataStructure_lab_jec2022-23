//program to implement binary search using function//
#include <stdio.h>
void InsertionSort(int a[],int n){
    int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = a[i]; 
        j = i - 1; 
        while (j >= 0 && a[j] > key)
        { 
            a[j + 1] = a[j]; 
            j = j - 1; 
        } 
        a[j + 1] = key; 
    } 
} 
            


int read(int a[],int n)

{printf("Enter the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    return 0;
}

void print(int a[], int n) 
{ 
    printf("The sorted array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
} 
int main()
{
    int a[10],n,e;
    printf("Enter the limit: ");
    scanf("%d",&n);
    read(a,n);
    InsertionSort(a,n);
    print(a,n);
    return 0;

}