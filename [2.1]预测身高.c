#include <stdio.h>    
int main()
{
	int a,t;
	double b,c,d,e;
	printf("����������Ա�����Ϊ1��Ů��Ϊ2\n");//�ж��Ա� 
	scanf("%d",&a);
	printf("�����������ߣ�(cm)\n");//�������Ϊb 
	scanf("%lf",&b);
	printf("�������㸸�׵���ߣ�(cm)\n");//�������Ϊc 
	scanf("%lf",&c);
	printf("��������ĸ�׵���ߣ�(cm)\n");//ĸ�����Ϊd
	scanf("%lf",&d);
	t=1*(a==1)+2*(a==2);
	switch(t){
	case 1: {
		e=(c+d)*1.08/2;
		printf("�������Ϊ%lf��",e);
		if(e<=(b+3)&&e>=(b-3))
		{
			printf("���Ͻ���\n");
		}
		else{
			printf("�����Ͻ���\n");
		}
		break;}
	case 2:{
		e=(c+d)*0.923/2;
		printf("�������Ϊ%lf��",e);
		if(e<=(b+3)&&e>=(b-3))
		{
			printf("���Ͻ���\n");
		}
		else{
			printf("�����Ͻ���\n");
		}
		break;}
	default:printf("��������ȷ�Ա�����Ϊ1��Ů��Ϊ2.\n");
		break;}
	return 0;
	
	
}
