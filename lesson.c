#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//取位数
/*
int main()
{
	int n, digit = 0;
	scanf("%d", &n);
	while (n) {
		n /= 10;
		digit += 1;
	}
	printf("%d", digit);
	return 0;
}
*/
//上面的代码有bug，输入0应该有一位，运行结果却为0；因此用do_while完善
//int main()
//{
//	int n, digit = 0;
//	scanf("%d", &n);
//	do{
//		n /= 10;
//		digit += 1;
//	} while (n);
//	printf("%d", digit);
//	return 0;
//}
//当首次判断有效时，基本都需要用do_while循环
//#include <math.h>
//int main()
//{
//	int n, digit = 0, x;
//	scanf("%d", &n);
//	x = n;
//	do {
//		n /= 10;
//		digit += 1;
//	} while (n);
//	printf("%d", digit);
//	printf(" %d has %d digit!\n", x, (int)floor(log10(x)) + 1);//o(1)时间复杂度
//	return 0;
//}//这个代码存在bug，只能求大于0的正整数的位数

#include <math.h>
int main() 
{
	int n, digit = 0, x;
	scanf("%d", &n);
	x = n;
	do {
		n /= 10;
		digit += 1;
	} while (n);
	printf("%d", digit);
	printf(" %d has %d digit!\n", x, (int)floor(log10(x)) + 1);//o(1)时间复杂度
	return 0;
}