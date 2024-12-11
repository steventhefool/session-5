#include <iostream>
using namespace std;
int main (){
	int n,sum;
	printf ("nhap so nguyen: ");
	scanf ("%d",&n);
	for (int i =1; i<=n; i++){
		sum+=i;
	}
	printf ("tong tu 1 toi %d la %d", n,sum);
	return 0;
}
