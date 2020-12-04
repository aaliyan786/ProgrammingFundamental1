#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	FILE *fp;

	fp = fopen("file.txt","r");
	if(fp == NULL)
	{
		printf("cannot open file");
	}
	while(1)
	{
		ch = fgetc(fp);
		if(ch == EOF)
		{
			break;
		}
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}
