#include <stdio.h>
#include<math.h>
void swap (int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{   
    int a,b;
    printf("Hay nha gia tri a:");
    scanf("%d",&a);
    printf("Hay nha gia tri b:");
    scanf("%d",&b);
    swap(a,b);
    printf("Gia tri a luc sau %d,Gia tri b luc sau %d",b,a);
    printf("complete task");
    return 0;
}
