#include<stdio.h>
int main()
{
char a,yes;
int c,t;
	printf("What do you want to eat?\n");
	printf("1:Chicken\n2;Butter Chicken\n3:Plane Paneer\n4:Butter Paneer\n5:Chille Paneer\n6:Spring Rools\n7:Veg. momos\n8:Non veg. momos\n9:Pasta\n");
	scanf("%d",&c);
switch(c)
{
	case 1:
	printf("Here is your dish\n");
	break;
	case 2:
	printf("Here is your dish\n");
	break;
	case 3:
	printf("Here is your dish\n");
	break;
	case 4:
	printf("Here is your dish\n");
	break;
	case 5:
	printf("Here is your dish\n");
	break;
	case 6:
	printf("Here is your dish\n");
	break;
	case 7:
	printf("Here is your dish\n");
	break;
	case 8:
	printf("Here is your dish\n");
	break;
	case 9:
	printf("Here is your dish\n");
	break;
}
switch(c)
{
	case 1:
	printf("Here is your Bill=$50\n");
	break;
	case 2:
	printf("Here is your Bill=$75\n");
	break;
	case 3:
	printf("Here is your Bill=$45\n");
	break;
	case 4:
	printf("Here is your Bill=$65\n");
	break;
	case 5:
	printf("Here is your Bill=$70\n");
	break;
	case 6:
	printf("Here is your Bill=$66\n");
	break;
	case 7:
	printf("Here is your Bill=$80\n");
	break;
	case 8:
	printf("Here is your Bill=$89\n");
	break;
	case 9:
	printf("Here is your Bill=$16\n");
	break;
}
	printf("Do you want to give a tip ?\n");
	printf("yes/no\n");
	getchar();
	scanf("%c",&a);
	if(a==yes)
	{
	    printf("thanks for your tip :>\n");
	    }
	else
	printf("Its ok :|\n");
return 0;

}
