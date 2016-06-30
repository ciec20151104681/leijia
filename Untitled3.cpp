#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5]={100,200,300,400,500};
	int *p,i;
	p=a;
	for(i=0;i<5;i++)
	printf("a[%d]=%d * (p+%d)=%d\n",i,a[i],i,*(p+i));
	//使用数组下标法和指针法术出数组a的值
	return 0;
}
