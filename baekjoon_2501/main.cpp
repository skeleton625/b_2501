#include <cstdio>
int main()
{
	int p, q, i;
	scanf_s("%d %d", &p, &q);
	for (i = 1; i <= p && q; i++) q -= !(p%i);
	// !(p%i) -> �������� 0�� �ƴҰ�� ���� 0, �������� 0�̸� 1 ���
	printf("%d", (q ? 0 : i-1));
	// ���ϴ� ��°�� ������ ��� q�� 0, �׷��� ���� ��� 0�� �ƴ�
	return 0;
}