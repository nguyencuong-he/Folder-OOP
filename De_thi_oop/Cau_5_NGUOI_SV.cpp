#include<iostream>
#include<string>
#include<iomanip>
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
		
	}
	void get()
	{
 			cout<<left<<setw(32)<<ht;
			cout<<left<<setw(12)<<scm;
			cout<<left<<setw(5)<<gt;
	}
};
class SV : public NGUOI
{
	private:
		char cn[20];
		float dtl;
	public:
		SV()
		{
			
		}
		SV(char* ht, char* scm , char* gt , char*cn, float dtl): NGUOI(ht,scm,gt)
		{
			strcpy(this->cn,cn);
					this->dtl=dtl;
		}
		friend istream& operator >>(istream& is , SV &sv)
		{
			sv.set();
			cout<<"Chuyen Nganh :";
			is>>sv.cn;
			cout<<"Diem tich luy :";
			is>>sv.dtl;
		}
		void xeploai_sv()
 		{
		 	if(getdtl()>0.0 ||getdtl()<=1.9 )
		 	{
	 			cout<<"Trung binh";
	 			
	 		}
	 		else if(getdtl()>2.0 ||getdtl()<=3.0 )
	 		{
		 		cout<<"Kha";
		 	}
		 	else
		 	{
	 			cout<<"Gioi";
	 		}
		 }
		 friend ostream& operator <<(ostream& os, SV &sv)
		 {
 			sv.get();
 			cout<<left<<setw(25)<<sv.cn;
			cout<<left<<setw(5)<<sv.dtl<<endl;
 		}
 		
 		float getdtl()
 		{
		 	return dtl;
		 }
 		
		 
		 friend bool operator >= (SV sv1, SV sv2)
		 {
 			return sv1.getdtl() > sv2.getdtl();
 		}
};

void title()
{
	cout<<left<<setw(5)<<"STT";
	cout<<left<<setw(32)<<"Ho Va Ten";
	cout<<left<<setw(12)<<"SCM";
	cout<<left<<setw(5)<<"Gioi tinh"<<endl;
}
void title2()
{
	cout<<left<<setw(5)<<"STT";
	cout<<left<<setw(32)<<"Ho Va Ten";
	cout<<left<<setw(12)<<"SCM";
	cout<<left<<setw(15)<<"Gioi tinh";
	cout<<left<<setw(25)<<"Chuyen Nganh";
	cout<<left<<setw(10)<<"Tich Luy";
	cout<<left<<setw(10)<<"Xep loai"<<endl;
}
main()
{
	int n,stt=0,stt1=0;
	cout<<"So luong nguoi :";
	cin>>n;
	NGUOI *ng= new NGUOI[n];

	for(int i=0; i<n; i++)
	{
		ng[i].set();
		cout<<endl;
	}
		title();
	for(int i=0; i<n; i++)
	{
		cout<<left<<setw(5)<<stt++;
		ng[i].get();
		cout<<endl;
	}
	
	SV *sv=new SV[n];
	for(int i=0; i<n; i++)
	{
		cin>>sv[i];
		cout<<endl;
	}
	title2();
	for(int i=0; i<n; i++)
	{
		cout<<left<<setw(5)<<stt1++<<sv[i]<<endl;
	}
}
