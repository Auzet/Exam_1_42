#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//      ������� �. 1/42
//      �������� �����, ���������� �����, ����������� ���� �������, �������, ������. ������� �������� ������������� �������� �������� 
//		������ � 1, ������� � 2 ������ � 3, ������� � ���������� � ����� � ���� ��������� (���� �������� �� ������� ������, ������ �� �������). 
//	    �������� ������ ������������� �������������� ������."

class Rock_Paper_Scissors {
public:
	Rock_Paper_Scissors() {
		name_1 = "";
		name_2 = "";
		move_1 = 0;
		move_2 = 0;
		end = false;
	}	
	int move_1, move_2;

	void set_names(string name_1, string name_2) {
		this->name_1 = name_1;
		this->name_2 = name_2;
	}

	bool get_end() {
		return end;
	}

	void game() {
		system("cls");
		switch (move_1)
			{
			case 1:
				switch (move_2) {
				case 1: cout << "������ � ������\n�����, �����������.\n"; break;
				case 2: cout << "������ � �������\n������� ����� " << name_1; end = true; break;
				case 3: cout << "������ � ������\n������� ����� " << name_2; end = true; break;
				default: cout << "�������� ��� ������ " << name_2 << ". �����������.\n"; break;
				}
				break;
			case 2:
				switch (move_2) {
				case 1: cout << "������� � ������\n������� ����� " << name_2; end = true; break;
				case 2: cout << "������� � �������\n�����, �����������.\n"; break;
				case 3: cout << "������� � ������\n������� ����� " << name_1; end = true; break;
				default: cout << "�������� ��� ������ " << name_2 << ". �����������.\n"; break;
				}
				break;
			case 3:
				switch (move_2) {
				case 1: cout << "������ � ������\n������� ����� " << name_1; end = true; break;
				case 2: cout << "������ � �������\n������� ����� " << name_2; end = true; break;
				case 3: cout << "������ � ������\n�����, �����������.\n"; break;
				default: cout << "�������� ��� ������ " << name_2 << ". �����������.\n"; break;
				}
				break;
			default:
				cout << "�������� ��� ������ " << name_1 << ". �����������.\n";
				break;
		}
	}
private:
	string name_1;
	string name_2;
	bool end;
};

int main() {
	setlocale(LC_ALL, "Russian");
	string name1, name2;

	Rock_Paper_Scissors game;
	cout << "��� ������� ������:  "; cin >> name1;
	cout << "\n��� ������� ������:  "; cin >> name2;
	game.set_names(name1, name2);
	system("cls");

	while (game.get_end() == false) {
		cout << "����: 1 - ������, 2 - �������, 3 - ������\n";
		cout << "����� " << name1 << ", ��������: "; cin >> game.move_1;
		cout << "����� " << name2 << ", ��������: "; cin >> game.move_2;
		game.game();
	}
	return 0;
}

