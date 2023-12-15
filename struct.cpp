#include<iostream>
#include<string.h>
using namespace std;
struct BIRTH
{
	int ngay;
	int thang;
	int nam;
};
struct SV
{
	char maSV[5];
	char name[20];
	BIRTH date;
	char gt[3];
	int diem;
};
void NhapNhieuNguoi(SV nguoi[], int &n)
{
	bool kt=true;
	int madem=0;
	cout << "Nhap so nguoi trong danh sach: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nguoi thu " << i+1<<": " << endl;
		cin.ignore();			
		cout << "Ten cua nguoi thu "<<i+1<<" : ";
		gets(nguoi[i].name);
		
		cout << "Nhap ma sinh vien: ";
		cin >> nguoi[i].maSV;
		for (int j=0; j <= i;j++)
		{
			if (nguoi[i].diem==nguoi[j].diem)
			{
				kt=false;
			}
		}
		if (kt==false)
		{
			break;
		}
		cin.ignore();
		cout << "Ngay sinh: ";
		cin >> nguoi[i].date.ngay;
		cout << "Thang sinh: ";
		cin >> nguoi[i].date.thang;
		cout << "Nam sinh: ";
		cin >> nguoi[i].date.nam;
		cout << "Gioi tinh: ";
		cin >> nguoi[i].gt;
		cout << "Diem cua sinh vien "<<nguoi[i].name<<" : ";
		cin >> nguoi[i].diem;
		cout << endl;
	}
}

void Xepdiem(SV nguoi[], int &n)
{
	SV tam;
	for (int i = 0; i < n; i++)
	{
		for (int j=i+1; j<n;j++)
		{
			if (nguoi[j].diem < nguoi[i].diem)
			{
				tam = nguoi[j];
				nguoi[j]=nguoi[i];
				nguoi[i]=tam;
			}
		}
	}
}

void Them(SV nguoi[], int &n)
{
	n++;
	cout << "Nguoi thu " << n<<": " << endl;
	cin.ignore();			
	cout << "Ten cua nguoi thu "<<n<<" : ";
	gets(nguoi[n].name);
	cout << "Nhap ma sinh vien: ";
	cin >> nguoi[n].maSV;
	cin.ignore();
	cout << "Ngay sinh: ";
	cin >> nguoi[n].date.ngay;
	cout << "Thang sinh: ";
	cin >> nguoi[n].date.thang;
	cout << "Nam sinh: ";
	cin >> nguoi[n].date.nam;
	out << "Gioi tinh: ";
	cin >> nguoi[n].gt;
	cout << "Diem cua sinh vien "<<nguoi[n].name<<" : ";
	cin >> nguoi[n].diem;
	cout << endl;	
}

void Xuatdanhsach(SV nguoi[], int &n)
{
	for (int i=0; i<n; i++)
	{
		cout << "Nguoi thu "<<i+1 << endl;
		cout << "Ten: " << nguoi[i].name << endl;
		cout << "Ngay sinh: " << nguoi[i].date.ngay << endl;
		cout << "Thang sinh: " << nguoi[i].date.thang << endl;
		cout << "Nam sinh: " << nguoi[i].date.nam << endl;
		cout << "Gioi tinh: " << nguoi[i].gt << endl;
		cout << "Diem: " << nguoi[i].diem << endl;
		cout << endl;
	}
	cout << endl;
}

void Loai(SV nguoi, int &n)
{
	for (int i=0; i<n;i++)
	{
		if (nguoi[i].diem < 4)
		{
			for (int j=i; j<n; j++)
			{
				nguoi[j] = nguoi[j+1];
			}
			n--;
		}
	}
	cout << endl;
}

void Congdiem(SV nguoi, int &n)
{
	for (int i=0; i<n; i++)
	{
		if (nguoi[i].diem > 8.6)
		{
			nguoi[i].diem = nguoi[i].diem+0.5;
		}
	}
}
int main()
{
	int n;
//vi trong laptop khong muon chiem dung luong bo nho nen de mang[4]
	SV mang[4];
	
	NhapNhieuNguoi(mang, n);
//Sap xep diem tang dan
	Xepdiem(mang, n);
	Xuatdanhsach(mang, n);
//chen them 1 sv theo thu tu
	Them(mang, n);
	Xepdiem(mang, n);
	Xuatdanhsach(mang, n);
//Loai sinh vien it diem hon 4
	Loai(mang, n);
//Cong diem cho HS xuat sac
	Congdiem(mang, n);
	Xuatdanhsach(mang, n);
}
