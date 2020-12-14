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
	FILE *fp;
	fp = fopen("fprintf & fscanf.txt","r");
	if (fp==NULL)
	{
		printf("cannot open file");
	}
	while(fscanf(fp,"%s %d %f",&e.name,&e.id,&e.salary)!=EOF)
	{
		printf("%s %d %f",e.name,e.id,e.salary);
	}
	fclose(fp);
	getch();
}
