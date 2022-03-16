#include <iostream>
#include <cstring>

using namespace std;

struct Person {
    char* name;
    int age;
    double weight;

    Person() {
        name = new char[1];
        strcpy(name, "");
        age = 0;
        weight = 0;
    }

    Person(char* newName, int newAge, double newWeight) {
        name = new char[strlen(newName) + 1];
        strcpy(name, newName);
        age = newAge;
        weight = newWeight;
    }
};

void print(Person& person) {
    cout << person.name << " -> " << person.age << " -> " << person.weight << endl;
}

int main ()
{
    Person defaultPerson;
    print(defaultPerson);

    Person person("Ivan", 10, 30);
    print(person);
}