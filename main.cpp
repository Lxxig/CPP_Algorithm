#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str = "love is";
	str += " pain!";

	cout << str << "�� ������: " << str.size() << "\n";
	cout << "first Alphabet: " << *str.begin() << "\n";
	cout << "second Alphabet: " << *(str.begin() + 1) << "\n";
	cout << "third Alphabet: " << str[2] << "\n";
	cout << "last Letter: " << *(str.end() - 1) << "\n";

	str.insert(0, "test ");
	cout << str << "\n";

	str.erase(0, 5);
	cout << str << "\n";

	auto it = str.find("love");
	if (it != string::npos)
	{
		cout << "�����ϰ� ����" << "\n";
	}

	cout << str.substr(0, 4);
}