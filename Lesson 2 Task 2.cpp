#include <iostream>
#include <string>
#include <windows.h>						   //���������� windows.h ��������� ����������������� � �� � �������� ������������ ��������� �������

struct accounts
{
	int account_number = 0;
	std::string owner_name;
	int balance = 0;
	int account = 0;
};

void increment_balance(accounts* bal, int new_bal)
{
	bal->balance = new_bal;
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
	int new_balance = 0;
	std::cin >> new_balance;
	increment_balance(&acc, new_balance);
	std::cout << "��� ����: " << acc.owner_name << ", " << acc.account_number << ", " << acc.balance;
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