#include <stdio.h>

//struct Stu//struct�ǽṹ��ؼ���	Stu�ǽṹ���ǩ		struct Stu�ǽṹ������
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};
//
//int main()
//{
//	struct Stu s;
//	return 0;
//}

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
void print1(Stu s)
{
	printf("name:%s\n", s.name);
}

int main()
{
	Stu s = { "����",40,"12312323","��" };
	print1(s);
	return 0;
}
