#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <exception>
#include "Client.h"

using namespace std;

int p = 2;

int main()
{
    setlocale(LC_ALL, "Russian");
    setlocale(0, "");
    bool cont = false;
    char database[10][20] = { "user_1", "123", "user_2", "1234", "user_3", "12345" };
    char login[20], password[20];
    while (p > 0) {
        p--;
        system("cls");
        cout << "������� �����: ";
        cin >> login;
        cout << "\n������� ������: ";
        cin >> password;
        for (int i = 0; database[i][0]; i += 2) {
            if (!strcmp(login, database[i])) {
                if (!strcmp(password, database[i + 1]))
                    cont = true;
            }
        }
        try
            p <= !cont
        {
        std:cout << "����� ��� ������ �������.\n���������� �������: " << p;
        }
        else break;
        system("pause>>void");
    }
    if (cont) {
        system("cls");
        cout << "���� �������� �������.";
    }
    else cout << "\n�� ��������� ����� �������!";
    system("pause>>void");
};
