#include <iostream>

#include <cmath>

using namespace std;

int migrain_minimization(int N)
{
    int l, S, sum = 0;

    while (N!=0)
    {
        l = sqrt(N); //максимальная длина стороны квадратного участка за сумму N
        S = l*l;    //площадь участка с равными сторонами
        N = N-S;    //остаток денег
        sum = sum+1; //количество отчетов
    }

    return (sum * 4);   //по 4 часа за отчет
}

int main()
{
    int N;
    cin >> N;
    cout << migrain_minimization(N);
    return 0;
}
