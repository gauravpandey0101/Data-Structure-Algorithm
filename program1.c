#include<stdio.h>
void fun(int arr[], int len);
int main()
{
    int arr[]={3,10,15};
    fun(arr,3);
    return 0;
}
void fun(int arr[], int len)
{
    int sum=0,product=1;
    for(int i=0;i<len;i++)
    {
        sum+=arr[i];
    }
    for(int i=0;i<len;i++)
    {
        product*=arr[i];
    }
}