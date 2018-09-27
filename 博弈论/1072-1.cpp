#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	int t,n,m,temp;
	scanf("%d", &t);
	while(t--) {
		scanf("%d%d", &n, &m);
		if(n>m) swap(n,m);
		temp = (m - n) * (sqrt(5) + 1) / 2;
		printf("%c\n", (temp == n) ? 'B' : 'A');
	}
	return 0;
}
