#include<iostream>
#include<vector>
#include<windows.h>

using namespace std;

int solution(vector<int> &vec)
{
	return 0;
}
void show(vector<int> vec)
{
	cout << endl;
	for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector<int> vec;
	bool a = true;
	int b = 0;
	cout << "\n������ ������ �����(������ 0 ��� ������� ��������):	";
	while (a == true)
	{
		cin >> b;
		if (b == 0 && vec.size() != 0)
		{
		a = false;
		}
		else if (b == 0 && vec.size() == 0)
		{
			cout << "������ �� ������ ����-� ���� ��������\n";
		}
		else if (b % 2 == 0 || b < 0)
		{
			cout << "��  ����� �� ��������\n";
		}
		else
		{
			vec.push_back(b);
		}
	}
	show(vec);
	for (size_t i = 0; i < vec.size(); i++)
	{
		for (size_t j = i + 1; j < vec.size(); j++)
		{
			if (vec[i] == 0)
			{
				break;
			}
			if (vec[i] == vec[j])
			{
				cout << "�������� � ��������� " << i << " i " << j << " ����� �������� " << vec[i] << endl;
				vec[i] = 0;
				vec[j] = 0;
			}
		}
	}
	for (size_t i = 0; i < vec.size(); i++)
	{
		if (vec[i] != 0)
		cout << "������� � �������� " << i << " �� �������� " << vec[i] << " � �� � ������" << endl;
	}
	
}