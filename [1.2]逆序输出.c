#include <stdio.h>
int main()
{
	int a,f;
	printf("请输入一个五位正整数\n");
	scanf("%d",&f);
	if(f>=10000&&f<=99999)
	{
		while(f>10){
			a=f%10,
			printf("%d",a);
			f=f/10;
		}
	printf("%d\n",f);
	}
	else{
		printf("请输入五位整数值\n");
	}
	return 0;
}
