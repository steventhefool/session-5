#include <iostream>
#include <stdio.h>
using namespace std;
void menu (){
	printf ("MENU\n");
	printf ("1. Nhap 3 so\n");
	printf ("2. Tong 3 so\n");
	printf ("3. Trung binh cong 3 so\n");
	printf ("4. So nho nhat\n");
	printf ("5. So lon nhat\n");
	printf ("6. Thoat\n");
}
int min (int a, int b, int c){
		if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
	}
	return a;
}
int max (int a, int b, int c){
		if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
	}
	return c;
}
int main(){
	int a, b, c, sum;
	float avg;
	int select;
	a=0;
	b=0;
	c=0;
	while (1){
		menu ();
		printf ("Lua chon cua ban: ");
		scanf ("%d", &select);
		sum = a+b+c;
		avg = sum/3.0;
		switch (select){
			case 1: 
				printf ("Nhap lan luot 3 so: ");
				scanf ("%d%d%d", &a, &b, &c);
				break;
			case 2:
				printf ("Tong 3 so vua nhap la: %d\n", sum);
				break;
			case 3: 
				printf ("Trung binh cong 3 so la: %f\n", avg);
				break;
			case 4:
				printf ("So nho nhat trong 3 so vua nhap la: %d\n", min (a,b,c));
				break;
			case 5:
				printf ("So lon nhat trong 3 so vua nhap la: %d\n", max (a,b,c));
				break;
			case 6:
				printf ("Thoat khoi chuong trinh");
				return 0;
			default:
				printf ("Khong hop le.\n\n\n");
				break;
		}
	}
}

