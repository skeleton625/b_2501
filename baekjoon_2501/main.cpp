#include <cstdio>
int main()
{
	int p, q, i;
	scanf_s("%d %d", &p, &q);
	for (i = 1; i <= p && q; i++) q -= !(p%i);
	// !(p%i) -> 나머지가 0이 아닐경우 전부 0, 나머지가 0이면 1 출력
	printf("%d", (q ? 0 : i-1));
	// 원하는 번째에 도착할 경우 q는 0, 그렇지 않을 경우 0이 아님
	return 0;
}