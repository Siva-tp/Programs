#include<stdio.h>
#include<string.h>
int main()
{
  char string[1000],find[50],replace[50],temp[1000];
  int index,index2,index3,index4,tempindex=0,start,end,safe,count=0;
  printf("Enter the sting:\n");
  scanf("%[^\n]s",string);

  printf("Enter the find string\n");
  scanf("%s",find);

  printf("Enter the string to replace\n");
  scanf("%s",replace);
 
   for(index=0;index<strlen(string);index++)
   {    
       if(string[index]==find[0])
       {    safe=index;
            start=index;
           for(index2=0;index2<strlen(find);index2++,safe++)
           {   
               if(find[index2]==string[safe])
               {count++;}
               else 
               count=0;
           }
           end=safe;
       }
     }
   for(index4=end;index4<strlen(string);index4++)
   {
         temp[tempindex]=string[index4];
         tempindex++;
   }

   printf("_____________MODIFIED STRING____________\n");
   for(index4=start;index4<strlen(string);index4++)string[index4]=(char)0;
   strcat(string,replace);
  
   strcat(string,temp);
   
    printf("%s",string);

}


