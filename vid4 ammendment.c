#include<stdio.h>
#include<conio.h>

void main()
{
	char ch[100];
	FILE *fp;
	fp = fopen("file.txt","a");
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
