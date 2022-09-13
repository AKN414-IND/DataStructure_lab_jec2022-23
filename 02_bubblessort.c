//program to implement bubble sort using function//
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
    return 0;
}
int main()
{
    int a[10],n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    read(a,n);
    bubble(a,n);
    return 0;

}
/*COMPILATION STEP
gcc 02_bubblessort.c -o 02_bubblessort
EXECUTION STEP
./02_bubblessort 
output 
Enter the limit: 5
12
34
4 
2  
35
The sorted array is:
2	4	12	34	35 */