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
		printf("��������Ҫѡ��Ĳ���:\n\t");
		printf("1,¼����Ϣ\n\t");
		printf("2,��ѯ��Ϣ\n\t");
		printf("3,�ɼ���Ϣ�������\n\t");
		printf("4,ͳ�Ƴɼ���Ϣ\n");
		printf("���ѡ����:");
		scanf("%d",&code);
		printf("\n");
		switch(code)
		{
			case 1:input(information);break;//����ѧ����Ϣ 
			case 2:output(information);break;//����ѧ�Ų�ѯ��Ϣ 
			case 3:paixushuchu(information);break;//�Ӹߵ��������������ӡ��ѧ�ţ��������ܷ֣�ƽ���� 
			case 4:tongji(information);break;//ͳ�Ƴɼ��ֲ��� 
			default:printf("�������\n\n");break;
		}	
    }
	return 0;

}


void input(struct info information[])
{
	int c1,j,l; 
	for(student_number;;student_number++)
	{
		printf("������ѧ��ѧ��(����0������һ��):");
		scanf("%d",&l);
		if(l==0)
		{
			printf("\n");
			break;
		}
		number[student_number]=l;
		
		printf("������ѧ������:");
		scanf("%s",&information[l].name);
		
		printf("������ѧ���γ�����:");
		scanf("%d",&j);
		information[l].lesson_number=j;
		
		for(int k=0;k<j;k++)
		{
			c1=k+1;
			printf("������ѧ����%d�ſγɼ�(����100��):",c1);
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
			printf("��������Ҫ��ѯ��ѧ����ѧ��(����0������һ��):");
			scanf("%d",&num);
			if(num==0)
			{
				printf("\n");
				break;
			}
			printf("ѧ������Ϊ");
			printf("%s",&information[num].name);
			printf("��ѧ����%d�ſ�\n",information[num].lesson_number);
			printf("�ɼ��ֱ�Ϊ:");
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
		printf("%d,����:",m);
		printf("%s",&information[number[h]].name);
		printf("\tѧ��:%d",number[h]);
		printf("\t�ܷ�:%d",information[number[h]].grade_sum);
		printf("\tƽ����:%lf",information[number[h]].grade_average);
		printf("\t�ɼ�:");
		for(int k=0;k<information[number[h]].lesson_number;k++)
		{
			printf("%d\t",information[number[h]].lesson[k]);
		}
		printf("\n\n");
	}
} 

void findout(struct info information[],int num)
{

			printf("\nѧ������Ϊ");
			printf("%s",&information[num].name);
			printf(",ѧ��Ϊ:%d",num);
			printf(",��ѧ����%d�ſ�",information[num].lesson_number);
			printf(",�ɼ��ֱ�Ϊ:");
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
	printf("��������Ҫ�ڼ��ſεĳɼ��ֲ����:");
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

	printf("\n0-10��֮��ķֲ���%d��ѧ����",fenbu[0].h);
	for(int m=0;m<fenbu[0].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");

	printf("\n10-20��֮��ķֲ���%d��ѧ����",fenbu[1].h);
	for(int m=0;m<fenbu[1].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");
	 
	printf("\n20-30��֮��ķֲ���%d��ѧ��,",fenbu[2].h);
	for(int m=0;m<fenbu[2].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");
	 
	printf("\n30-40��֮��ķֲ���%d��ѧ����",fenbu[3].h);
	for(int m=0;m<fenbu[3].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");
	 
	printf("\n40-50��֮��ķֲ���%d��ѧ����",fenbu[4].h);
	for(int m=0;m<fenbu[4].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");
	 
	printf("\n50-60��֮��ķֲ���%d��ѧ����",fenbu[5].h);
	for(int m=0;m<fenbu[5].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");
	 
	 printf("\n60-70��֮��ķֲ���%d��ѧ����",fenbu[6].h);
	for(int m=0;m<fenbu[6].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");
	 
	printf("\n70-80��֮��ķֲ���%d��ѧ����",fenbu[7].h);
	for(int m=0;m<fenbu[7].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");
	 
	printf("\n80-90��֮��ķֲ���%d��ѧ����",fenbu[8].h);
	for(int m=0;m<fenbu[8].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");
	 
	printf("\n90-100��֮��ķֲ���%d��ѧ����",fenbu[9].h);
	for(int m=0;m<fenbu[9].h;m++)
	findout(information,fenbu[k].number1[m]);
	printf("\n\n");
}
