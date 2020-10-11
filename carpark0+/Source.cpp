#include<iostream>
using namespace std;

int total;

int parkcost(int, int);

int main() {
	int s, h, m, time;
	cin >> s >> h >> m;
	time = (h * 60) + m;

	if (s < 0 || h < 0 || m < 0) 
	{
		cout << "It can't be negative";
	}
	else
	{
		parkcost(s, time);
		cout << total;
	}
}

int parkcost(int shop, int time) {
	if (shop >= 1000) {
		time = time - 240;
		if (time % 60 > 0) {
			total = ((time / 60) * 30) + 30;
			return total;
		}
		else if (time % 60 == 0) {
			total = ((time / 60) * 30);
			return total;
		}
	}
	else if (shop < 1000) {
		time = time - 60;
		if (time % 60 > 0) {
			total = ((time / 60) * 30) + 30;
			return total;
		}
		else if (time % 60 == 0) {
			total = ((time / 60) * 30);
			return total;
		}
	}
}
