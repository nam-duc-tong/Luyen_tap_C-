#include<iostream>
#include<stdio.h>

using namespace std;
//khoi tao
bool kiemtrasonguyento(int n);
int main()
{
	int n;
	cout<<"Nhap gia tri n: ";
	cin>>n;
	bool kiemtra = kiemtrasonguyento(n);
	if(kiemtra)
	{
		cout<<n<<" la so nguyen to";
	}	
	else
	{
		cout<<n<<" khong phai la so nguyen to";
	}
	cout<<endl;
	return 0;	
}
//dinh nghia
bool kiemtrasonguyento(int n)
{
	if(n<2)
	{
		return false;	
	}
	else
	{
		if(n==2)
		{
			return true;	
		}	
		else
		{
			if(n % 2 == 0)
			{
				return false;
			}
			else
			{
				for(int i=2; i < n; i++)
				{
					if(n % i == 0)
					{
						return false;
					}
					
				}
			}
		}
	}
	return true; 
}

