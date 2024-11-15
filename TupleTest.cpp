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
        // 주석처리한 tuple vector 입력의 경우 VectorTuple의 사이즈를
        // 처음에 정해주지 않은 상태에서 for문을 이용할 때 좋다.
        //
    }

    for (auto str : VectorTuple)
    {
        cout << get<0>(str) << " " << get<1>(str) << " " << get<2>(str) << "\n";
    }
}