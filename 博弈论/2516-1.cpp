#include<cstdio>
#include<set>
using namespace std;

set<int> f;

void getFibonaci() {
	int x = 1, y = 2, tmp;
	while(y > 0) {
		f.insert(y);
		tmp = x + y, x = y, y = tmp;
	}
}

int main() {
	int n;
	getFibonaci();
	while(scanf("%d", &n) && (n > 0)) {
		printf("%s win\n", (f.find(n) != f.end()) ? "Second" : "First");
	}
	return 0;
}
