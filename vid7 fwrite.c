#include<stdio.h>
#include<conio.h>

struct student
{
	int roll;
	char name[50];
	float marks;
}s;

void main()
{
	FILE *fp;
	char ch='y';
	fp = fopen("fwrite & fread.txt","wb");
	if (fp==NULL)
	{
		printf("cannot open file");
	}
	while (ch=='y')
	{
		printf("\nenter the name roll no. and marks of the student\n");
		scanf("%s %d %f",&s.name,&s.roll,&s.marks);
		fwrite(&s,sizeof(s),1,fp);
		printf("do you want to add more records(y/n)");
		ch = getche(); 
	}
	fclose(fp);
	getch();
}
