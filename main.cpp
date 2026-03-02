#include <iostream>
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Hamster.h"
#include "Parrot.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    auto lang = "C++";

    /* Задание 2
    Создать базовый класс «Домашнее животное» и производные классы «Собака», «Кошка», «Попугай», «Хомяк». С помощью конструктора установить имя каждого животного и его характеристики.
    Реализуйте для каждого из классов функции:
    Sound — издает звук животного (пишем текстом в консоль).
    Show — отображает имя животного.
    Type — отображает название его подвида. */

    int size = 4;
    Pet* pets[size];
    pets[0] = new Dog("Persik");
    pets[1] = new Cat("Myrka");
    pets[2] = new Parrot("Kesha");
    pets[3] = new Hamster("Ric");

    for (int i = 0; i < size; i++) {
        pets[i]->Show();
        pets[i]->Type();
        pets[i]->Sound();
        cout << endl;
    }

    for (int i = 0; i < size; i++) {
        delete pets[i];
    }




    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}