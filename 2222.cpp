#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<cstdlib>
#define s 10000
struct GPS{//����ṹ�� 
	double time[100];//����ʱ������
	double lat[100];//����γ������
	double lon[100];//���徭������
struct GPS b[1000];//����GPS�Ľṹ������

int main()
{
	FILE *fp;
	char ch;
	fp=fopen("d:\\export.txt","r");
	if(fp==NULL)
	{
		printf("���ļ����󣬿���Ҫ�򿪵��ļ�������");
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
		fclose(fp);//�ر��ļ�
	}
	ruturn 0;
}
#include<GPS.h>
int main()
{
	
	char str[88];//�����ַ�����
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