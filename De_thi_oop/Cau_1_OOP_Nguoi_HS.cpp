#include<iostream>

using namespace std;

class NGUOI 
{
	private:
	char ht[30];
	char scm[10];
	char gt[4];
	public:
	NGUOI()
	{
		
	}
	NGUOI(char *ht,char *scm,char *gt)
	{
		strcpy(this->ht,ht);
		strcpy(this->scm,scm);
		strcpy(this->gt,gt);
		
	}
	void set()
	{
		cout<<"Ho Ten :";
		cin.ignore();
		cin.getline(ht,30);
		cout<<"So chung minh :";
		cin.getline(scm,10);
		cout<<"Gioi tinh :";
		cin.getline(gt,4);
		cout<<"*********************************"<<endl;
	}
	void get()
	{
		cout<<"Ho Ten :"<<ht<<endl;
		cout<<"So chung minh :"<<scm<<endl;
		cout<<"Gioi tinh :"<<gt<< endl;
	}
};
class HS : public NGUOI
{
	private:
	char cn[20];
	float dtk;
	public:
	HS()
	{}
	HS(char *ht , char *scm,char *gt, char *cn , float dtk):NGUOI(ht,scm,gt)
	{
		
		strcpy(this->cn,cn);
				this->dtk=dtk;
	}
	float getDTK()
	{
		return float (dtk);
	}
	friend istream& operator >> (istream &is , HS &hs)
	{
		cin.ignore();
		cout<<"Chuyen Nganh :";
		cin.getline(hs.cn,20);
		cout<<"Diem tong ket :";
		cin>> hs.dtk;
		return is;
	}
	
	
	void xeploai()
	{
		if(dtk >= 0.0 || dtk <= 4.9)
		{
			cout<<"Yeu";
		}
		else if(dtk >= 5.0 || dtk <= 7.9)
		{
			cout<<"Kha";
		}
		else
		{
			cout<<"Gioi";
		}
	}
	
	friend bool operator < (HS hsa , HS hsb)
	{
		return hsa.dtk < hsb.dtk;
	}
	
	friend ostream& operator <<(ostream &os , HS &hs)
	{
		cout<<"Chuyen nganh :"<<hs.cn<<endl;
		cout<<"Diem tong ket :"<<hs.dtk<<endl;
		return os;
	}
	~HS(){}
};
main()
{
	int m;
	cout<<"Nhap so luong nguoi :";
	cin>>m;
	NGUOI *ng = new NGUOI[m];
	
	for(int i=0; i<m; i++)
	{
		ng[i].set();
	}
	
	for(int i=0; i<m; i++)
	{
		ng[i].get();
	}
	int n;
	cout<<"Nhap so luong hoc sinh :";
	cin>>n;
	HS *hs = new HS[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>hs[i];
	}
	
	for(int i=0; i<n; i++)
	{
		hs[i].get();
	}
	
	cout<<"\nDanh sach hoc sinh dat loai Gioi :";
	for(int i=0; i<m; i++)
	{
		if(hs[i].getDTK()> 8.0 )
		{
			hs[i].get();
		}
	}
	

	
}