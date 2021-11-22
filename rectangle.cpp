#include<iostream>

using namespace std;
class hinhchunhat{
	float chieudai,chieurong;
public:
	void nhap();
	void ve();
	float dientich();
	float chuvi();
};

void hinhchunhat::nhap(){
	cout<<"Chieu dai: ";
	cin>>chieudai;
	cout<<"Chieu rong: ";
	cin>>chieurong;
}

void hinhchunhat::ve(){
	for(int i=0;i<chieudai;i++){
		for(int j=0;j<chieurong;j++){
			cout<<"*";
//			cout<<endl;
		}
		cout<<endl;
	}
}
float hinhchunhat::dientich(){
	return chieudai*chieurong;
}
float hinhchunhat::chuvi(){
	return 2*(chieudai+chieurong);
}

int main(){
	hinhchunhat x;
	x.nhap();
	x.ve();
	cout<<"dien tich hinh chu nhat: "<<x.dientich()<<endl;
	cout<<"chu vi hinh chu nhat: "<<x.chuvi()<<endl;
	return 0;
}

