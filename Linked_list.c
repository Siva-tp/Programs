#include<stdio.h>
#include<stdlib.h>
typedef struct NODE
{
    int data;
    struct NODE *ptr;

}BOX;

void print(BOX *tptr)
{
    while(tptr!=NULL)
    {
        printf("%d ",tptr->data);
        tptr=tptr->ptr;
    }
}

int main()
{
    BOX* head=NULL;
    BOX* second=NULL;
    BOX* last=NULL;

       head=(BOX*)malloc(sizeof(BOX));
       second=(BOX*)malloc(sizeof(BOX));
       last=(BOX*)malloc(sizeof(BOX));


       head->data=1;
       head->ptr=second;

       second->data=4;
       second->ptr=last;

       last->data=3;
       last->ptr=NULL;

       print(head);





return 0;
}    