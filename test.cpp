#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<tuple<string, string, int>> VectorTuple(N);

    cout << "| 성 | 이름 | 나이 " << "\n";

    string firstName, LastName;
    int age;

    for (int i = 0; i < N; ++i)
    {
        /*cin >> get<0>(VectorTuple[i]);
        cin >> get<1>(VectorTuple[i]);
        cin >> get<2>(VectorTuple[i]);*/
        cin >> LastName >> firstName >> age;
        VectorTuple[i] = make_tuple(LastName, firstName, age);
    }

    for (auto str : VectorTuple)
    {
        cout << get<1>(str);
        cout << get<0>(str);
        cout << get<2>(str) << "\n";
    }
}