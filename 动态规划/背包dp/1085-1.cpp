#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

const int maxw = 1e4;

int f[maxw + 10];

int main() {
	int n, w;
    scanf("%d%d", &n, &w);
    for(int i = 0; i < n; i++) {
    	int wi, pi;
    	scanf("%d%d", &wi, &pi);
    	for(int j = w; j >= wi; j--)
    		f[j] = max(f[j], f[j - wi] + pi);
	}
	printf("%d\n", f[w]);
	return 0;
}
