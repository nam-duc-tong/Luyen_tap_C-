#include<iostream>
 11 #include<fstream>
 12 #include<stdio.h>
 13
 14 using namespace std;
 15
 16 //Khai bao ham cai dat cac phep toan tren mang 2 chieu
 17 void duaRaMT(int *V,int m,int n);
 18 int tinhTong(int *V,int m,int n);
 19 float tinhTBC(int *V,int m,int n);
 20
 21 //===chuong trinh chinh===
 22 int main()
 23 {
 24     //Khai bao tep doc vao
 25     ifstream fin("matran.txt");
 26
 27     //Khai bao bien
 28     int m,n;

