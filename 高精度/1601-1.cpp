#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

const int maxn = 500;
char s[maxn + 10];
int a[maxn + 10], b[maxn + 10];

void read(int a[]) {
	scanf("%s", s);
	int len = strlen(s);
	for(int i = len - 1; i >= 0; i--) {
		a[++a[0]] = s[i] - '0';
	}
	while(a[0] > 1 && a[a[0]] == 0) a[0]--;
}

void add(int a[], int b[]) {
	a[0] = max(a[0], b[0]);
	for(int i = 1; i <= a[0]; i++) {
		a[i] += b[i];
		if(a[i] < 10) continue;
		a[i+1] += 1, a[i] -= 10;
	}
	if(a[a[0] + 1]) a[0]++;
}

void write(int a[]) {
	for(int i = a[0]; i > 0; i--) {
		printf("%d", a[i]);
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
