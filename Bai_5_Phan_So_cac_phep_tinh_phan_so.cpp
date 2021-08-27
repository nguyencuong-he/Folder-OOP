#include<iostream.h>
class Phanso
{
	private:
	int t;
	int m;
	public:
	Phanso()
	{
		this->t=0;
		this->m=0;
		
	}
	void set()
	{
		cout<<"Tu so :";
		cin>> t;
		while(t== 0)
		{
			cout<<"Khong hop le!";
			cout<<"Tu so :";
			cin>>t;
			
		}
		cout<<"Mau so :";
		cin>> m;
		while(m== 0)
		{
			cout<<"Khong hop le!";
			cout<<"Mau so :";
			cin>>m;
			
		}
	}
	void get()
	{
		cout<<t<<"/"<<m;
	}
	int gett()
	{
		this->t=t;
	}
	int getm()
	{
		this->m=m;
	}
};
main()
{
	Phanso ps[2];
	// Nhap phan so
	for(int i=0; i<2;i++)
	{
		cout<<"Nhap phan so "<<i+1<<endl;
		ps[i].set();
	}
	//Hien thi phan so
	cout<<"Phan so thu nhat : ";
	ps[0].get();
	
	cout<<"\nPhan so thu hai :";
	ps[1].get();
	cout<<endl;
	// Tinh tong phan so
	cout<<"Tong hai phan so :";
	if((ps[0].getm())== ps[1].getm())
	{
		cout<< ps[0].gett() + ps[1].gett() << "/" << ps[0].getm();
	}
	else 
	{
		if(((ps[0].gett() * ps[1].getm())+(ps[0].getm() * ps[1].gett()))== 0 ||( ps[0].getm() * ps[1].getm())==0)
		{
			cout<< " 0 "<<endl;
			
		}
		if((ps[0].gett() * ps[1].getm())+(ps[0].getm() * ps[1].gett())!= 0)
		{
			cout<< (ps[0].gett() * ps[1].getm())+(ps[0].getm() * ps[1].gett()) <<"/"<<( ps[0].getm() * ps[1].getm());
		}
	}
	// Tinh hieu hai phan so
	cout<<"\nHieu hai phan so :"<<endl;
	if((ps[0].getm())== ps[1].getm())
	{
		cout<< ps[0].gett() - ps[1].gett() << "/" << ps[0].getm();
	}
	else 
	{
		if(((ps[0].gett() * ps[1].getm())-(ps[0].getm() * ps[1].gett()))== 0 ||( ps[0].getm() * ps[1].getm())==0)
		{
			cout<< " 0 "<<endl;
			
		}
		if((ps[0].gett() * ps[1].getm())-(ps[0].getm() * ps[1].gett())!= 0)
		{
			cout<< (ps[0].gett() * ps[1].getm())-(ps[0].getm() * ps[1].gett()) <<"/"<<( ps[0].getm() * ps[1].getm());
		}
	}
	// Nhan hai phan so 
	 cout<<"\n Tich hai phan so :"<<endl;
	 cout<< ps[0].gett() * ps[1].gett() <<"/"<<ps[0].getm() * ps[1].getm()<<endl;
	 // Chia hai phan so
	 cout<<"\n Thuong cua hai phan so :"<<endl;
	 cout<< ps[0].gett() * ps[1].getm() <<"/"<<ps[0].getm() * ps[1].gett()<<endl;
}