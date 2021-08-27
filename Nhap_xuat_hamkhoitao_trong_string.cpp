#include<iostream.h>
#include<string.h>
using namespace std;
class VanDongVien
{
	private:
     	char hoten[30];
     	int tuoi;
     	char monthi[20];
     	float chieucao;
    	float cannang;
	public:
	     VanDongVien(char * hoten =" ", int tuoi = 0,  // Ham khoi tao 
		             char * monthi=" ", float chieucao= 0.0,
					 float cannang=0.0)
					 	{
					 	strcpy(this->hoten,30,hoten); // su dung con tro : copy tu phuong thuc hoten vao tham so hoten voi 30 ky tu
					         	this->tuoi=tuoi;  // tro den phuong thuc tuoi vao tham so tuoi
					 	strcpy(this->monthi,20,monthi);
					 	        this->chieucao=chieucao;
					 	        this->cannang=cannang;
					 	}
	      void set()
		  	{
      	   cin.ignore();
      		cout<<"\nNhap ho ten: ";
      		cin.getline(hoten,30);
      		cout<<"\nNhap mon thi:";
      		cin.getline(monthi,20);
      		cout<<"\nNhap tuoi:";
      		cin>>tuoi;
      		cout<<"\nNhap chieu cao:";
      		cin>>chieucao;
      		cout<<"\nNhap can nang:";
      		cin>>cannang;
      		
      	}
      	void get()
		  	{
	      	cout<<"\nNhap ho ten : "<<hoten;
	      	cout<<"\nNhap mon thi :"<<monthi;
	      	cout<<"\nNhap tuoi : "<<tuoi;
	      	cout<<"\nNhap chieu cao : "<<chieucao;
	      	cout<<"\nNhap can nang : "<<cannang;
	      }
					 	
};
	main(){
		int n;
		cout<<"\nNhap so luong vdv:";
		cin>>n;
		
	VanDongVien *vdv = new VanDongVien[n]; // khoi tao con tro dong *vdv 
		for(int i=0 ; i<n ; i++){
				cout<<"\nNhap thong tin vdv thu "<<i+1<<":";
				vdv[i].set();   // goi lai ham set() de nhap thong tin van dong vien
		}
		cout<<endl;
		for(int i=0 ; i<n ; i++){
			cout<<"\nXuat thong tin vdv thu "<<i+1<<":";
			vdv[i].get();    // goi lai ham get() de xuat thong tin
		}
		cout<<endl;
	
	}