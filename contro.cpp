#include<iostream>
//#include<stdio.h>
struct con_nguoi{
	con_nguoi(int t,float v_mot,float c_cao)
	{
		tuoi = t;
		vong_mot = v_mot;
		chieu_cao = c_cao;
	}
	int tuoi;
	float vong_mot;
	float chieu_cao;
};
int main(){
	con_nguoi Nam(21,70,1.65);
	con_nguoi Thao(21,90,1.65);
	con_nguoi Phuong(22,89,1.65);
//	
//	std::cout<<&Thao<<std::endl;
//	std::cout<<&Nam<<std::endl;
//	std::cout<<&Phuong<<std::endl;

	con_nguoi *bo_nhi;
//	dau * khai bao bien con tro(syntax)
	
	bo_nhi = &Thao;
	std::cout<<(*bo_nhi).tuoi<<std::endl;
	
//	dau * la lay gia tri tai dia chi(operator)
	
	bo_nhi = &Phuong;
	std::cout<<(*bo_nhi).vong_mot <<std::endl;
	
	bo_nhi = nullptr;
	std::cout<<(*bo_nhi).vong_mot<<std::endl;
	
	return 0;	
//con tro la mot bien dac biet, am chi mot bien x nao day thong qua dia chi cua bien x do (&x);
// con tro la mot bien dac biet ma gia tri cua no la dia chi cua bien khac

}
