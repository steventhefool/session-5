#include <iostream>
using namespace std;
int ucln (int a, int b){
	while (b!=0){
		int temp;
		temp = a%b;
		a=b;
		b=temp;
	}
	return a;
}
int main (){
	int a, b, bcnn;
	printf ("nhap vao hai so nguyen duong a, b: ");
	scanf ("%d%d",&a,&b);
	bcnn = (a*b)/(ucln(a,b));
	printf ("boi chung nho nhat cua %d va %d la: %d", a, b, bcnn);
}
