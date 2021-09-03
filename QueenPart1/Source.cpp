#include<stdio.h>
#include<iostream>
int main() {
	bool b[8][8] = {};
	int a;
	scanf_s("%d",&a);
	for (int i = 0; i < a; i++) {
		int c, d,e,f;
		scanf_s("%d %d",&e,&f);
		e--; f--;
		c = e;
		d = f;
		for (int j = 0; j < 8; j++) {
			b[c][j] = true;
			b[j][d] = true;
		}
		for (int j = 0; c + j < 8 && d + j < 8; j++) 
			b[c + j][d + j] = true;
		for (int j = 0; c - j >=0 && d - j >=0; j++) 
			b[c - j][d - j] = true;
		for (int j = 0; c - j >= 0 && d + j < 8; j++) 
			b[c - j][d + j] = true;
		for (int j = 0; c + j <8 && d - j >= 0; j++) 
			b[c + j][d - j] = true;
	}
	int ans = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (!b[i][j]) {
				ans++;
			}
		}
	}
	printf("%d", ans);
}