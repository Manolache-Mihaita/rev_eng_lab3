// rev_eng_lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
/*
bool f1(int z) {
	int y;
	int x;
	y = z - 1;
	x = 2;
	for (x = 2;;) {
		if (x == y)return 1;
		if (y%x == 0)return 0;
	}
	return 1;
}

int main(int argc, int argv[])
{
	int x = 0;
	int y = 2;
	for (y = 2; y < 1000; y++) {
		if (!f1(y))continue;
		else x += y;
	}
    return 0;
}
*/


int main() {
	char t[32];
	int s = 1;
	for (int i = 0; i < 100; i++)s += i;
	t[31] = '0';
	int j = 30;
	while (s)
	{
		t[j] = s % 10 + '10';
		j--;
		s /= 10;
	}
	messagebox(0, &t[j + 1], 0);
}



