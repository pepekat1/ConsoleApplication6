#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(0, "RUS");
	float P, N, t, at, qp, qt, qf, Qp, Qt, Qf, nt, np, nf;
	cout << "Введите суточную выроботку цеха P:";
	cin >> P;
	cout << "Введите количество смен цеха N (1 или 2):";
	cin >> N;
	cout << "Введите продолжительность смены t:";
	cin >> t;
	cout << "Введите массовую долю теста at:";
	cin >> at;
	cout << "Введите производительность пельменного автомата qp:";
	cin >> qp;
	cout << "Введите производительность тестомесителя qt:";
	cin >> qt;
	cout << "Введите производительсноть Куттера qf:";
	cin >> qf;
	Qp = P / (N * t);
	np = Qp / qp;
	Qt = at * Qp;
	nt = Qt / qt;
	Qf = (1 - at) * Qp;
	nf = Qf / qf;
	cout << "Кол-во пельменных автоматов" << ceil(np);
	cout << "Кол-во тестомесителей" << ceil(nt);
	cout << "Кол-во куттеров" << ceil(nf);
}
return 0;