#include <stdio.h>
int main()
{
	int a,f;
	printf("������һ����λ������\n");
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
		printf("��������λ����ֵ\n");
	}
	return 0;
}
