#include<stdio.h>


void print(int *arr,int n)
{
  int i;
  ;
  for(i=0;i<n;i++)
  printf("%d ",arr[i]);
  printf("\n");

}

int main()
{
   
int index,index2,num,temp,c=0;
int arr[10];

printf("Enter a num :");
scanf("%d",&num);
printf("\n Enter the Elements\n");
for(index=0;index<num;index++)
scanf("%d",&arr[index]);


index=0;
for(index=0;index<num;index++)
{
    for(index2=0;index2<num-1;index2++)
    {
        temp=arr[index2];
        arr[index2]=arr[index2+1];
        arr[index2+1]=temp;
        print(arr,num);
        c++;
    }

}
printf("total num of combinations %d",c);
return 0;

}