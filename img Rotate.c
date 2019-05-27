#include<stdio.h>
int main()
{
int mat[100][100];
int col,row,n,m,tmat[100][100];

 printf("\n=========ENTER===ROW & COL=========\n");  
 scanf("%d  %d",&n,&m);  

 printf("\n=========ENTER the image val=========\n");  
for(row=0;row<n;row++)
{
 for(col=0;col<m;col++)
 {
  scanf("%d",&mat[row][col]); 
 } 
 printf("\n");
}

 printf("\n=========img===============\n");        
for(row=0;row<n;row++)
{
 for(col=0;col<m;col++)
 {
  printf("%d\t",mat[row][col]); 
 } 
 printf("\n");
}



        
for(row=0;row<n;row++)
{
 for(col=0;col<m;col++)
 {
  tmat[row][col]=mat[col][row];
 } 
  
}
 printf("\n=========img TRANSPOSE===============\n");
        
for(row=0;row<n;row++)
{
 for(col=0;col<m;col++)
 {
  printf("%d\t",tmat[row][col]); 
 } 
 printf("\n");
}

printf("\n===========Right Rotate============\n");

for(row=0;row<n;row++)
{
 for(col=m-1;col>=0;col--)
 {
  printf("%d\t",tmat[row][col]); 
 } 
 printf("\n");
}

printf("\n===========left Rotate============\n");

for(row=n-1;row>=0;row--)
{
 for(col=0;col<m;col++)
 {
  printf("%d\t",tmat[row][col]); 
 } 
 printf("\n");
}









return 0;
}
