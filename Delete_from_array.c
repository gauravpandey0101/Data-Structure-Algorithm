#include<stdio.h>

int main()
{
    int arr[10],i,size,pos;
    printf("Size of array ?");
    scanf("%d",&size);
    printf("Input array elements");
    for(i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Input position for delete");
    scanf("%d",&pos);
    for(i=pos;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    for(i=0;i<size;i++)
    {
        printf("array[%d]=%d\n",i,arr[i]);
    }
return 0;
}