#include<iostream>
using namespace std;

class sinhvien{
	char masv[30];
	char hoten[50];
	int tuoi;
	float diem;
public:
	void nhap();
	void xuat();
};
void sinhvien::nhap(){
	cout<<"Ma sinh vien: ";
	fflush(stdin);
	gets(masv);
	cout<<"Ho ten: ";
	fflush(stdin);
	gets(hoten);
	cout<<"Tuoi: ";
	cin>>tuoi;
	cout<<"Diem: ";
	cin>>diem;
}
void sinhvien::xuat(){
	cout<<"Ma sinh vien: "<<masv<<endl;
	cout<<"Ho ten: "<<hoten<<endl;
	cout<<"Tuoi: "<<tuoi<<endl;
	cout<<"Diem: "<<diem<<endl<<endl;
}
int main(){
	sinhvien a,b;
	cout<<"Nhap thong tin cua sinh vien a: "<<endl;
	a.nhap();
	cout<<"Nhap thong tin cua sinh vien b: "<<endl;
	b.nhap();
	cout<<endl<<"Sinh vien a "<<endl;
	a.xuat();
	cout<<endl<<"Sinh vien b "<<endl;
	b.xuat();
	return 0;
}
