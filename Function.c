// Example of function in C

#include <stdio.h>      
#include <conio.h>    
//defining function    
int cube(int n){  
return n*n*n;  
}  
void main(){      
int result1=0,result2=0;    
clrscr();      
  
result1=cube(2);//calling function  
result2=cube(3);    
      
printf("%d \n",result1);  
printf("%d \n",result2);  
  
getch();      
}      
