#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> budgets, int M) {
	int answer = 0;
	int sum = 0;
	int temp = 0;
	int Min, Mid, Max;

	sort(budgets.begin(), budgets.end());

	for (int i = 0; i < budgets.size(); i++)
	{
		sum += budgets[i];
		// 계속 더하면 int 범위를 나갈 수 있음.
		if (sum > M)
		{
			break;
		}
	}
	if (sum <= M)
	{
		return budgets[budgets.size() - 1];
	}

	Min = 0;
	Max = budgets[budgets.size() - 1];
	while (1)
	{
		sum = 0;
		Mid = (Min + Max) / 2;
		
		for (int i = 0; i < budgets.size(); i++)
		{
			if (Mid > budgets[i])
			{
				sum += budgets[i];
			}
			else
			{
				sum += Mid;
			}
		}

		if (Mid == temp)
		{
			return Mid;
		}

		if (sum > M)
		{
			Max = Mid;
		}
		else
		{
			Min = Mid;
		}

		temp = Mid;
	}

	return answer;
}

int main()
{
	vector<int> a;
	int Solution = 0;

	a.push_back(120);
	a.push_back(110);
	a.push_back(140);
	a.push_back(150);

	Solution = solution(a, 485);

}