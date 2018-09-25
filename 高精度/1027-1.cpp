#include<cstdio>
#include<cstring>
using namespace std;

const int maxn = 1e3;
char s[maxn + 10];
int a[maxn + 10], b[maxn + 10], ans[maxn * maxn + 10];

void read(int a[]) {
	scanf("%s", s);
	int len = strlen(s);
	for(int i = len - 1; i >= 0; i--) {
		a[++a[0]] = s[i] - '0';
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
			ans[i + j -1] += a[i] * b[j];
		}

	ans[0] = a[0] + b[0] - 1;
	for(int i = 1; i <= ans[0]; i++)
		if(ans[i] > 9) ans[i + 1] += ans[i] / 10, ans[i] %= 10;	
	if(ans[ans[0] + 1]) ans[0]++;
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
	if(iszero(a) || iszero(b)) {
		printf("0\n");
	} else {
		multi(ans, a, b);
		write(ans);			
	}
	return 0;
}
