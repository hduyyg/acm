#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

const int maxn = 500;
const int base = 1e8;
char s[maxn + 10];
int a[maxn / 8 + 10], b[maxn / 8 + 10];

void read(int a[]) {
	scanf("%s", s);
	int len = strlen(s);
	for(int i = len - 1; i >= 0; i -= 8) {
		int tmp = 0;
		for(int j = max(i - 7, 0); j <= i; j++)
			tmp = tmp * 10 + s[j] - '0';
		a[++a[0]] = tmp;
	}
}

void add(int a[], int b[]) {
	a[0] = max(a[0], b[0]);
	for(int i = 1; i <= a[0]; i++) {
		a[i] += b[i];
		if(a[i] < base) continue;
		a[i + 1] += 1, a[i] -= base;
	}
	if(a[a[0] + 1]) a[0]++;
}

void write(int a[]) {
	printf("%d", a[a[0]]);
	for(int i = a[0] - 1; i > 0; i--) {
		printf("%08d", a[i]);
	}
	printf("\n");
}

int main() {
	read(a);
	read(b);
	add(a, b);
	write(a);
	return 0;
}
