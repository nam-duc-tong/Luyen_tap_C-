#include<iostream>
using namespace std;
struct Node{
	Node *pNext;
	int data;
};
struct Queue{
	Node *head,*tail;
};
void Init(Queue &q){
	q.head = q.tail = NULL;
}
Node *createNode (int x){
	Node *p = new Node;
	if(!p)exit(1);
	p->pNext = NULL;
	p->data = x;
	return p;
}
void Push (Queue &q, Node *p){
	if(!q.head)
	q.head = q.tail = p;
	else{
		q.tail ->pNext = p;
		q.tail = p;
	}
}
int Top(Queue q){
	if(q.head){
		return q.head ->data;
	}
	else{
		return 0;
	}
}
int Pop(Queue &q){
	if(q.head){
		Node *p = q.head;
		q.head = q.head ->pNext;
		return p->data;
		delete p;
	}
	return 0;
}
void nhap (Queue &q){
	int n,x;
	cout<<"Nhap so phan tu ban muon them vao trong Queue: ";
	cin>>n;
	while(n--){
		cout<<"\nNhap phan tu trong hang doi: ";cin>>x;
		Node *p = createNode(x);
		Push(q,p);
	}
}
void xuat(Queue q){
	Node *p = q.head;
	while(p){
		cout<<p->data<<"\t";
		p = p->p.Next;
	}
	cout<<endl;
}
void menu(Queue q){
	int lc;
	do{
		cout<<"\n\n\t =============Menu ===========";
		cout<<"\n\t1. Nhap phan tu cho hang doi";
		cout<<"\n\t2. xuat phan tu trong hang doi";
		cout<<"\n\t3. Hien thi phan tu dau tien cua hang doi";
		cout<<"\n\t4. Xoa phan tu dau tien cua hang doi";
		cout<<"\n\t0. Thoat";
		cout<<"\n\n\t\t ====================end============";
		cout<<"\nNhap lua chon ban muon chon: ";
		cin>>lc;
		switch(lc){
			case 0: break;
			case 1: 
				nhap(q);
				break;
			case 2: 
				cout<<"Cac phan tu trong hang doi Queue la: ";
				xuat(q);
				break;
			case 3:
				cout<<"Phan tu dau tien cua hang doi la: "<<Top(q);
				break;
			case 4:
				Pop(q);
				cout<<"Xoa thanh cong, vui long nhap 2 de kiem tra lai";
				break;
			default: cout<<"\n Nhap sai, vui long nhap lai";
		}
		
	}
	while(lc);
}
int main(){
	Queue q;
	Init (q);
	int lc;
	menu(q);
	cout<<"\n-------------------------\n";
	cout<<"chuong trinh nay duoc Nam lam";
}
