#include <stdio.h>
#include <string.h>

int main()
{
    int a,b;
    char str[1024]={0},str2[1024]={0};
    //��������ͱ��� 
    
	printf("��������Ҫ���ܵ��ַ���:");
	gets(str);
	puts(str);
	b=strlen(str);
	for(a=0;a<b;a++)
    {
        if(str[a]>='A'&&str[a]<='Z')
        {
        	str2[a]=str[a]+3;
		}
		else if(str[a]>='a'&&str[a]<='z')
        {
        	str2[a]=str[a]-4;	
		}
		else
        {
			str2[a]=str[a];
		}
    }
    //�ַ����ܴ���
	 
    printf("\n���� ");
	puts(str);
	printf("\n��� ");
	puts(str2);
	//�������ǰ������
	 
	return 0;
}
