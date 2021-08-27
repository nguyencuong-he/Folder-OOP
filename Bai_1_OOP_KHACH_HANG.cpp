#include<iostream.h>
#include<string.h>
struct NM
{
	int ns, ths,nms;
};
class KH
{
	private:
		char ht[30],cmt[10],k[50];
		int age;
	public:
		KH(char* ht="",char* cmt="",char* k="",int age=0)
		{
			strcpy(this->ht,ht);
			strcpy(this->cmt,cmt);
			strcpy(this->k,k);
			this->age=age;
			
		}
		void set()
		{
			cout<<"Ho Va Ten :";
			cin.ignore();
			cin.getline(ht,30);
			cout<<"So chung minh nhan dan :";
			cin.getline(cmt,10);
			cout<<"Ho Khau :";
			cin.getline(k,50);
			cout<<"Nam sinh :";
			cin>>age;
			
		}
		int getAge()
		{
			return age;
		}
		char getk()
		{
			return char (k);
		}
		void showInfor()
		{
			cout<<"Ho Va Ten :"<<ht<<endl;
			cout<<"So chung minh dan dan :"<<cmt<<endl;
			cout<<"Ho Khau :"<<k<<endl;
			cout<<"Nam sinh :"<<age<<endl;
		}
		
		friend istream& operator>>(istream& is , KH &kh)
		{
			kh.set();
			return is;
		}
		
		friend ostream& operator << (ostream &os, KH &kh)
		{
			kh.showInfor();
			return os;
		}
		
		friend bool operator >=(KH &kh1, KH &kh2)
		{
			return (kh1.age >= kh2.age);
		}
		
		void sortAge(KH kh[],int n)
		{
			for(int i=0; i<n; i++)
			{
				for(int j=i+1; j<n; j++)
				{
					if(kh[i].getAge() < kh[j].getAge())
					{
						KH temp = kh[i];
							kh[i]=kh[j];
							kh[j]= temp;
					}
				}
				
				kh[i].showInfor();
			}
			
			
		}
		void findHk(KH khachhang[],int n)
		{
			for(int i=0; i<n; i++)
			{
				if(!strcmp(khachhang[i].getk(),"Ha Noi"))
				{
					khachhang[i].showInfor();
				}
			}
			
		}
		
		
};
main()
{
	KH *khachhang= new KH();
	int n;
	cout<<"Nhap so luong khach hang ";
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cout<<"Thong tin Khach hang thu "<<i+1<<endl;
		khachhang[i].set();
	}
	cout<<"\nDanh sach thong tin Khach hang :"<<endl;
	for(int i=0; i<n; i++)
	{
		khachhang[i].showInfor();
	}
	
	cout<<"\nDanh sach khach hang co Ho Khau o Ha Noi"<<endl;
	
	for(int i=0; i<n; i++)
	{
		khachhang[i].findHk(khachhang,n);
	}
	
	cout<<"\n Danh sach khach hang sap xep theo tuoi"<<endl;
	
	for(int i=0; i<n; i++)
	{
		khachhang[i].sortAge(khachhang,n);
	}
	
}
