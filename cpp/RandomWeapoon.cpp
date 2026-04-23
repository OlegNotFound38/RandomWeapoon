#include <iostream>
#include <random>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    cout << "Привет! Это рандомайзер для оружек в кс. Работает так:\nВ игре нажимаешь \"B\" (закупиться), а дальше по очереди цифры, которые выдаст рандомайзер. "<<endl;
    cout << "Для начала работы введи в терминал ченибудь,\nЧтобы остановить программу напиши \"Stop\"" << endl;
    cout << "Удачи!" << endl;

    
    string StopCheaker;
    cin >> StopCheaker;

    while (!(StopCheaker == "Stop" || StopCheaker == "stop")){
        system("cls");
        mt19937 gen(random_device{}());
        uniform_int_distribution<> WPcolumn(2, 4);
        uniform_int_distribution<> WPstring(1, 5);

        cout << WPcolumn(gen) << endl << WPstring(gen) << endl;

        cin >> StopCheaker;

    }

    cout << "Удачи!" << endl;

    return 0;
}