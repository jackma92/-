#include <stdio.h>
#include <string.h>

int main()
{
    int a,b;
    char str[1024]={0},str2[1024]={0};
    //定义数组和变量 
    
	printf("请输入需要加密的字符串:");
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
    //字符加密处理
	 
    printf("\n输入 ");
	puts(str);
	printf("\n输出 ");
	puts(str2);
	//输出加密前后数据
	 
	return 0;
}
