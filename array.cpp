#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int main(){
//	int a[5] = {1,2,3,4,5};
//	for(int i=0;i<5;i++){
//		cout<<a[i]<<endl;
//	}
//	cout<<"===================="<<endl;
//	
//	int b[4]={0};
//	for(int i=0;i<4;i++){
//		cout<<b[i]<<endl;
//	}
//	
//	cout<<"===================="<<endl;
//	int c[] = {0,1,2,3,4,5,6,4,8,9,7};
//	int n = sizeof(c)/sizeof(int);
//	cout<<n<<endl;
//	for(int i=0;i<n;i++){
//		cout<<c[i]<<endl;
//	}

//mang dong
//int *d = new int[10];
cout<<"========================Vecto============"<<endl;
vector<int> v(5,0);
v.push_back(10);
for(int i=0;i<v.size();i++){
	cout<<v[i]<<endl;
}


	return 0;
}
