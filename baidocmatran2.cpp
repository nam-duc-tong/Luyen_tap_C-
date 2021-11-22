#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;

//Khai bao ham cai dat cac phep toan tren mang 2 chieu

void duaRaMT(int *V,int m,int n);
int tinhTong(int *V,int m,int n);
float tinhTBC(int *V,int m,int n);

//chuong trinh chinh
int main(){
	
	//khai bao tep doc vao
	ifstream fin("matran.txt");
	
	//khai bao bien
	int m,n;
	
	//doc kich thuoc ma tran tu tep
	fin>>m>>n;
	
	//cai dat cau truc luu tru ke tiep cua mang 2 chieu
	int *V = new int[m*n];
	
	//doc ma tran tu tep vao mang dong
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int k = (i-1)*n+j-1;
			fin>>V[k];
		}
		
	}
	cout<<"Ma tran doc duoc tu tep la: \n";
	duaRaMT(V,m,n);
	
	cout<<"\n Tong cac phan tu cua ma tran la: "<<tinhTong(V,m,n);
	printf("\n Trung binh cong cac phan tu cua ma tran la: %0.1f ",tinhTBC(V,m,n));
	
	cout<<endl;
	return 0;
}
// dinh nghia ham
void duaRaMT(int *V,int m,int n)
{
	for(int i=1;i<=m;i++)
	{
		//dua ra hang i
		for(int j=1;j<=n;j++)
		{
			//tinh chi so o nho k
			int k= (i-1)*n + j-1;
			//dua ra phan tu aij o nho V[k]
			printf("%6d",V[k]);
		}
		//xuong dong
		cout<<endl; 
	}
}
int tinhTong(int *V,int m,int n)
{
	float tong = 0;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int k=(i-1)*n + j-1;
			tong+=V[k];
		}
	}	
	return tong;
}
float tinhTBC(int *V,int m,int n)
{
	float tong =0;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int k=(i-1)*n + j - 1;
			tong+=V[k];
		}	
	
	}
	return tong/(m*n);
}
