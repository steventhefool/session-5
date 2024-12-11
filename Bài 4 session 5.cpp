#include <iostream>
using namespace std;
int main (){
	int n, result;
	printf ("nhap vao mot so nguyen duong tu 1 toi 10: ");
	scanf ("%d",&n);
	if ((n>0)&&(n<11)){
		printf ("bang cuu chuong cua %d la:\n",n);
		for (int i = 1; i <=10; i++){
			result=n*i;
			printf ("%d x %d = %d\n", n,i,result);
		}
	}
	else {
		printf ("so vua nhap vao khong phai trong khoang tu 1 toi 10!!!!");
	}
	return 0;
}
