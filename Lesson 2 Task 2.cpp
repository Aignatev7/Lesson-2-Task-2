#include <iostream>
#include <string>
#include <windows.h>						   //���������� windows.h ��������� ����������������� � �� � �������� ������������ ��������� �������

struct accounts
{
	int account_number = 0;
	std::string owner_name;
	int balance = 0;
	int new_balance = 0;
	int account = 0;
};

void out_account(int account_number, std::string owner_name, int balance, int new_balance)
{
	std::cout << "��� ����: " << owner_name << ", " << account_number << ", " << new_balance;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);							//������������� ��������� ����� �� ������� � �� ��������� ����
	SetConsoleOutputCP(1251);					//������������� ��������� ������ �� �������

	accounts acc;
	std::cout << "������� ����� �����: ";
	std::cin >> acc.account_number;
	std::cout << "������� ��� ���������: ";
	std::cin >> acc.owner_name;
	std::cout << "������� ������: ";
	std::cin >> acc.balance;
	std::cout << "������� ����� ������: ";
	std::cin >> acc.new_balance;
	out_account(acc.account_number, acc.owner_name, acc.balance, acc.new_balance);
}

/*
������ 2. �����
��������
�������� ��������� ��� �������� ���������� � ���������� �����.��� ������ ������� ����� �����(����� �����), ��� ���������(������) � ���������� ����� �� �����(������� �����).

�������� ������� ��� ��������� ������� �����.������� ������ ��������� ��������� ��������� ����������� ����� � ����� �����.

��������� ������������ ��������� ���� ���������� ���������, �������� ����� ������ ����� � �������� ���������� ��������� ��������� �� �������.

������ ������ ���������
������� ����� ����� : 123456789
������� ��� ��������� : ������
������� ������ : 5000
������� ����� ������ : 6000
��� ���� : ������, 123456789, 6000
*/