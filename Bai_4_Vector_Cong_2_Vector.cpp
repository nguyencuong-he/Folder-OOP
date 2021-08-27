#include<iostream.h>
#include<math.h>
class Vector3
{
	private:
	int a;
	int b;
	int c;
	public:
	Vector3 ()
	{
		this->a=0;
		this->b=0;
		this->c=0;
	}
	
	void get()
	{
		cout<<"(" << a <<","<< b <<","<<c<<")"<<endl;
		
	}
	void set()
	{
		
		cout<<" a = ";
		cin>>a;
		cout<<" b = ";
		cin>>b;
		cout<<" c = ";
		cin>> c;
	
		 
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
	~Vector3()
	{
		
	}
	
};
main()
{
	Vector3 *vt3= new Vector3[2];
	cout<<"=========== Vecto =========="<<endl;
	// Nhap vecto
	for(int i=0; i<2; i++)
	{
		cout<<"Nhap vector "<<i+1<<endl;
		vt3[i].set();
	}
	//Xuat vector ra man hinh
	for(int i=0; i<2; i++)
	{
		cout<<"Vector thu "<<i+1<<endl;
		vt3[i].get();
	}
	// Tinh tong vector
	cout<<"Tong hai vecto "<< vt3[0].get()<< " + " <<vt3[1].get()<<" = "
	cout <<"( "<<vt3[0].geta()+ vt3[1].geta()<<" ,"
		 <<vt3[0].getb()+ vt3[1].getb()<<" ,"
		 <<vt3[0].getc()+ vt3[1].getc()<<" )"<<endl;
	
	

}