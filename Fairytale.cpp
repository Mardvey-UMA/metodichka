
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string a, b, treasure, weapon, place;
	cout << "������� ��� �����:" << "\n";
	cin >> a;
	cout << "������� ��� ������" << "\n";
	cin >> b;
	cout << "�����:" << "\n";
	cin >> place;
	cout << "���������:" << "\n";
	cin >> treasure;
	cout << "������:" << "\n";
	cin >> weapon;
	cout << "���-�� ��� " << a << " �����(�) ����������� �� ������ " << treasure << " � " << place << "." << "\n" << "���������� ���, ��(�) ��������(�) �������� �������� ��� ��������� " << b << ", ������� �������� ����������� ���������." << "\n" << "������� �����, " << a << " ������(�) ���� ��������� " << weapon << " � ������(�) ������ �����." << "\n" << "����� ����� ��(�) ������� ���������(�) " << treasure << " � ���(�) ����� � ���������!" << "\n";

}