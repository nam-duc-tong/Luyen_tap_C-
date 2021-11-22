#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao

void Nhap_Mang(int a[],int n);
void Xuat_Mang(int a[],int n);
//void Them(int a[],int &n,int x,int k);
//void XoaVT(int a[],int &n,int x); //xoa phan tu tai vi tri x
//int XoaGT(int a[],int n,int x); //xoa phan tu co gia tri bang x
//void SapXep(int a[],int n);
bool Kiemtra(int x);
void LietKe(int a[],int n);
//chuong trinh chinh
int main()
{	
	int a[100];
	int n;
	do
	{
		cout<<"\nNhap so luong phan tu cua mang: ";
		cin>>n;
		if(n<=0||n>100)
		{
			cout<<"So luong phan tu mang khong hop le!!!";	
		}
	}while(n<=0||n>100);
		cout<<"Nhap mang"<<endl;
		Nhap_Mang(a,n);
		cout<<"Xuat mang"<<endl;
		Xuat_Mang(a,n);
		
//		int socanthem; //gia tri can them vao mang
//		cout<<"\nNhap gia tri can them vao mang: ";
//		cin>>socanthem;
//		int vitri;
//		cout<<"\nNhap vi tri can them: ";	
//		cin>>vitri;
//		Them(a,n,socanthem,vitri);//goi lai ham them de them 1 phan tu socanthem vao vi tri
//		int x;
//		cout<<"\nNhap vi tri so can xoa: ";
//		cin>>x;
//		int x;
//		cout<<"\nNhap gia tri so can xoa: ";
//		cin>>x;
//		XoaGT(a,n,x);
//		XoaVT(a,n,x);		
//		SapXep(a,n);
		LietKe(a,n);
		cout<<"\nXuat mang sau khi Sap xep ";
		Xuat_Mang(a,n);
		
		
	cout<<endl;
	return 0;
	
}
// Dinh nghia
void Nhap_Mang(int a[],int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		cout<<"\nNhap gia tri a["<<i<<"] = ";
		cin>>a[i];
	}
}
void Xuat_Mang(int a[],int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		cout<<a[i]<< " ";
	}
}
//Ham co nhiem vu them 1 phan tu x vao vi tri k bat ki
//void Them(int a[],int &n,int x,int k)
//{
//	for(int i=n-1;i>=k;i--)
//	{
//		a[i+1] = a[i];
//	}
//	a[k] = x;//gan phan tu can them x vao chinh vi tri k va day phan tu o vi tri k xuong 1 o trong mang
//	n++;//so luong phan tu mang tang len 1 don vi
//}

//void XoaVT(int a[],int &n,int x)
//{
//	for(int i=x+1;i<n;i++)
//	{
//		a[i-1] = a[i];
//	}
//	n--;
//}

//int  XoaGT(int a[],int n,int x)
//{
//	for(int i=0;i<n;i++)
//	{
//		if(x==a[i])
//		{
//			return a[i];
//		}
//		else
//		{
//			return -1;
//		}
//	}
//}
//void SapXep(int a[],int n)
//{
//	for(int i=0;i<n-1;i++)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//			if(a[i]>a[j])
//			
//			{
//				int temp =  a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//}

bool Kiemtra(int x)
{
	while(x>=10)
	{
		x = x/10;
	}
	if(x%2!=0)
	{
		return false;
	}
	return true;
}
void LietKe(int a[],int n)
{
	for(int i = 0;i<n;i++)
	{
		if(Kiemtra(a[i])==true)
		{
			cout<<"\nso do la: "<<a[i]<<endl;
		}
	}
}
