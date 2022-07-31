#include<stdio.h>
#include<stdlib.h>

struct myarray
{
    int asize;
    int usize;
    int *ptr; 
};
void CreateArray(struct myarray *a,int aasize,int uusize)
{
 a->asize=aasize;
 a->usize=uusize;
 a->ptr=(int *)malloc(aasize*sizeof(int));
}
void SetArray(struct myarray *c)
{ 
 int n;
 for(int i=0;i<c->usize;i++)
 {
    printf("Enter %d",i);
    scanf("%d",&n);
    c->ptr[i]=n;
 }
}
void ShowArray(struct myarray *b)
{ 
 for(int i=0;i<b->usize;i++)
 {
   printf("%d\t",b->ptr[i]);
 } 
}
int main()
{
    struct myarray my;
    CreateArray(&my,10,2);
    SetArray(&my);
    ShowArray(&my);
    return 0;
}