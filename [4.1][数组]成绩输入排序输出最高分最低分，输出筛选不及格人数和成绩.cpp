#include <stdio.h>
#include <string.h>

int main()
{
    int a,c,d=0,i,j,k;
    char str[30]={0};
    //��������ͱ��� 
    //aֵΪѭ��������
	//bֵ��¼�ɼ����� 
	//cֵ��¼�ɼ�����60ʱ�������±� 
	//dֵ��¼����������
	//iֵ��jֵΪ����Ӹߵ�������ʱ�ı���
	//tֵΪ��������ֵ�ı���
	//����str��¼�ɼ� 
    
    for(a=0; a<30;a++)
    {
    	printf("������ɼ�:");
    	scanf("%d",&k);
		if(k<0)
		{
			break;
		}
		else if(k>=0)
		{
            str[a]=k;
		}
    }
    //ѭ���������ݵ����� 
    
    for(i=0;i<a-1;i++)
    {
    	for(j=i+1;j<a;j++)
    	{
    		if(str[i]<str[j])
    		{
    			str[i]^=str[j]^=str[i]^=str[j];
			}
		}
	}
	printf("��߷�Ϊ:%d\n",str[0]);
	printf("��ͷ�Ϊ:%d\n",str[a-1]);
	//����������������ͷ� 
	
    for(c=0;c<a;c++)
    {
    	if(str[c]<60)
    	{
			d=a-c;
			break;
		}
	}
	printf("\n�����������Ϊ%d\n",d);
	printf("�ɼ��ֱ�Ϊ:");
	for(c;c<a;c++)
	{
		printf("%2d,",str[c]);
	}
	//ɸѡ���������� ,����� 
	
	return 0;
}
