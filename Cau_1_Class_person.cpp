#include<iostream.h>
#include<string.h>
class Person
{
	private:
	char name[30],sex[6],add[10];
	int dob;
	public:
	/*
Person()
	{
		/*
this->name;
		this->sex;
		this->add;
		this->dob;*/
	
/*
	~Person()
	{
		
	}*/
	Person(char name[0]='\0',char sex[0]='\0',
	char add[0]='\0',int dob = 0 )
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
		cin.getline(sex,6);
		cout<<"ADDRESS :";
		cin.getline(add,10);
		cout<<"D.O.B :";
		cin>>dob;
		cout<<"==============        ==============="<<endl;
		
	}
	void showInfor()
	{
		cout<<"FULL NAME :"<< name<<endl;
		cout<<"SEX :"<<sex<<endl;
		cout<<"ADDRESS :"<<add<<endl;
		cout<<"D.O.B :"<<dob<<endl;
	}
	void display(Person p[],int n)
	{
		for(int i=0; i<n; i++)
	 		{
 				p[i].showInfor();
 			}	
	}

};
main()
{
	Person p[100];
	int n;
	cout<<" Nhap so luong nguoi :";
	cin>>n;
	for(int i=0; i<n; i++)
	{
		p[i].inputInfor();
	}
	 p->display(p,n);
}