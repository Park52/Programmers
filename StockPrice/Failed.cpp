#include <string>
#include <vector>

using namespace std;

//�ܼ��ϰ� ���ؼ� ���� �ִ� ���
vector<int> solution(vector<int> prices) {
	vector<int> answer;
	int Pivot = 0;
	int Count = 0;
	for (int i = 0; i < prices.size(); i++)
	{
		Pivot = prices[i];
		for (int j = i + 1; j < prices.size(); j++)
		{
			if (Pivot <= prices[j])
			{
				Count++;
			}
		}
		answer.push_back(Count);
		Count = 0;
	}
	return answer;
}

// �ִ밪�� �ְ� �����ϴ� ������
// ������ �ٸ��� ����

vector<int> solution(vector<int> prices) {
	vector<int> answer;
	int Pivot = 0;
	int Count = 0;

	for (int i = 0; i < prices.size(); i++)
	{
		//answer[i] = prices.size()-i-1;
		answer.push_back(prices.size() - i - 1);
	}

	for (int i = 0; i < prices.size(); i++)
	{
		for (int j = i + 1; j < prices.size(); j++)
		{
			if (prices[i] > prices[j])
			{
				answer[i]--;
			}
		}
	}
	return answer;
}