#include<stdio.h>

int main()
{
    int arr[10],i,size,num,pos;
    printf("Size of array ?");
    scanf("%d",&size);
    printf("Input array elements");
    for(i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Input number for insert");
    scanf("%d",&num);
    printf("Input position for insert");
    scanf("%d",&pos);
    for(i=size;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    for(i=0;i<=size;i++)
    {
        printf("array[%d]=%d\n",i,arr[i]);
    }
return 0;
}