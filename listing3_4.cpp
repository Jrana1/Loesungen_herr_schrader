#include <iostream>
using namespace std;
#include <string>
enum dog_perpose
{
    cuddle,
    therapuetic,
    hunting,
    protection,
    searching
};

class Dog
{

private:
    string name;
    int age;
    int perpose;

public:
    Dog();
    Dog(string, int, int);
    int getAge();
    string getName();
    void setName(string);
    void setAge(int);
    void setPerpose(int);
    void display();
};

Dog::Dog()
{
    this->name = "noname";
    this->age = 0;
    this->perpose = 6;
}
Dog::Dog(string name, int age, int perpose)
{
    this->name = name;
    this->age = age;
    this->perpose = perpose;
}
void Dog::display()
{
    cout << "Name = " << this->name << " age is " << this->age << " perpose is " << this->perpose << endl;
}
int Dog::getAge() { return this->age; }
string Dog::getName() { return this->name; }
void Dog::setName(string name) { this->name = name; }
void Dog::setAge(int age) { this->age = age; }
void Dog::setPerpose(int perpose) { this->perpose = perpose; }
int main()
{

    Dog d1("Bla", 23, 1);

    d1.display();

    return 0;
}