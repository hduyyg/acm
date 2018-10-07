#include<cstdio>
#include<algorithm>
using namespace std;

const int maxn = 5e4;
int a[17], h[maxn + 10];
int mi[maxn + 10][17], ma[maxn + 10][17];

int main() {
	a[0] = 1;
	for(int i = 1; i < 17; i++) a[i] = a[i - 1] * 2;
		
	int n, q;
	scanf("%d%d", &n, &q);
	for(int i = 1; i <= n; i++) {
		scanf("%d", &h[i]);
		mi[i][0] = ma[i][0] = h[i];
	}
	
	for(int j = 1; a[j] <= n; j++)
		for(int i = 1; i + a[j] <= n + 1; i++) {
			mi[i][j] = min(mi[i][j - 1], mi[i + a[j - 1]][j - 1]);
			ma[i][j] = max(ma[i][j - 1], ma[i + a[j - 1]][j - 1]);		
		}
	
	while(q--) {
		int L, R, j;
		scanf("%d%d", &L, &R);
		for(j = 0; L + a[j] <= R + 1; j++);
		j--;
		
		int tallest = max(ma[L][j], ma[R - a[j] + 1][j]);
		int shortest = min(mi[L][j], mi[R - a[j] + 1][j]);
		printf("%d\n", tallest - shortest);
	}
	return 0;
}
