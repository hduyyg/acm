#include<cstdio>
using namespace std;

int main() {
	int m, n, k;
	scanf("%d", &m);
	while(m--) {
		scanf("%d%d", &n, &k);
		printf("%c\n", (n % (k+1)) ? 'A' : 'B');
	}
	return 0;
}
