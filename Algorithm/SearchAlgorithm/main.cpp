/*

	검색 알고리즘
	1.선형검색 또는 순차검색
	2.
*/

#include <stdio.h>

/// <summary>
/// Values에서 해당 key와 일치하는 값의 첫번째 index를 리턴해주는 함수
/// </summary>
/// <param name="Values">key값을 찾을 배열</param>
/// <param name="n">Values의 갯수</param>
/// <param name="key">Values에서 찾을 Key값</param>
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
/// 보초법을 사용한 Values에서 해당 key와 일치하는 값의 첫번째 index를 리턴해주는 함수
/// </summary>
/// <param name="Values">key값을 찾을 배열</param>
/// <param name="n">Values의 갯수</param>
/// <param name="key">Values에서 찾을 Key값</param>
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