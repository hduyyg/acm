#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

const int maxn = 1e3;
const int base = 1e4;
char s[maxn + 10];
int a[maxn + 10], b[maxn + 10], ans[maxn * maxn + 10];

void read(int a[]) {
	scanf("%s", s);
	int len = strlen(s);
	for(int i = len - 1; i >= 0; i -= 4) {
		int tmp = 0;
		for(int j = max(i - 3, 0); j <= i; j++)
			tmp = tmp * 10 + s[j] - '0';
		a[++a[0]] = tmp;
	}
	while(a[0] > 1 && a[a[0]] == 0) a[0]--;
}

bool iszero(int a[]) {
	return a[0] == 1 && a[1] == 0;
}

// a != 0 && b != 0
void multi(int ans[], int a[], int b[]) {
	for(int i = 1; i <= a[0]; i++)
		for(int j = 1; j <= b[0]; j++) {
			int index = i + j -1;
			ans[index] += a[i] * b[j];
			if(ans[index] < base) continue;
			ans[index + 1] += ans[index] / base, ans[index] %= base;
		}

	int k = a[0] + b[0];
	ans[0] = ans[k] ? k : k - 1;
}

void write(int a[]) {
	printf("%d", a[a[0]]);
	for(int i = a[0] - 1; i > 0; i--) {
		printf("%04d", a[i]);
	}
	printf("\n");
}

int main() {
	read(a);
	read(b);
	if(iszero(a) || iszero(b)) {
		printf("0\n");
	} else {
		multi(ans, a, b);
		write(ans);			
	}
	return 0;
}
