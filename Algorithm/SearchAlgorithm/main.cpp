/*

	�˻� �˰���
	1.�����˻� �Ǵ� �����˻�
	2.
*/

#include <stdio.h>

/// <summary>
/// Values���� �ش� key�� ��ġ�ϴ� ���� ù��° index�� �������ִ� �Լ�
/// </summary>
/// <param name="Values">key���� ã�� �迭</param>
/// <param name="n">Values�� ����</param>
/// <param name="key">Values���� ã�� Key��</param>
/// <returns></returns>
int Search(const int Values[], int n, int key)
{
	for (int i = 0; i < n; i++)
	{
		if (Values[i] == key)
			return i;
	}
	return -1;
}

/// <summary>
/// ���ʹ��� ����� Values���� �ش� key�� ��ġ�ϴ� ���� ù��° index�� �������ִ� �Լ�
/// </summary>
/// <param name="Values">key���� ã�� �迭</param>
/// <param name="n">Values�� ����</param>
/// <param name="key">Values���� ã�� Key��</param>
/// <returns></returns>
int SubSearch(int Values[], int n, int key)
{
	Values[n] = key;
	int i = 0;
	while (true)
	{
		if (Values[i] == key)
			break;
		i++;
	}
	return i == n ? -1 : i;
}



int main()
{

	return 0;
}