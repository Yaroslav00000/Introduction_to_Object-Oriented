#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    string last_name;
    string name;
    string father_name;
    string city;
    string country;
    string name_of_school;
    string city_of_school;
    string country_of_school;
    int number_group;
    int birth_date;
    int telephone_number;

public:
    void setLastName(string ln) { last_name = ln; }
    void setName(string n) { name = n; }
    void setFatherName(string fn) { father_name = fn; }
    void setCity(string c) { city = c; }
    void setCountry(string c) { country = c; }
    void setNameOfSchool(string nos) { name_of_school = nos; }
    void setCityOfSchool(string cos) { city_of_school = cos; }
    void setCountryOfSchool(string cos) { country_of_school = cos; }
    void setNumberGroup(int ng) { number_group = ng; }
    void setBirthDate(int bd) { birth_date = bd; }
    void setTelephoneNumber(int tn) { telephone_number = tn; }

    string getLastName() { return last_name; }
    string getName() { return name; }
    string getFatherName() { return father_name; }
    string getCity() { return city; }
    string getCountry() { return country; }
    string getNameOfSchool() { return name_of_school; }
    string getCityOfSchool() { return city_of_school; }
    string getCountryOfSchool() { return country_of_school; }
    int getNumberGroup() { return number_group; }
    int getBirthDate() { return birth_date; }
    int getTelephoneNumber() { return telephone_number; }

    void display() {
        cout << "Last name: " << last_name << endl;
        cout << "Name: " << name << endl;
        cout << "Father name: " << father_name << endl;
        cout << "City: " << city << endl;
        cout << "Country: " << country << endl;
        cout << "Name of school: " << name_of_school << endl;
        cout << "City of school: " << city_of_school << endl;
        cout << "Country of school: " << country_of_school << endl;
        cout << "Number group: " << number_group << endl;
        cout << "Birth date: " << birth_date << endl;
        cout << "Telephone number: " << telephone_number << endl;
    }

	
};

int main()
{
	student student1;
	student1.setLastName("Melnik");
	student1.setName("Ivan");
	student1.setFatherName("Volodimirovich");
	student1.setCity("Kiev");
	student1.setCountry("Ukraine");
	student1.setNameOfSchool("KPI");
	student1.setCityOfSchool("Kiev");
	student1.setCountryOfSchool("Ukraine");
	student1.setNumberGroup(59);
	student1.setBirthDate(2000);
	student1.setTelephoneNumber(123456789);
	student1.display();
	return 0;
}