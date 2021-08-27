#include<iostream.h>
#include<string.h>
class Person
{
	private:
	char name[30],sex[6],add[10];
	int dob;
	public:
	
	Person()
	{
		this->name,name;
		this->sex,sex;
		this->add,add;
		this->dob=dob;
	}
	void setname(char* name)
	{
		strcpy(this->name,name);
	}
	char getname()
	{
		return char (name);
	}
	void setxex(char* sex)
	{
		strcpy(this->sex,sex);
	}
	char getsex()
	{
		return char(sex);
	}
	void setadd(char* add)
	{
		strcpy(this->add,add);
	}
	char getadd()
	{
		return char(add);
	}
	void setdob(int dob)
	{
		this->dob=dob;
	}
	int getdob()
	{
		return this->dob;
	}
	void inputInfor()
	{
		cout<<"FULL NAME :";
		cin.ignore();
		cin.getline(name,30);
		cout<<"SEX :";
		cin.ignore();
		cin.getline(sex,6);
		cout<<"ADDRESS :";
		cin.getline(add,10);
		cout<<"D.O.B :";
		cin>>dob;
	}
	void showInfor()
	{
		cout<<"FULL NAME :"<< name<<endl;
		cout<<"SEX :"<<sex<<endl;
		cout<<"ADDRESS :"<<add<<endl;
		cout<<"D.O.B :"<<dob<<endl;
	}

};
class Student: public Person
{
	private:
	char ID[10],email[50];
	float gpa;
	public:
	Student()
	{
		this->ID,ID;
		this->email,email;
		this->gpa=gpa;
	}
	void setID()
	{
		strcpy(this->ID,ID);
	}
	char getID()
	{
		return char (ID);
	}
	void setemail()
	{
		strcpy(this->email,email);
	}
	char getemail()
	{
		return char (email);
	}
	void setgpa()
	{
		this->gpa=gpa;
	}
	int getgpa()
	{
		return int (gpa);
	}
	void inputInfor()
	{
		Person ::inputInfor();
		cout<<"ID :";
		cin.ignore();
		cin.getline(ID,10);
		cout<<"Email :";
		cin.getline(email,50);
		cout<<"GPA :";
		cin>>gpa;
		cout<<"======================================="<<endl;
	}
	void showInfor()
	{
		Person ::showInfor();
		cout<<"ID :"<< ID <<endl;
		cout<<"Email :"<<email<<endl;
		cout<<"GPA :"<<gpa<<endl;
		cout<<"==========***================***============="<<endl;
	}
	void checkscholarship(Student st[],int n);
};
void Student:: checkscholarship(Student st[],int n)
{
	for(int i=0;i<n; i++)
	{
		if(st[i].getgpa() >= 8.0)
		{
			st[i].showInfor();
		}
	}
}
main()
{
	
	Student st[100];
	int n;
	cout<<" Nhap so luong nguoi :";
	cin>>n;
	for(int i=0; i<n; i++)
	{
		st[i].inputInfor();	
	}
	cout<<"Danh sach sinh vien vua nhap "<<endl;
	for(int i=0; i<n; i++)
	{
		st[i].showInfor();
	}
	cout<<"Danh sach sinh vien nhan hoc bong "<<endl;
	st->checkscholarship(st,n);
}
