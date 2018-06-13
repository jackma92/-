#include <stdio.h>    
int main()
{
	int a,t;
	double b,c,d,e;
	printf("请输入你的性别，男性为1，女性为2\n");//判断性别 
	scanf("%d",&a);
	printf("请输入你的身高：(cm)\n");//本人身高为b 
	scanf("%lf",&b);
	printf("请输入你父亲的身高：(cm)\n");//父亲身高为c 
	scanf("%lf",&c);
	printf("请输入你母亲的身高：(cm)\n");//母亲身高为d
	scanf("%lf",&d);
	t=1*(a==1)+2*(a==2);
	switch(t){
	case 1: {
		e=(c+d)*1.08/2;
		printf("估计身高为%lf，",e);
		if(e<=(b+3)&&e>=(b-3))
		{
			printf("符合结论\n");
		}
		else{
			printf("不符合结论\n");
		}
		break;}
	case 2:{
		e=(c+d)*0.923/2;
		printf("估计身高为%lf，",e);
		if(e<=(b+3)&&e>=(b-3))
		{
			printf("符合结论\n");
		}
		else{
			printf("不符合结论\n");
		}
		break;}
	default:printf("请输入正确性别，男性为1，女性为2.\n");
		break;}
	return 0;
	
	
}
