#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    srand(time(NULL));
    int r = 1 + rand() % 15;
    int user;

    cout << "Хело, это казино семка-казинатор#666. Введите число от 1 до 15 и выиграйте приз" << endl;

    while (true) {
        cout << "Введите число: ";
        cin >> user;
        if (user < 1) {
            cout << "Ошибка, число меньшше 1" << endl;
            cout << "Введите число: ";
            cin >> user;
        }
        else if (user > 15) {
            cout << "Ошибка, число больше 15" << endl;
            cout << "Введите число: ";
            cin >> user;
        }
        else if (user == r) {
            cout << "Ты победил";
            break;
        }
        else {
            cout << "Ты лузер" << endl;
            cout << "Попробуй еще раз: " << endl;
        }
    }
    return 0;
}
