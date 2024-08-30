//结构体的嵌套:一层一层
#include<stdio.h>
struct A
{
	int a;
	struct
	{
		int b;
	}c;
};
struct CC
{
	struct A a;

};

int main()
{
	A aaa;
	aaa.c.b;
	CC cc;
	cc.a.c;
}