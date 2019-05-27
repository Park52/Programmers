#include <string>
#include <vector>

using namespace std;

//단순하게 비교해서 값을 넣는 방식
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

// 최대값을 넣고 차감하는 형식임
// 위에랑 다를게 없음

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