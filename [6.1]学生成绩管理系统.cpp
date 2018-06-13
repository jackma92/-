#include <stdio.h>
#include <conio.h>


int number[1000],student_number=0;
struct info
	{
		char name;
		int lesson[10];
		int lesson_number;
		int grade_sum;
		float grade_average;
	}information[1000];
void input(struct info information[]);
void output(struct info information[]);
void paixushuchu(struct info information[]);
void tongji(struct info information[]);
int main()
{
	int code,i;
	for(i=0;;)
	{
		printf("请输入你要选择的操作:\n\t");
		printf("1,录入信息\n\t");
		printf("2,查询信息\n\t");
		printf("3,成绩信息排序输出\n\t");
		printf("4,统计成绩信息\n");
		printf("你的选择是:");
		scanf("%d",&code);
		printf("\n");
		switch(code)
		{
			case 1:input(information);break;//输入学生信息 
			case 2:output(information);break;//根据学号查询信息 
			case 3:paixushuchu(information);break;//从高到低排序输出，打印出学号，分数，总分，平均分 
			case 4:tongji(information);break;//统计成绩分布段 
			default:printf("输入错误\n\n");break;
		}	
    }
	return 0;

}


void input(struct info information[])
{
	int c1,j,l; 
	for(student_number;;student_number++)
	{
		printf("请输入学生学号(输入0返回上一级):");
		scanf("%d",&l);
		if(l==0)
		{
			printf("\n");
			break;
		}
		number[student_number]=l;
		
		printf("请输入学生姓名:");
		scanf("%s",&information[l].name);
		
		printf("请输入学生课程数量:");
		scanf("%d",&j);
		information[l].lesson_number=j;
		
		for(int k=0;k<j;k++)
		{
			c1=k+1;
			printf("请输入学生第%d门课成绩(满分100分):",c1);
			scanf("%d",&information[l].lesson[k]);
			information[l].grade_sum=information[l].grade_sum+information[l].lesson[k];
		}
		information[l].grade_average=information[l].grade_sum/c1;
		printf("\n\n");
	}
}

void output(struct info information[])
{
	int num;
	for(int i=0;;i++)
	{
			printf("请输入需要查询的学生的学号(输入0返回上一级):");
			scanf("%d",&num);
			if(num==0)
			{
				printf("\n");
				break;
			}
			printf("学生姓名为");
			printf("%s",&information[num].name);
			printf("该学生有%d门课\n",information[num].lesson_number);
			printf("成绩分别为:");
			for(int i=0;i<information[num].lesson_number;i++)
			{
				printf("%d\t",information[num].lesson[i]);
			}
			printf("\n\n");
	}
}

void paixushuchu(struct info information[])
{	
	int i,j,num1;
	for(i=0;i<student_number;i++)
	{
		for(j=1;j<=student_number;j++)
		{
			if(information[number[i]].grade_sum<information[number[j]].grade_sum)
			{
				num1=number[i];number[i]=number[j];number[j]=num1;
			} 
		}
	}
	for(int h=0;h<student_number;h++)
	{
		int m=h+1;
		printf("%d,姓名:",m);
		printf("%s",&information[number[h]].name);
		printf("\t学号:%d",number[h]);
		printf("\t总分:%d",information[number[h]].grade_sum);
		printf("\t平均分:%lf",information[number[h]].grade_average);
		printf("\t成绩:");
		for(int k=0;k<information[number[h]].lesson_number;k++)
		{
			printf("%d\t",information[number[h]].lesson[k]);
		}
		printf("\n\n");
	}
} 

void findout(struct info information[],int num)
{

			printf("\n学生姓名为");
			printf("%s",&information[num].name);
			printf(",学号为:%d",num);
			printf(",该学生有%d门课",information[num].lesson_number);
			printf(",成绩分别为:");
			for(int i=0;i<information[num].lesson_number;i++)
			{
				printf("%d\t",information[num].lesson[i]);
			}
}



void tongji(struct info information[])
{
	int i,t,k;
	struct node{
		int h=0;
		int number1[100]={0};
	}fenbu[11];
	printf("请输入需要第几门课的成绩分布情况:");
	scanf("%d",&t);
	t=t-1;
	for(i=0;i<student_number;i++)
	{
		if(information[number[i]].lesson_number<t+1)
		{
			continue;
		}
		k=information[number[i]].lesson[t]/10;
		fenbu[k].number1[fenbu[k].h]=number[i];
		fenbu[k].h++;
	}

	printf("\n0-10分之间的分布有%d名学生，",fenbu[0].h);
	for(int m=0;m<fenbu[0].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");

	printf("\n10-20分之间的分布有%d名学生，",fenbu[1].h);
	for(int m=0;m<fenbu[1].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");
	 
	printf("\n20-30分之间的分布有%d名学生,",fenbu[2].h);
	for(int m=0;m<fenbu[2].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");
	 
	printf("\n30-40分之间的分布有%d名学生，",fenbu[3].h);
	for(int m=0;m<fenbu[3].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");
	 
	printf("\n40-50分之间的分布有%d名学生，",fenbu[4].h);
	for(int m=0;m<fenbu[4].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");
	 
	printf("\n50-60分之间的分布有%d名学生，",fenbu[5].h);
	for(int m=0;m<fenbu[5].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");
	 
	 printf("\n60-70分之间的分布有%d名学生，",fenbu[6].h);
	for(int m=0;m<fenbu[6].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");
	 
	printf("\n70-80分之间的分布有%d名学生，",fenbu[7].h);
	for(int m=0;m<fenbu[7].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");
	 
	printf("\n80-90分之间的分布有%d名学生，",fenbu[8].h);
	for(int m=0;m<fenbu[8].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");
	 
	printf("\n90-100分之间的分布有%d名学生，",fenbu[9].h);
	for(int m=0;m<fenbu[9].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");
}
