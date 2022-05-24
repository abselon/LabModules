#include <iostream>
#include<string>

using namespace std;

struct address
{    
	int house_num;
	string street_num;
};
struct student
{    
	int rollno;
	string name;
	address *adr;
};

int main()
{
	student essa;
	student *essaptr;
	essaptr = &essa;
	essaptr->name = "essa";
	essaptr->rollno = 2021332;
	address adr = {48,"hostel-11"};
	essaptr->adr = &adr;
	cout << "Name: " << essaptr->name << endl;
	cout << "Reg Num: " << essaptr->rollno << endl;
	cout << "House: " << essaptr->adr->house_num << endl;
	cout << "Street: " << essaptr->adr->street_num << endl;
	return 0;}