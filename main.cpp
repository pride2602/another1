#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include "Timeofday.h"
#include "Client.cpp"
#include <ctime> // must include this header file to use time function
#include <string>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

cout << "\t\t\t<============================================= ����� ����������!  ==========================================>" << endl;
cout << "\t\t\t<============================================= � ����������� �������� ==========================================>" << endl;
cout << "\t\t\t<============================================= ���� ����� ������� ==========================================>" << endl;
cout << "\t\t\t<============================================= � �����, ����� ������ ��� ==========================================>" << endl << endl;

char password[20]; //��������� ������
char ch[100]; // �������� ������� �� ������������

do
{
    cout << "=======================" << endl;
    cout << "| ������� ���� ����� |" << endl;
    cout << "| ������� ���� ������ |" << endl;
    cout << "=======================" << endl << endl;
    string phrase = "| ������� ���� ����� |";
    string phrase = "������� ���� ������";
    string command = "espeak \"" + phrase + "\"";
    const char* charCommand = command.c_str();
    system(charCommand);

    cout << "=======================" << endl;
    cout << "| ������� ����� ����� |" << endl;
    cout << "| ������� ����� ������ |" << endl;
    cout << "=======================" << endl << endl;
    string phrase = "| ������� ����� ����� |";
    string phrase = "������� ����� ������";
    string command = "espeak \"" + phrase + "\"";
    const char* charCommand = command.c_str();
    system(charCommand);
    cout << "�����������! ����������� ������ �������! " << endl;


    gets(password);

    STARTUPINFO startInfo = { 0 };
    PROCESS_INFORMATION processInfo = { 0 };

    if (strcmp(password, "chauhan") == 0) {
        cout << "\n<==================================================================================================>\n\n";
        wishme();
        do {
            cout << "\n<==================================================================================================>\n\n";
            cout << endl << "��� � ���� ��� ������...." << endl << endl;

            string phrase = "��� � ���� ��� ������";
            string command = "espeak \"" + phrase + "\"";
            const char* charCommand = command.c_str();
            system(charCommand);

            cout << "��� ������ ===> ";
            gets(ch);
            cout << endl;
            cout << "����� ��������� ������ ������� ===> ";

            if (strcmp(ch, "������!") == 0 || strcmp(ch, "��!") == 0 || strcmp(ch, "�����������!") == 0) {
                cout << "�����������....." << endl;
                string phrase = "�����������";
                string command = "espeak \"" + phrase + "\"";
                const char* charCommand = command.c_str();
                system(charCommand);
            }

            else if (strcmp(ch, "����") == 0 || strcmp(ch, "����") == 0 || strcmp(ch, "�����") == 0) {
                cout << "����������, �������� ��� !!!!" << endl;
                string phrase = "����������, �������� ���";
                string command = "espeak \"" + phrase + "\"";
                const char* charCommand = command.c_str();
                system(charCommand);
                exit(0);
            }

            else if (strcmp(ch, "��� �� ?") == 0 || strcmp(ch, "�������� ��� � ����") == 0 || strcmp(ch, "�") == 0) {
                cout << "� ����������� �������� !!!" << endl;
                string phrase = "� ����������� ��������";
                string command = "espeak \"" + phrase + "\"";
                const char* charCommand = command.c_str();
                system(charCommand);
            }

            else if (strcmp(ch, "��� ���� ���� ?") == 0 || strcmp(ch, "��� �� ?") == 0 || strcmp(ch, "��� ������ ��� ���� ?") == 0) {
                cout << "� ������, ��� � ���� ��� ������.." << endl;
                string phrase = "I'm good sir, tell me how can i help you";
                string command = "espeak \"" + phrase + "\"";
                const char* charCommand = command.c_str();
                system(charCommand);
            }

            else if (strcmp(ch, "�����") == 0 || strcmp(ch, "����") == 0) {
                // make function to show date and time
                datetime();
            }
            else {
                cout << "��������, �� ���� ������ ��� ������, ����������, ���������� ����� !!!" << endl;
                string phrase = "��������, �� ���� ������ ��� ������, ����������, ���������� �����..";
                string command = "espeak \"" + phrase + "\"";
                const char* charCommand = command.c_str();
                system(charCommand);
            }


        } while (1);
    }
    else
    {
        system("cls");

        cout << "\t\t\t<============================= ����� ����������!=============================>" << endl;
        cout << "\t\t\t<============================= � ��� ����������� �������� =============================>" << endl;
        cout << "\t\t\t<============================= ���� ����� ������� =============================>" << endl;
        cout << "\t\t\t<============================= � ����� ��� ����, ����� ��� ������ =============================>" << endl
            << endl;

        cout << "======================" << endl;
        cout << "X ������������ ������ X" << endl;
        cout << "======================" << endl
            << endl;
        string phrase = "������������ ������, ����������, �������� ���������� ������";
        string command = "espeak \"" + phrase + "\"";
        const char* charCommand = command.c_str();
        system(charCommand);
    
    }
} while (1);


return 0;
}