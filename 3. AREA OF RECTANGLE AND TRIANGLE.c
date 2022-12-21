#include <stdio.h>
#include <conio.h>
int main()
{
int length,width,base,height;
int r_area,t_area;
int choice;
do{
printf("\n******FINDING AREAS******:\n");
printf("\n1.AREA OF A RECTANGLE:\n");
printf("\n2.AREA OF A TRIANGLE:\n");
printf("Enter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
printf("Enter the length:\n");
scanf("%d",&length);
printf("Enter the width:\n");
scanf("%d",&width);
r_area=length*width;
printf("the area is %d",r_area);
break;
	case 2:
printf("Enter the base:\n");
scanf("%d",&base);
printf("Enter the height:\n");
scanf("%d",&height);
t_area=0.5*base*height;
printf("the area is %d",t_area);
break;
}
}while(choice!=0);
getch();
}