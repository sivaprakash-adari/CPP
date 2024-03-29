#include <iostream>

using namespace std;


class Animal {
    private:
        string name;

    public:
        Animal() { cout << "Animal created" << endl; };
        Animal(const Animal& obj): name(obj.name) { cout << "Animal created by copying" << endl; }; 
        void setName(string aname) { name = aname;}
        void const speak() { cout << "My name is " << name << endl; }

};

int main()
{
    Animal a1;
    a1.setName("Cow");
    //a1.speak();

    Animal a2 = a1;
    a2.speak();
    a2.setName("Buffalo");
    a2.speak();

    return 0;
}

/*

class Animal {
private:
	string name;

public:
	Animal() { cout << "Animal created." << endl; };
	Animal(const Animal& other): name(other.name) { cout << "Animal created by copying." << endl; };
	void setName(string name) { this->name = name; };
	void speak() const { cout << "My name is: " << name << endl; }
};

int main() {

	Animal animal1;

	animal1.setName("Freddy");

	Animal animal2 = animal1;
	animal2.speak();
	animal2.setName("Bob");

	animal1.speak();
	animal2.speak();

	Animal animal3(animal1);
	animal3.speak();
    return 0;
}

*/