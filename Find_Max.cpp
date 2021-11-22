#include<iostream>
#include<stdio.h>

using namespace std;
//Khai bao ham
//khuon mau ham (FUNCTION TEMPLATE)
template<class p1,class p2>
p1 Tim_Max(p1 x,p2 y)
{
	if(x > y)
	{
		return x;
	}
	else if(x < y)
	{
		return y;
	}
	return y;
}
//chuong trinh chinh
int main()
{
	int a = 5;
	int b = 10;
	cout<<"\n Max so nguyen : "<<Tim_Max(a,b);
	
	float x = 8.9;
	float y = 7.9;
	cout<<"\n Max so thuc : "<<Tim_Max(x,y);
	
	cout<<endl;
	return 0;
}

//dinh nghia ham
