
//Call by value and call by reference in C
#include <stdio.h>  
#include <conio.h>  
void change(int num) {  
    printf("Before adding value inside function num=%d \n",num);  
    num=num+100;  
    printf("After adding value inside function num=%d \n", num);  
}  
  
int main() {  
    int x=100;  
    clrscr();  
  
    printf("Before function call x=%d \n", x);  
    change(x);//passing value in function  
    printf("After function call x=%d \n", x);  
  
    getch();  
    return 0;  
}  
