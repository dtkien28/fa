#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
/*	Dat: pt bac nhat
	Huy: khoang cach
	Phat: pt bac hai
	Tien: tong 1 den n
	Trung: Tong giai thua
	Khoa: Tong a+b;
*/
int main()
{
	int cn;
	do
	{
	
	cout << "----------CHUONG TRINH CHUC NANG----------" << endl;
	cout << "1. " << endl;
	cout << "2. " << endl;
	cout << "3. " << endl;
	cout << "4. " << endl;
	cout << "5. " << endl;
	cout << "6. " << endl;
	cout << "0. Thoat chuong trinh !!!" << endl;
	cout << endl;
	cout << "Chon chuc nang: ";
	cin >> cn;
	switch (cn)
	{
		case 1: 
		break;
		case 2:{
			float xa, ya, xb, yb;
			printf("Nhap xa: ");
			scanf("%f", &xa);
			printf("Nhap ya: ");
			scanf("%f", &ya);
			printf("Nhap xb: ");
			scanf("%f", &xb);
			printf("Nhap yb: ");
			scanf("%f", &yb);
			float s=sqrt(pow(xa-ya,2)+pow(xb-yb,2));
			printf("Khoang cach AB la: %.2f", s);
			break;
		}
		break;
		case 3: 
		break;
		case 4: 
		break;
		case 5: 
		break;
		case 6: 
		break;
		default:
			
	}
}
while (cn != 0);
}#Code-ch-c-n-ng
#CodeHomework
