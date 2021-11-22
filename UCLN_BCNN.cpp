#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao nguyen mau ham
//ham co chuc nang tim UCLN cua a va b
int UCLN(int a,int b);
int BCNN(int a,int b);
//chuong trinh chinh
int main()
{
	int a,b;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Uoc chung lon nhat cua a va b la: "<<UCLN(a,b)<<endl;
	cout<<"Boi chung nho nhat cua a va b la: "<<BCNN(a,b);
	cout<<endl;
	return 0;
}
//dinh nghia ham
//ham tim uoc chung lon nhat
int UCLN(int a,int b)
{
	if(a < b){
		for(int i = a; i >= 1; i--)
		{
			if(a % i == 0 && b % i == 0)
			{
				return i;
			}
		}
	}
	else
	{
		for(int i = b; i >= 1; i--)
		{
			if(b % i == 0 && a % i == 0)
			{
				return i;
			}
		}
	}
}
//ham tim boi chung nho nhat
int BCNN(int a,int b)
{
	return (a*b)/UCLN(a,b);
}
