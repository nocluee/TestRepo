#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	int roll;
	char name[25];
	float marks;
	char ch;
	fp = fopen("file.txt","w");           
	if(fp == NULL)
	{
		printf("\nCan't open file or file doesn't exist.");
		exit(0);
	}
	do
	{
		printf("\nEnter Roll : ");
		scanf("%d",&roll);
		printf("\nEnter Name : ");
		scanf("%s",name);
		printf("\nEnter Marks : ");
		scanf("%f",&marks);
		fprintf(fp,"\n%d\t%s\t%f\n",roll,name,marks);
		printf("\nDo you want to add another data (y/n) : ");
		ch = getche();
	}while(ch=='y' || ch=='Y');
	printf("\nData written successfully...");
	fclose(fp);
	getch();
}

