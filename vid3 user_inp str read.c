#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	FILE *fp;
	char ch[100];
	fp = fopen("file.txt","r");
	if(fp == NULL)
	{
		printf("cannot open file");
	}
	while(fgets(ch,100,fp)!=NULL)
	{
		printf("%s",ch);
	}
	fclose(fp);
	getch();
}
