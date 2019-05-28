#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> heights) {
	vector<int> answer;
	stack<int> st;

	for (int i = heights.size() - 1; i >= 0; i--)
	{
		st.push(0);
		for (int j = i - 1; j >= 0; j--)
		{
			if (heights[i] < heights[j])
			{
				st.pop();
				st.push(j + 1);
				break;
			}
		}
	}

	while (!st.empty())
	{
		answer.push_back(st.top());
		st.pop();
	}

	return answer;
}