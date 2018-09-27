#include<cstdio>
using namespace std;

int main() {
	int n, i, j;
	while(~scanf("%d", &n)) { 
		scanf("%d", &i);
		while(--n) scanf("%d", &j), i ^= j;
		printf("%c\n", i ? 'A' : 'B');
	}
	return 0;
}
