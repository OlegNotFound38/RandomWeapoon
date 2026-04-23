#include <iostream>
#include <random>

using namespace std;

int main(){
    cout << "Привет! Это рандомайзер для оружек в кс. Работает так:\n В игре нажимаешь \"B\" (закупиться), а дальше по очереди цифры, которые выдаст рандомайзер. "<<endl;
    cout << "Для начала работы введи в терминал, все что угодно,\nЧтобы остановить программу напиши \"Stop\"" << endl;
    cout << "Удачи!" << endl;

    // std::random_device rd;
    // std::mt19937 gen(rd());
    // std::uniform_int_distribution<> dist(1, 10);

    return 0;
}