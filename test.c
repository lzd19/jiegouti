#include <stdio.h>

//struct Stu//struct是结构体关键字	Stu是结构体标签		struct Stu是结构体类型
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
	Stu s = { "李四",40,"12312323","男" };
	print1(s);
	return 0;
}
