#include<stdio.h>
void main()
{
	FILE *fp;
	fp = fopen("file.txt","w");
	if(fp == NULL)
	{
		printf("file cannot open");
	}
	fclose(fp);
}
