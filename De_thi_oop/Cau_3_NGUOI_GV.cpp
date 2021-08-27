#include<iostream>
#include<string>

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
		cout<<"Ho Ten :"<<ht<<endl;
		cout<<"So chung minh :"<<scm<<endl;
		cout<<"Gioi tinh :"<<gt<< endl;
	}
};
class GV : public NGUOI
{
	private:
		char tdcm[10];
		int tn;
	public:
		GV()
		{}
		GV(char* ht, char* scm, char* gt,char *tdcm, int tn): NGUOI (ht,scm,gt)
		{
			strcpy(this->tdcm,tdcm);
					this->tn=tn;
		}
		friend istream& operator >> (istream& is, GV &gv)
		{
			gv.set();
			cout<<"Tring do chuyen mon:";
			is.getline(gv.tdcm,10);
			cout<<"Tham nien :";
			is>>gv.tn;
		}
		
		friend ostream& operator << (ostream& os , GV &gv)
		{
			gv.get();
			cout<<"Trinh do chuyen mon :"<<gv.tdcm<<endl;
			cout<<"Tham nien :"<<gv.tn<<endl;
		}
		float tinhluong()
		{
			return gettn()*100;
		}
		
		friend bool operator >= (GV gv1, GV gv2)
		{
			return gv1.tn >= gv2.tn;
		}
		int gettn ()
		{
			return int (tn);
		}
};
main()
{
	int n;
	cout<<"Nhap so luong nguoi :";
	cin>>n;
	NGUOI *ng= new NGUOI[n];
	 for(int i=0; i<n; i++)
	 {
 		cout<<"Nguoi thu "<<i+1<<endl;
 		ng[i].set();
 	}
 	
 	for(int i=0; i<n; i++)
 	{
	 	cout<<"\n=================================="<<endl;
	 	ng[i].get();
	 	
	 }
	 
	 GV *gv=new GV[n];
	  for(int i=0; i<n; i++)
	  {
  		cin>>gv[i];
  	}
  	
  	for(int i=0; i<n; i++)
  	{
	  	for(int j=i+1; j<n; j++)
	  	{
	  		if(gv[j].tinhluong() >= gv[i].tinhluong())
	  		{
		  		GV temp =gv[i];
		  			gv[j]= gv[i];
		  			gv[i]=temp;
		  	}
	  	}
	  	cout<< gv[i];
	  }
  
}