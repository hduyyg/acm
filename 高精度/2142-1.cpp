#include<cstdio>
#include<cstring>
using namespace std;

const int maxn = 1e4;
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

int compare(int a[], int b[]) {
	if(a[0] != b[0]) return a[0] - b[0];
	for(int i = a[0]; i > 0; i--) {
		if(a[i] != b[i]) return a[i] - b[i];
	}
	return 0;
}

// a > b
void minus(int a[], int b[]) {
	for(int i = 1; i <= a[0]; i++) {
		if(a[i] < b[i]) a[i] += 10, a[i + 1]--;
		a[i] -= b[i];
	}
	// why no a[0] > 0
	while(a[a[0]] == 0) a[0]--;
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
	
	int flag = compare(a, b);
	if(flag == 0) {
		printf("0\n");
	} else if(flag > 0) {
		minus(a, b);
		write(a);
	} else {
		minus(b, a);
		printf("-");
		write(b);
	}
	return 0;
}
