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
	fp = fopen("fwrite & fread.txt","rb");
	if (fp==NULL)
	{
		printf("cannot open file");
	}
	while(fread(&s,sizeof(s),1,fp)!=NULL)
	{
		printf("%s %d %f",s.name,s.roll,s.marks);
	}
	fclose(fp);
	getch();
}
