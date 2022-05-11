#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string>
typedef struct birthday
{

    int day, month, year;
} Birthday;

class Student
{

private:
    int sID;
    string fname;
    string lname;
    Birthday birthday;
    string studiengang;

public:
    Student() { this->sID = 0; }
    Student(int, string, string, int, int, int, string);
    void display();
    // void setFname(string);
    // void setLname(string);
    // void setStuengang(string);
    // void display();
    // void setFname(string);
    // void setLname(string);
    // void setStuengang(string);
    string kurzName();
};
string Student::kurzName()
{
    char *s = (char *)malloc((this->lname.size() + 4) * sizeof(char));
    int j = 0;
    for (int i = 0; i < (this->lname.size() + 4); i++)
    {
        if (i == 0)
        {
            s[i] = this->fname[0];
        }
        else if (i == 1)
        {
            s[i] = '.';
        }
        else if (i == 2)
        {
            s[i] = ' ';
        }
        else
        {
            s[i] = this->lname[j++];
        }
    }
    return s;
}
Student::Student(int id, string fname, string lname, int day, int month, int year, string stugang)
{

    this->fname = fname;
    this->lname = lname;
    this->birthday.day = day;
    this->birthday.month = month;
    this->birthday.year = year;
    this->sID = id;
    this->studiengang = stugang;
}
void Student::display()
{
    cout << "fname = " << this->fname << " lname = " << this->lname << endl;
}
int main()
{

    // Student s1(1, "Ulrich", "Schrader", 29, 7, 1995, "Informatik");
    // s1.display();
    // cout << s1.kurzName();
    char s[3];
    s[0] = '3';
    s[1] = '4';
    cout << s << endl;
    return 0;
}