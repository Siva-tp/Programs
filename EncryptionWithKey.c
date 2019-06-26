#include<stdio.h>
#include<string.h>

void encry(char[],int );
void decry(char[],int );

int main()
{
  char plainText[20];
  int key;
 
 printf("\n CAESAR CIPHER\n\n");
 
 printf("\n Enter any String\n");
 scanf("%s",&plainText);

 printf("\n Enter any key\n");
 scanf("%d",&key);
 
 encry(plainText,key);
}

//ENCRYPTION 
void encry(char str[20],int key)
{
  char ch;
  int index;

  for(index=0;index<strlen(str);index++)
 {
   ch=str[index];
   if(isupper(ch))
   {

    ch +=(key%26);
    if(ch>'Z')
    ch -=26;

   }
   else if(islower(ch))
   { 

    ch +=(key%26);
    if(ch>'z')
    ch -=26;

   }

   str[index]=(char)ch;
  }

  printf("\n The Encrypted String: %s",str);

  decry(str,key);
}



//DECRYPTION 


void decry(char str[20],int key)
{
  char ch;
  int index;
  
  for(index=0;index<strlen(str);index++)
 {
   ch=str[index];
   if(isupper(ch))
   {

    ch -=(key%26);
    if(ch<'A')
    ch +=26;

   }
   else if(islower(ch))
   { 

    ch -=(key%26);
    if(ch<'a')
    ch +=26;

   }
   str[index]=(char)ch;

  }
  
   printf("\n The Decrypted String: %s",str);


} 
