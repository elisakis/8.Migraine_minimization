#include <iostream>

#include <cmath>

using namespace std;

int migrain_minimization(int N)
{
    int l, S, sum = 0;

    while (N!=0)
    {
        l = sqrt(N); //������������ ����� ������� ����������� ������� �� ����� N
        S = l*l;    //������� ������� � ������� ���������
        N = N-S;    //������� �����
        sum = sum+1; //���������� �������
    }

    return (sum * 4);   //�� 4 ���� �� �����
}

int main()
{
    int N;
    cin >> N;
    cout << migrain_minimization(N);
    return 0;
}
