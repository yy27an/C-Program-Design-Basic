//#include <stdio.h>
//int main(){
//	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
//	printf("%d,%d\n",a,*a);						//0行首地址和00元素地址
//	printf("%d,%d\n",a[0],*(a+0));				//00元素地址
//	printf("%d,%d\n",&a[0],&a[0][0]);			//0行首地址和00元素地址
//	printf("%d,%d\n",a[1],a+1);					//10元素地址和1行首地址
//	printf("%d,%d\n",&a[1][0],*(a+1)+0);		//10元素地址
//	printf("%d,%d\n",a[2],*(a+2));				//20元素地址
//	printf("%d,%d\n",&a[2],a+2);				//2行首地址
//	printf("%d,%d\n",a[1][0],*(*(a+1)+0));		//10元素值
//	printf("%d,%d\n",*a[2],*(*(a+2)+0));		//20元素值
//	return 0;
//}