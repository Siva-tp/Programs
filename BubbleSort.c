#include<stdio.h>
int main()
{
    int ar[100],num,index1,index2,indi,temp;
    
    printf("Enter the number of Elements\n");
    scanf("%d",&num);
    printf("Enter the number of Elements in Array\n");
    for(indi=0;indi<num;indi++)
    scanf("%d ",&ar[indi]);



    for(index1=0;index1<num;index1++)
    {
        for(index2=0;index2<num-index1-1;index2++)
        {
            if(ar[index2]>ar[index2+1])
           {
           temp=ar[index2];
           ar[index2]=ar[index2+1];
           ar[index2+1]=temp;
           }
        }
    }








    printf("Sorted Elements in Array\n");
    for(indi=0;indi<num;indi++)
    printf("%d ",ar[indi]);


}
