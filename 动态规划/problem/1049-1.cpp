#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

typedef long long LL;

int main() {
	int n; LL sum, ans;
    scanf("%d%I64d", &n, &sum);
    ans=sum;
    for(int i = 1; i < n; i++) {
    	LL x;
    	scanf("%I64d", &x);
    	sum=max(x, sum + x);
    	ans=max(ans, sum);
	}
	printf("%I64d\n",ans);
	return 0;
}
