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
			cout<<left<<setw(5)<<gt<<endl;
	}
};

class KHTG :public NGUOI
{
	private:
		double st;
		float tg;
	public:
		KHTG()
		{
			
		}
		KHTG(char* ht, char* scm, char* gt, double st, float tg):NGUOI(ht,scm,gt)
		{
			this->st,st;
			this->tg,tg;
		}
		
		double getst()
		{
			return double (st);
		}
		float gettg()
		{
			return float (tg);
		}
		
		friend istream& operator >> (istream &is, KHTG &khtg)
		{
			khtg.set();
			cout<<"Nhap so tien gui :";
			is>>khtg.st;
			cout<<"Nhap So thang gui :";
			is>>khtg.tg;
		}
		
		friend ostream& operator <<(ostream &os , KHTG &khtg)
		{
			khtg.get();
			cout<<left<<setw(20)<<khtg.st;
			cout<<left<<setw(10)<<khtg.tg;
		}
		void xeploai_kh()
		{
			if(st >=1000000 || st<=99999999)
			{
				cout<<left<<20<<"Trung BINH";
			}
			else if(st>=100000000)
			{
				cout<<left<<setw(20)<<"VIP";
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
	cout<<left<<setw(25)<<"Thoi gian (thang)";
	cout<<left<<setw(10)<<"So tien";
	cout<<left<<setw(10)<<"Xep loai"<<endl;
}
main()
{
	int n,stt=0;
	cout<<"So luong nguoi :";
	cin>>n;
	NGUOI *ng=new NGUOI[n];
	
	for(int i=0; i<n; i++)
	{
		cout<<"NGUOI THU "<<i+1<<endl;
		ng[i].set();
		
	}
	title();
	for(int i=0; i<n; i++)
	{
		cout<<left<<setw(5)<<stt++;
		ng[i].get();
	}
	
	KHTG *khtg= new KHTG[n];
	
	for(int i=0; i<n; i++)
	{
		cout<<"Khach hang"<<i+1<<endl;
		cin>>khtg[i];
	}
	int stt1=0;
	title2();
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			KHTG temp= khtg[i];
				khtg[i]=khtg[j];
				khtg[j]=temp;
		}
	}
	for(int i=0; i<n; i++)
	{
		cout<<setw(5)<<stt1++<<khtg[i]<<setw(10);
		khtg[i].xeploai_kh();
	}
}