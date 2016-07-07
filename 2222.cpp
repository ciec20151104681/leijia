#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<cstdlib>
#define s 10000
struct GPS{//定义结构体 
	double time[100];//定义时间数组
	double lat[100];//定义纬度数组
	double lon[100];//定义经度数组
struct GPS b[1000];//定义GPS的结构体数组

int main()
{
	FILE *fp;
	char ch;
	fp=fopen("d:\\export.txt","r");
	if(fp==NULL)
	{
		printf("打开文件错误，可能要打开的文件不存在");
		exit(-1);
    }
	else
	{
		ch=fgetc(fp);
		while(ch!=EOF)
		{
			printf("%c",ch);
			ch=fgetc(fp);
		}
		fclose(fp);//关闭文件
	}
	ruturn 0;
}
#include<GPS.h>
int main()
{
	
	char str[88];//定义字符数组
	int i;
	int j=1;
	char a,b[100];
	FILE *fp1=fopen("d;\\export.txt","r");
	if(fp1==NULL)
	{
		printf("Can't open this file!");
		exit(1);
	} 
	printf("Open this file!\n");
	fgets(str,500,fp1);
	printf("%s",str);
	fclose(fp1);
	
	
	
	return 0;
	
	
}
#include<GPX.h>
void 
{
	double Gtime[];

}