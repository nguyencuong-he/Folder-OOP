#include<iostream.h>

class People
{
	protected:
	char name[30];
	char address[20];
	int age;
	public:
	People()
	{
		this->name[0]='\0';
		this->address[0]='\0';
		this->age=0;
	}
	void set()
	{
		cout<<"Full name :";
		cin.ignore();
		cin.getline(name,30);
		
		cout<<"Age :";
		cin>>age;
		cout<<"Address : ";
		cin.ignore();
		cin.getline( address,20);
		
	}
	void get()
	{
		cout<<" FULL NAME :"<< name <<endl;
		cout<<" AGE : "<< age<<endl;
		cout<<" ADDRESS :"<< address<<endl;
	}

};
class Student : public People 
{
	private:
	char id[30];
	int math;
	int physical;
	int chemistry;
	public:
	Student()
	{
		this->id[0]='\0';
		this->math=0;
		this->physical=0;
		this->chemistry=0;
	}
	void set()
	{
		People:: set(); // ke thua ham people vao ham student
		cout<<" ID :";
		cin.ignore();
		cin.getline(id,30);
		cout<<" Math :";
		cin>>math;
		cout<<" Physical: ";
		cin>>physical;
		cout<<" Chemistry: ";
		cin>> chemistry;
	}
	void get()
	{
		People::get();  //ke thua ham people vao ham student
		cout<<" ID :"<< id<<endl;
		cout<<" MATH : "<<math<<endl;
		cout<<" PHYSICAL : "<< physical<<endl;
		cout<<" CHEMICAL : "<<chemistry<<endl;
	}
	float gpa()
	{
		return (float)(math + physical +chemistry)/(3 * 1.0);
	}
};
main()
{
	Student st;
	
		st.set();
		st.get();
		cout<<" GPA: "<<st.gpa()<<endl;
	
	//Xuat
}

