#include <iostream>
using namespace std;
int main (){
	int n;
	printf ("nhap vao mot so nguyen bat ky: ");
	scanf ("%d", &n);
	if (n<0){
		n=-n;
	}
	printf ("cac chu so co trong so nguyen vua nhap la: \n");
	while (n>0){
		int so;
		so = n %10;
		printf ("%d\n",so);
		n/=10;
	}
	return 0;
}
