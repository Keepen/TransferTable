#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//int fun() {
//	printf("hello!!!\n");
//	return 10;
//}
//
//
//void fun2(int a,int  b) {
//	printf("hahahahaha!!!\n");
//}

double add(double a, double b) {
	return a + b;
}

double minus(double a, double b) {
	return a - b;
}

double mul(double a, double b) {
	return a * b;
}

double divs(double a, double b) {
	return a / b;
}

int main() {

	double(*p[5])() = { 0,add,minus,mul,divs };
	while (1) {
		printf("=================================\n");
		printf("1.加法\n");
		printf("2.减法\n");
		printf("3.乘法\n");
		printf("4.除法\n");
		printf("=================================\n");
		printf("请输入您的选择：");
		int choice;
		scanf("%d", &choice);
		if (choice <= 4 && choice > 0) {
			double a, b;
			double ret = 0;
			printf("a=");
			scanf("%lf", &a);
			printf("b=");
			scanf("%lf", &b);
			ret = p[choice](a, b);
			printf("result=%lf\n", ret);
		}
		else {
			printf("输入错误！！！\n");
			break;
		}
		
		//switch (choice) {
		//case 1:
		//	printf("请输入操作数：");			
		//	printf("a=");
		//	scanf("%lf", &a);
		//	printf("b=");
		//	scanf("%lf", &b);
		//	ret = add(a, b);
		//	break;
		//case 2:
		//	printf("请输入操作数：");
		//	printf("a=");
		//	scanf("%lf", &a);
		//	printf("b=");
		//	scanf("%lf", &b);
		//	ret = minus(a, b);
		//	break;
		//case 3:
		//	printf("请输入操作数：");
		//	printf("a=");
		//	scanf("%lf", &a);
		//	printf("b=");
		//	scanf("%lf", &b);
		//	ret = mul(a, b);
		//	break;
		//case 4:
		//	printf("请输入操作数：");
		//	printf("a=");
		//	scanf("%lf", &a);
		//	printf("b=");
		//	scanf("%lf", &b);
		//	ret = divs(a, b);
		//	break;
		//default:
		//	printf("输入错误！！！\n");
		//	break;
		//}
			
	}
	


	
	/*printf("%p  \n", fun);
	int(*p)() = fun;
	printf("%p  \n", p);*/
	//int a = 0, b = 1;
	//void(*q)(a, b) = fun2;
	//(*q)(a,b);


//fun();
	system("pause");
	return 0;
}