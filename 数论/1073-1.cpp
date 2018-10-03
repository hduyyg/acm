#include<cstdio>
using namespace std;

int josephus(int n, int m) {
	int x = 0;
	for(int i = 2; i <= n; i++) {
		x = (x + m) % i;
	}
	return x;
}

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	int res = josephus(n, m) + 1;
	printf("%d\n", res);
	return 0;
}
