#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	FILE *fp;
	char ch[100];
	fp = fopen("file.txt","w");
	if(fp == NULL)
	{
		printf("cannot open file");
	}
	printf("Enter the string: ");
	fgets(ch,100,stdin);
	fputs(ch,fp);
	fclose(fp);
	getch();
}
