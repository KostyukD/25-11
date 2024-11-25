#include <iostream>
#include <string>

using namespace std;


class Pet 
{
protected:
    string name;

public:
    Pet(string n) : name(n) {}
    virtual void Sound() = 0;
    virtual void Show() 
    {
        cout << "���: " << name << endl;
    }
    virtual void Type() = 0;
};


class Dog : public Pet 
{
public:
    Dog(string n) : Pet(n) {}
    void Sound() override 
    {
        cout << name << " �������: ���-���!" << endl;
    }
    void Type() override 
    {
        cout << "���: ������" << endl;
    }
};


class Cat : public Pet 
{
public:
    Cat(string n) : Pet(n) {}
    void Sound() override 
    {
        cout << name << " �������: ���!" << endl;
    }
    void Type() override 
    {
        cout << "���: �����" << endl;
    }
};


class Parrot : public Pet 
{
public:
    Parrot(string n) : Pet(n) {}
    void Sound() override 
    {
        cout << name << " �������: �����-�����!" << endl;
    }
    void Type() override 
    {
        cout << "���: �������" << endl;
    }
};


class Hamster : public Pet 
{
public:
    Hamster(string n) : Pet(n) {}
    void Sound() override 
    {
        cout << name << " �������: ��-��!" << endl;
    }
    void Type() override 
    {
        cout << "���: �����" << endl;
    }
};

int main() {

    Pet* pets[] = 
    {
        new Dog("�����"),
        new Cat("�����"),
        new Parrot("����"),
        new Hamster("�����")
    };


    for (int i = 0; i < 4; i++)
    {
        pets[i]->Show();
        pets[i]->Sound();
        pets[i]->Type();
        cout << endl;
    }


    for (int i = 0; i < 4; i++)
    {
        delete pets[i];
    }
}
