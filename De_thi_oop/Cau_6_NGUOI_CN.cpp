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
class CN : public NGUOI
{
	private:
		char cv[20];
		float sn;
	public:
	 
	 CN()
	 {
 		
 	}
 	 CN(char *ht, char* scm, char* gt , char* cv,float sn):NGUOI(ht,scm,gt)
 	 {
 	 	strcpy(this->cv,cv);
 	 			this->sn,sn;
 	 }
 	 ~CN()
 	 {
 	 		
 	 }
 	 
 	 friend istream& operator >> (istream& is, CN &cn)
 	 {
 	 	cn.set();
 	 	cin.ignore();
 	 	cout<<"Cong viec :";
 	 	is.getline(cn.cv,20);
 	 	cout<<"So nam lam viec :";
 	 	is>>cn.sn;
 	 	 return is;
 	 	 
 	 }
 	 
 	 friend ostream& operator << (ostream& os, CN &cn)
 	 {
 	 	cn.get();
 			cout<<left<<setw(25)<<cn.cv;
			cout<<left<<setw(5)<<cn.sn<<endl;
 	 }
 	 float getsn()
 	 {
 	 	return float (sn);
 	 }
 	 void xeploai_CN()
 	 {
 	 	if(sn >=0.0 || sn<=2.9)
 	 	{
	 	 	cout<<"So cap";
	 	 }
	 	 else if(sn >=3.0 || sn<=9.9)
	 	 {
 	 		cout<<"Trung cap";
 	 	}
 	 	else 
 	 	{
	 	 	cout<<"Cao cap";
	 	 }
 	 }
 	 friend bool operator >= (CN cn1, CN cn2)
 	 {
 	 	return cn1.getsn() > cn2.getsn();
 	 	
 	 }
 	 void sort_sn(CN cn[],int n)
 	 {
 	 	for(int i=0; i<n; i++)
 	 	{
	 	 	for(int j=i+1; j<n; j++)
	 	 	{
	 	 		if(cn[i].sn > cn[j].sn)
	 	 		{
		 	 		CN temp= cn[i];
		 	 			cn[i]= cn[j];
		 	 			cn[j]=temp;
		 	 	}
	 	 	}
	 	 	
	 	 	cout<<cn[i]<<endl;
	 	 	
	 	 }
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
	NGUOI *ng = new NGUOI[n];
	
	for(int i=0; i<n; i++)
	{
		ng[i].set();
		
	}
	
	title();
	for(int i=0; i<n; i++)
	{
		ng[i].get();
	}
	
	CN *cn= new CN[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>cn[i];
	}
	
	title2();
	
	for(int i=0; i<n; i++)
	{
		cout<<cn[i];
	}
	cout<<"Danh sach sap xep tang dan :"<<endl;
	
	for(int i=0; i<n; i++)
	{
	
		cn[i].sort_sn(cn,n);
	}
}