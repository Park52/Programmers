#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;
	queue<int> Queue;

	for (int i = 0; i < progresses.size(); i++)
	{
		Queue.push((100 - progresses[i]) / speeds[i]);
	}

	int Pivot = Queue.front();
	Queue.pop();
	int Count = 1;

	while (!Queue.empty())
	{
		if (Pivot >= Queue.front())
		{
			Count++;
		}
		else
		{
			answer.push_back(Count);
			Pivot = Queue.front();
			Count = 1;
		}
		Queue.pop();
	}
	answer.push_back(Count);
	return answer;
}