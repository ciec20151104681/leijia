#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[80];
	int a;
	int i=1;
	char b,c[100];
    FILE * fp1 = fopen("export.egx","r");//�������ļ�
	if (fp1==NULL)
	{
		printf("���ܴ��ļ�!");
		exit(1);
	}
	printf("�ܴ��ļ�!\n");
	/*rewind(fp1);
	fseek(fp1,100l,0);
	fsconf(fp1,);
	printf()*/
	fgets(str,500,fp1);
	printf("%s",str);
	fclose(fp1);

	return 0;
}