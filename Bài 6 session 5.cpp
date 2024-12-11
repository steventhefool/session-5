#include <stdio.h>
#include <iostream>
using namespace std;
void menu(){
	printf ("CALCULATOR\n");
	printf ("1. Tong 2 so\n");
	printf ("2. Hieu 2 so\n");
	printf ("3. Tich 2 so\n");
	printf ("4. Thuong 2 so\n");
	printf ("5. Thoat\n");
}
int main (){
	int select;
	float a,b;
	printf ("nhap vao hai so a, b: ");
	scanf ("%f%f",&a,&b);
	while (1){ // vong lap vo han
		menu(); //goi ham void
		printf ("Lua chon cua ban: ");
		scanf ("%d",&select);
		switch (select){
			case 1:
				printf ("tong 2 so: %.2f\n", a+b);
				break;
			case 2:
				printf ("hieu 2 so: %.2f\n", a-b);
				break;
			case 3:
				printf ("tich 2 so: %.2f\n", a*b);
				break;
			case 4:
				if (b!=0){
					printf ("thuong 2 so: %.2f\n", a/b);
				}
				else {
					printf ("Khong the thuc hien phep toan\n");
				}
				break;
			case 5:
					printf ("Thoat khoi chuong trinh.\n");
					return 0; //dung chuong trinh
			default:
					printf ("Khong hop le.\n");
		}
			}
	}



