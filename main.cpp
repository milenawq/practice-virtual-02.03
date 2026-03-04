#include <iostream>
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Hamster.h"
#include "Parrot.h"
#include "FileWorker.h"
#include "ASCIIFileWorker.h"
#include "BinaryFileWorker.h"
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

    /* Задание 2. Создайте иерархию классов по работе с файлами. Базовый класс умеет открывать файл и отображать его содержимое в консоль, первый класс потомка открывает файл и отображает содержимое в виде ASCII-кодов символов, расположенных в файле, второй класс потомка открывает файл и показывает его содержимое в двоичном виде и т.д. Для отображения содержимого файла в базовом классе определена виртуальная функция • void Display(const char * path); • path — путь к файлу. Потомки создают свою реализацию виртуальной функции */


    FileWorker* file;

    file = new FileWorker();
    file->Display("test.txt");
    delete file;

    file = new ASCIIFileWorker();
    file->Display("test.txt");
    delete file;

    file = new BinaryFileWorker();
    file->Display("test.txt");
    delete file;

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}