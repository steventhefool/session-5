#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int result;
	int i =1;
	printf ("bang cuu chuong tu 1 toi 9 la:\n");
	for (int n=1; n<=9;n++){
	while (i<=10){
			result = n*i;
			printf ("%d x %d = %d\n", n, i , result);
			i++;
			}
	i =1;
	}
	return 0;
}
