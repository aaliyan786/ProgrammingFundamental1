#include<stdio.h>
#include<conio.h>

struct emp
{
	int id;
	char name[50];
	float salary;
}e;

void main()
{
	char ch='y';
	FILE *fp;
	fp = fopen("fprintf & fscanf.txt","w");
	if (fp==NULL)
	{
		printf("cannot open file");
	}
	while (ch=='y')
	{
		printf("\nenter name\t id\t salary\t of the employee\n");
		scanf(" %s\t %d\t %f",&e.name,&e.id,&e.salary);
		fprintf(fp,"%s\t %d\t %f\n",e.name,e.id,e.salary);
		printf("do you want to enter another record (y/n)");
		ch=getche();
	}
	fclose(fp);
	getch();
}
