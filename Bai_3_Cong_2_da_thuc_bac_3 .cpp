#include<iostream.h>
#include<string.h>
#include<math.h>
class Dathuc3
{
	private:
	int a;
	int b;
	int c;
	int d;
	
	public:
	
Dathuc3 ()
	{
		/*
this->a=0;
		this->b=0;
		this->c=0;
		this->d=0;*/
	}
	void set()
	{
		cout<<"============ Da thuc bac 3============="<<endl;
		cout<<"a = ";
		cin>>a ;
		cout<<"b = ";
		cin>>b;
		cout<<"c = ";
		cin>>c;
		cout<<"d = ";
		cin>>d;
		cout<<"======================================="<<endl;
	}
	void get()
	{
		cout<< a << "x^3 + "<<b <<"x^2 + "<<c<<"x^2 + "<< d<<endl;
	}
	int geta()
	{
		return a;
	}
	int getb()
	{
		return b;
	}
	int getc()
	{
		return c;
	}
	int getd()
	{
		return d;
	}
	~Dathuc3()
	{
		
	}

};
main()
{	
	Dathuc3 *dathuc= new Dathuc3[2];
	for(int i=0 ;i<2; i++)
	{
		cout<<"Nhap da thuc :"<<i+1<<endl;
		dathuc[i].set();
	}
	
		for(int i=0; i<2; i++)
		{
		cout<<"Da thuc thu  :"<<i+1<<endl;
		dathuc[i].get();
		}
	cout<<"Tong 2 da thuc :"<<endl;
	
			cout<<		dathuc[0].geta()+ dathuc[1].geta()
		<<" x^3 + "<<   dathuc[0].getb()+ dathuc[1].getb() 
		<< " x^2 + "<<	dathuc[0].getc()+ dathuc[1].getc()
		<<" x + " <<    dathuc[0].getd()+ dathuc[1].getd()<<endl;
		
		
	

}