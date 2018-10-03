#include<cstdio>
using namespace std;

int josephus(int n, int m) {
    if (m == 1) return n - 1;

    int p = 0;
    for(int i = 2; i <= n; i++) {
    	if(p + m < i) {
    		int k = (i - p) / (m - 1) - 1;
    		if(i + k < n) {
				p += m * k, i += k;
			} else {
				p = p + m * (n - i), i = n;
			}
		}
		p = (p + m) % i;
	}
     return p;
}

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	int res = josephus(n, m) + 1;
	printf("%d\n", res);
	return 0;
}
