#include<stdio.h>      
#include<conio.h>      
main()      
{      
int n,r,sum=0,temp;    //declaration of variables.  
clrscr(); //It clears the screen.     
printf("enter the number=");      
scanf("%d",&n);      
temp=n;      
while(n>0)      
{      
r=n%10;      
sum=sum+(r*r*r);      
n=n/10;      
}      
if(temp==sum)      
printf("armstrong  number ");      
else      
printf("not armstrong number");      
getch();  //It reads a character from the keyword.  
}    