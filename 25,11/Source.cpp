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
        cout << "Имя: " << name << endl;
    }
    virtual void Type() = 0;
};


class Dog : public Pet 
{
public:
    Dog(string n) : Pet(n) {}
    void Sound() override 
    {
        cout << name << " говорит: Гав-гав!" << endl;
    }
    void Type() override 
    {
        cout << "Тип: Собака" << endl;
    }
};


class Cat : public Pet 
{
public:
    Cat(string n) : Pet(n) {}
    void Sound() override 
    {
        cout << name << " говорит: Мяу!" << endl;
    }
    void Type() override 
    {
        cout << "Тип: Кошка" << endl;
    }
};


class Parrot : public Pet 
{
public:
    Parrot(string n) : Pet(n) {}
    void Sound() override 
    {
        cout << name << " говорит: Чирик-чирик!" << endl;
    }
    void Type() override 
    {
        cout << "Тип: Попугай" << endl;
    }
};


class Hamster : public Pet 
{
public:
    Hamster(string n) : Pet(n) {}
    void Sound() override 
    {
        cout << name << " говорит: Пи-пи!" << endl;
    }
    void Type() override 
    {
        cout << "Тип: Хомяк" << endl;
    }
};

int main() {

    Pet* pets[] = 
    {
        new Dog("Шарик"),
        new Cat("Мурка"),
        new Parrot("Кеша"),
        new Hamster("Хомка")
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
