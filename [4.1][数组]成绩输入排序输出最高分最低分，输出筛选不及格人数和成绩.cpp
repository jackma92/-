#include <stdio.h>
#include <string.h>

int main()
{
    int a,c,d=0,i,j,k;
    char str[30]={0};
    //定义数组和变量 
    //a值为循环变量，
	//b值记录成绩数量 
	//c值记录成绩低于60时的数组下标 
	//d值记录不及格人数
	//i值和j值为数组从高到低排序时的变量
	//t值为传递数组值的变量
	//数组str记录成绩 
    
    for(a=0; a<30;a++)
    {
    	printf("请输入成绩:");
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
    //循环存入数据到数组 
    
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
	printf("最高分为:%d\n",str[0]);
	printf("最低分为:%d\n",str[a-1]);
	//数组排序输出最高最低分 
	
    for(c=0;c<a;c++)
    {
    	if(str[c]<60)
    	{
			d=a-c;
			break;
		}
	}
	printf("\n不及格的人数为%d\n",d);
	printf("成绩分别为:");
	for(c;c<a;c++)
	{
		printf("%2d,",str[c]);
	}
	//筛选不及格人数 ,并输出 
	
	return 0;
}
