#include <iostream>
using namespace std;
int ucln (int a, int b){
	while (b!=0){
		int temp;
		temp =a%b;
		a=b;
		b=temp;
	}
	return a;
}
int main (){
	int a,b;
	while (1){
	printf ("nhap vao hai so nguyen duong a, b: ");
	scanf ("%d%d",&a, &b);
	if ((a>=1)&&(b>=1)){
		printf ("uoc chung lon nhat cua %d va %d la: %d \n", a, b, ucln(a,b));
		return 0;
	}
	else {
		printf ("mot trong hai so khong phai la so nguyen duong\n");
	}
}
return 0;
}
