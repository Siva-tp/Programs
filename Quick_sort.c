#include<stdio.h>

void quick_sort(int ar[10],int first,int last)
{
 int large,small,pivot,temp;
 
 if(first>=last)return;

  if(first<last)
  {
   pivot=first;
   large=first;
   small=last;
  }
 
 while(large<small)
 {
   while(ar[large]<=ar[pivot] && large<last)
   large++;
   
   while(ar[small]>ar[pivot])
   small--;
   
  
  if(large<small)
   {
   temp=ar[large];
   ar[large]=ar[small];
   ar[small]=temp;
   }

 }
   
   temp=ar[pivot];
   ar[pivot]=ar[small];
   ar[small]=temp;
   
  quick_sort(ar,first,small-1);
  quick_sort(ar,small+1,last);
  

} 

  
  



int main()
{
 int ar[10]={7,18,2,1,17,13,20,56,30,10};
 int index,size;
 size=sizeof(ar)/sizeof(int);
  

 
quick_sort(ar,0,size-1);
 
for(index=0;index<9;index++)
printf("%d ",ar[index]);
 
 

return 0;
}
