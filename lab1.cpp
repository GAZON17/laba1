#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y)
{
    static HANDLE h = NULL;
    if (!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };
    SetConsoleCursorPosition(h, c);
}
const int x = 40;
const int y = 16;
int mas[y][x] = { { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
                { 2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2 },
                { 2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2 },
                { 2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2 },
                { 2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2 },
                { 2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2 },
                { 2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2 },
                { 2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2 },
                { 2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2 },
                { 2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2 },
                { 2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2 },
                { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
                { 2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2 },
                { 2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2 },
                { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
};
int flag = 1;

float shirshkaf, visshkaf, dlshkaf, shirdver, visdver;
string result;

void Error(int z);

void Interface3_1()
{
    system("cls");
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (mas[i][j] == 1)
                cout << "-";
            else if (mas[i][j] == 0)
                cout << " ";
            else if (mas[i][j] == 2)
                cout << "|";
        }
        cout << endl;
    }
    gotoxy(15, 4);
    cout << "Программа";
    gotoxy(17, 5);
    cout << "'ШКАФ'";
    gotoxy(12, 6);
    cout << "Беспалов Даниил";
    gotoxy(16, 7);
    cout << "Гр. 1092";
    gotoxy(7, 13);
    cout << "Esc – выход, ENTER - далее";
}
void Interface3_2()
{
    flag = 2;
    system("cls");
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (mas[i][j] == 1)
                cout << "-";
            else if (mas[i][j] == 0)
                cout << " ";
            else if (mas[i][j] == 2)
                cout << "|";
        }
        cout << endl;
    }
    gotoxy(16, 2);
    cout << "ВВЕДИТЕ";
    gotoxy(7, 3);
    cout << "Параметры шкафа [0.2-10]";
    gotoxy(15, 4);
    cout << "Ширина: ";
    gotoxy(15, 5);
    cout << "Высота: ";
    gotoxy(16, 6);
    cout << "Длина: ";
    gotoxy(3, 7);
    cout << "Параметры дверного проёма [0.2-10]";
    gotoxy(15, 8);
    cout << "Ширина: ";
    gotoxy(15, 9);
    cout << "Высота: ";
    gotoxy(14, 13);
    cout << "ENTER - далее";
}
void Interface3_4()
{
    flag = 4;
    system("cls");
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (mas[i][j] == 1)
                cout << "-";
            else if (mas[i][j] == 0)
                cout << " ";
            else if (mas[i][j] == 2)
                cout << "|";
        }
        cout << endl;
    };
    gotoxy(16, 2);
    cout << "ВВЕДЕНЫ";
    gotoxy(12, 3);
    cout << "Параметры шкафа";
    gotoxy(15, 4);
    cout << "Ширина: ";
    gotoxy(15, 5);
    cout << "Высота: ";
    gotoxy(16, 6);
    cout << "Длина: ";
    gotoxy(8, 7);
    cout << "Параметры дверного проёма";
    gotoxy(15, 8);
    cout << "Ширина: ";
    gotoxy(15, 9);
    cout << "Высота: ";
    gotoxy(3, 13);
    cout << "ESC - повтор ввода, ENTER - далее";
}
void Interface3_5()
{
    flag = 5;
    system("cls");
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (mas[i][j] == 1)
                cout << "-";
            else if (mas[i][j] == 0)
                cout << " ";
            else if (mas[i][j] == 2)
                cout << "|";
        }
        cout << endl;
    }
    gotoxy(15, 5);
    cout << "Программа";
    gotoxy(16, 6);
    cout << "'ШКАФ'";
    gotoxy(10, 7);
    cout << "Завершила свою работу";
    gotoxy(10, 13);
    cout << "Нажмите любую клавишу";
    gotoxy(1, 15);
}
void Input(float* a, int y)
{
    int fl = 0;
    do
    {
        gotoxy(23, y);
        cin >> *a;
        if ((*a >= 0.2) && (*a <= 10))
        {
            fl = 1;
            gotoxy(8, 12);
            cout << "                          ";
        }
        else
        {
            Error(y);
            cin.clear();
            cin.ignore(32767, '\n');
        }
    } while (fl == 0);
}
void Error(int z)
{
    gotoxy(10, 12);
    cout << "Ошибка ввода данных!";
    gotoxy(23, z);
    cout << "                ";
}
void Output()
{
    gotoxy(23, 4);
    cout << shirshkaf;
    gotoxy(23, 5);
    cout << visshkaf;
    gotoxy(23, 6);
    cout << dlshkaf;
    gotoxy(23, 8);
    cout << shirdver;
    gotoxy(23, 9);
    cout << visdver;
}
void Result()
{
    if (((shirshkaf < shirdver) && (visshkaf < visdver)) || ((visshkaf < visdver) && (dlshkaf < shirdver)) || ((shirshkaf < shirdver) && (dlshkaf < visdver)) || ((shirshkaf < visdver) && (visshkaf < shirdver)) || ((visshkaf < shirdver) && (dlshkaf < visdver)) || ((shirshkaf < visdver) && (dlshkaf < shirdver)))
    {
        result = "Шкаф пройдет в дверной проём";
        gotoxy(6, 10);
        cout << result;
    }
    else
    {
        result = "Шкаф не пройдет в дверной проём";
        gotoxy(5, 10);
        cout << result;
    }
}

int main()
{
    char keys;
    setlocale(LC_ALL, "ru");
    do
    {
        if (flag == 1)
        {
            Interface3_1();
            do
            {
                keys = _getch();
                {
                    if (keys == 13)
                    {
                        Interface3_2();
                    }
                    if (keys == 27)
                    {
                        Interface3_5();
                    }
                }
            } while (flag == 1);
        }
        if (flag == 2)
        {
            Input(&shirshkaf, 4);
            Input(&visshkaf, 5);
            Input(&dlshkaf, 6);
            Input(&shirdver, 8);
            Input(&visdver, 9);
            gotoxy(27, 13);
            do
            {
                keys = _getch();
                    if (keys == 13)
                    {
                        Interface3_4();
                    }
            } while (flag == 2);
        }
        if (flag == 4)
        {
            Output();
            Result();
            do
            {
                keys = _getch();
                if (keys == 13)
                {
                    Interface3_5();
                }
                if (keys == 27)
                {
                    Interface3_2();
                }
            } while (flag == 4);
        }
    } while (flag != 5);
}