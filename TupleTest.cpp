#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<tuple<string, string, int>> VectorTuple(N);

    cout << "| LastName | FirstName | Age " << "\n";

    string firstName, LastName;
    int age;

    for (int i = 0; i < VectorTuple.capacity(); ++i)
    {
        cin >> LastName >> firstName >> age;

        VectorTuple[i] = make_tuple(LastName, firstName, age);
        // VectorTuple.push_back(make_tuple( LastName, firstName, age ));
        // �ּ�ó���� tuple vector �Է��� ��� VectorTuple�� �����
        // ó���� �������� ���� ���¿��� for���� �̿��� �� ����.
        //
    }

    for (auto str : VectorTuple)
    {
        cout << get<0>(str) << " " << get<1>(str) << " " << get<2>(str) << "\n";
    }
}