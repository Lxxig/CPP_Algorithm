#include <bits/stdc++.h>
using namespace std;
vector<string> split(const string& str, const string delimiter)
{
	vector<string> fruits;
	auto endIndex = str.find(delimiter);
	string::size_type startIndex = 0;

	while (endIndex != string::npos)
	{
		fruits.push_back(str.substr(startIndex, endIndex - startIndex));
		startIndex = endIndex + 1;
		endIndex = str.find(delimiter, startIndex);
	}
	fruits.push_back(str.substr(startIndex, endIndex - startIndex));
	return fruits;
}

int main()
{
	string str = "apple,banana,orange,grape";
	vector<string> fruits =  split(str, ",");

	for (const string& fruit : fruits)
	{
		cout << fruit << "\n";
	}
}