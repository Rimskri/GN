#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{  
int number,usernum,i;
srand(time(NULL));
number=rand()%10;
printf("hello friends,i have a number in my mind can you guess it?\n");
printf("let's see\n");
for(i=1;i<6;i++)
{ 
printf("\nplease, enter your guess number");
scanf("%d",&usernum);
if(usernum==number)
{
	printf("omg!! you win");
	break;
}
else
{
	printf("sorry!! try again");
}
}
return 0;
}

