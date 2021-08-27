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

class NV :public NGUOI
{
	private:
	char tdcm [10];
	float sn ;
	public:
	
	NV(){
		
	}
	NV(char* ht, char* scm, char* gt , char* tdcm , float sn): NGUOI(ht,scm,gt)
	{
		strcpy(this->tdcm,tdcm);
			this->sn=sn;
	}
	
	friend istream& operator >> (istream &is , NV &nv)
	{
		nv.set();
		cout<<"Trinh do chuyen mon:";
		is.getline(nv.tdcm,10);
		cout<<"So nam nop BHXH :";
		is>>nv.sn;
	}
	friend ostream& operator << (ostream &os , NV &nv)
	{
		nv.get();
		os<<left<<setw(20)<<nv.tdcm;
		os<<left<<setw(5)<<nv.sn<<endl;
		
	}
	float tinh_tcd ()
	{
		return sn*50;
	}
	friend bool operator >= (NV nv1, NV nv2 )
	{
		return nv1.sn >= nv2.sn;
	}
};
void title()
{
	cout<<left<<setw(5)<<"STT"<<setw(32)<<"HO TEN"<<setw(12)<<"SO CMND"<<setw(5)<<"Gioi tinh"<<endl;

}
void title2()
{
	cout<<left<<setw(5)<<"STT"<<setw(32)<<"HO TEN"<<setw(12)<<"SO CMND"<<setw(5)<<"Gioi tinh"<<setw(20)<<"TDCM"<<setw(5)<<"So Nam"<<endl;
}
 main()
{
	int n,stt=0;
	cout<<"Nhap so luong nguoi :";
	cin>>n;
	NGUOI *ng=new NGUOI[n];
	
	for(int i=0; i<n; i++)
	{
		cout<<"Nguoi thu "<<i+1<<endl;
		ng[i].set();
	}
	title();
	 for(int i=0; i<n; i++)
	 {
	 	cout<<left<<setw(5)<<stt++;
 		ng[i].get();
 		cout<<endl;
 	}
 	
 	NV *nv=new NV[n];
 	for(int i=0; i<n; i++)
 	{
	 cout<<endl;
	 cin>>nv[i];	
	 }
	 title2();
	 for(int i=0; i<n; i++)
	 {
 		for(int j=i+1; j<n; j++)
 		{
 			if(nv[i].tinh_tcd() >= nv[j].tinh_tcd())
 			{
			 NV temp=nv[i];
		 		nv[i]=nv[j];
		 		nv[j]=temp;	
			 }
		 	
		 }
 	}
	 for(int i=0; i<n; i++)
	 {
 		cout<<left<<setw(5)<<stt++<<nv[i]<<endl;
 	}
}