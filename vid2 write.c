#include<stdio.h>
#include<string.h>
void main()
{
	int i;
	FILE *fp;
	char ch[100] = {"This is aaliyan's learning experience of filing in C!"};
	fp = fopen("file.txt","w");
	if(fp == NULL)
	{
		printf("cannot open file");
	}
	for(i=0 ; i<strlen(ch) ; i++)
	{
		fputc(ch[i],fp);
	}
	fclose(fp);
}
