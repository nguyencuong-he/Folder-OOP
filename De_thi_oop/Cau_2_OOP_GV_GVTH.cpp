#include<iostream>
#include<string>

using namespace std;

class GV
{
	private:
		char ht[30];
		char cn[20];
		float bl;
	public:
		GV()
		{
			
		}
		
		GV(char *ht, char* cn , float bl)
		{
			strcpy(this->ht,ht);
			strcpy(this->cn,cn);
			this->bl=bl;
		}
		
		~GV()
		{
			
		}
		
		void set()
		{
			cout<<"Ho Va Ten :";
			cin.ignore();
			cin.getline(ht,30);
			cout<<"Chuyen nganh :";
			cin.getline(cn,20);
			cout<<"Bac luong :";
			cin>> bl;
			cout<<"========================================="<<endl<<endl;
		}
		
		void get()
		{
			cout<<"HO VA TEN :"<<ht<<endl;
			cout<<"CHUYEN NGANH :"<<cn<<endl;
			cout<<"BAC LUONG :"<<bl<<endl;	
		}
		float getbl()
		{
			return float (bl);
		}
		
		
};
class GVTH : public GV
{
	private : 
		char l[5];
		float lpc;
	public:
		GVTH()
		{}
		GVTH(char *ht , char *cn, float bl , char *l , float lpc): GV(ht,cn,bl)
		{
			strcpy(this->l,l);
				this->lpc=lpc;
		}
		~GVTH()
		{}
		friend istream& operator >> (istream &is, GVTH &gvth)
		{
			gvth.set();
			cout<<"Lop :";
			is.ignore();
			is.getline(gvth.l,5);
			cout<<"Luong phu cap :";
			is>>gvth.lpc;
		}
		friend ostream& operator << (ostream &os, GVTH &gvth)
		{
			gvth.get();
			cout<<"Lop :"<<gvth.l<<endl;
			cout<<"Luong phu cap :"<<gvth.lpc<<endl;
		}
		
		float tinhluong()
		{
			return  (1150 * getbl() + (50/100)*1150*getbl()) ;
		}
		friend bool operator >= (GVTH gvth1 , GVTH gvth2 )
		{
			return gvth1.tinhluong() >= gvth2.tinhluong();
		}
	
};
main()
{
	int n;
	cout<<"Nhap so luong giao vien :";
	cin>>n;
	GV *gv=new GV[n];
	
	for(int i=0; i<n; i++)
	{
		gv[i].set();
	}
	
	for(int i=0; i<n; i++)
	{
		gv[i].get();
	}
	

	cout<<"\n Danh sach Giao Vien theo thu tu luong tang dan :"<<endl;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(gv[i].getbl() > gv[j].getbl())
			{
					GV temp = gv[i];
						gv[i]=gv[j];
						gv[j]=temp;
				
			}
		}
		gv[i].get();
	}
	
	GVTH *gvth=new GVTH[n];
	
	for(int i=0;i<n; i++)
	{
		cin>>gvth[i];
	}
	cout<<"\n Danh sach giao vien tieu hoc voi muc luong tang dan :"<<endl;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(gvth[i].tinhluong() > gvth[j].tinhluong())
			{
					GVTH temp = gvth[i];
						gvth[i]=gvth[j];
						gvth[j]=temp;
				
			}
		}
		cout<<gvth[i];	
	}
}