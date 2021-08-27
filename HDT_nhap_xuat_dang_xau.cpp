#include<iostream.h>
#include<string.h>
class Student
{	private:
	char ID [20];// thuoc tinh / thong tin doi tuong
	char name [100];
	int age;
	float mark;
	char address [100];
	public:
	Student()
	{
		this->name[0]="\0";
		this->address[0]="\0";
		this->ID[0]="\0";
		this->age =0;
		this->mark= 0;
	}
	Student(char* name)
	{
		strcpy_s(this->name,99,name); // (copy this name tu thuoc tinh name , so luong 99 ky tu , vao bien name)
		this->address[0]="\0";
		this->ID[0]="\0";
		this->age =0;
		this->mark= 0;
	}
	Student(char* name ,int age)
	{
		strcpy_s(this->name,99,name); // (copy this name tu thuoc tinh name , so luong 99 ky tu , vao bien name)
		this->address[0]="\0";
		this->ID[0]="\0";
		this->age = age;
		this->mark= 0;
	}
	Student(char* name ,int age, char *id,char *address, float mark)
	{
		strcpy_s(this->name,99,name); // (copy this name tu thuoc tinh name , so luong 99 ky tu , vao bien name)
		strcpy-s(this->address,99,address);
		strcpy_s(this->ID,19,id);
		this->age = age;
		this->mark= 0;
	}
	void showIdCard ()
	{
	
	}
	void study (char *subject)
	{
		
	}
	void doExample(char *subjectName)
	{
		
	}
};
int main()
{
	Student s1; // bien s1 kieu Student
	s1.mark =8.5;
	s1.age =20; // sai vi mac dinh la private 
	cout<< "Age : "<<s1.age<<endl;
	return 0;
	
}