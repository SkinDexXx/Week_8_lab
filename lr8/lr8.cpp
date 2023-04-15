#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Task 1.";
    int height, width;
   char symbol;

   cout << "Введіть сторону А: ";
   cin >> height;

   cout << "Введіть сторону B: ";
   cin >> width;

   cout << "Введіть символ який виведе прямокутник: ";
   cin >> symbol;

   for (int i = 0; i < height; i++) {
       for (int j = 0; j < width; j++) {
           cout << symbol;
       }
       cout << endl;
   }
    cout << "\n";
    cout << "Task 2.";
    int w, h, kol;
    char q;
    cout << "Введіть сторону А: ";
    cin >> w;

    cout << "Введіть сторону B: ";
    cin >> h;

    cout << "Введіть символ який виведе прямокутник: ";
    cin >> q;

    cout << "Введіть колір символа:\n";
    cout << "1.Red\n"
        << "2.Green\n"
        << "3.yellow\n"
        << "4.blue\n"
        << "5.magenta\n";
    cout << "Колір -> ";
    cin >> kol;
    switch (kol)
    {
    case 1:
        cout << "\x1b[31m";
        break;
    case 2:
        cout << "\x1b[32m";
        break;
    case 3:
        cout << "\x1b[33m";
        break;
    case 4:
        cout << "\x1b[34m";
        break;
    case 5:
        cout << "\x1b[35m";
        break;
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (i == 0 || i == h - 1 || j == 0 || j == w - 1) {
                cout << q;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "\x1b[37m";
    cout << "\n";
    cout << "Task 3.";
    int money, sum = 0;
    int mouth[6];
    cout << "Введіть прибуток фірми за 6 місяців\n";
    for (int i = 0; i < 6; i++)
    {
      cout << i + 1 << ".Введіть прибуток фірми -> ";
      cin >> mouth[i];
    }
    cout << "\n\n";
    for (int i = 0; i < 6; i++)
    {
            sum += mouth[i];
    }
    cout << "Прибудок за 6 місяців: " << sum << "\n";
    cout << "\n";
    cout << "Task 4.\n";
    const int size = 5;
    int arr[size] = { 1, 2, 3, 4, 5 }; 
    int temp;

    cout << "масив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    cout << "\nМасив у зворотному порядку: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
	return 0;
}