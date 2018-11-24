#include "graph.h"
#include <queue>
#include <unordered_set>

std::vector<int> traversal(Graph *graph, const int first)
{
	std::vector<int> result;
	std::unordered_set<int> visited;
	std::queue<int> nodeQueue;
	nodeQueue.push(first);

	while (nodeQueue.size() > 0)
	{
		int head = nodeQueue.front();
		nodeQueue.pop();
		if (visited.count(head) > 0)
		{
			continue;
		}

		result.push_back(head);
		visited.insert(head);
		for (int i : adjacent(graph, head))
		{
			if (visited.count(i) == 0)
			{
				nodeQueue.push(i);
			}
		}
	}

	return result;
}

int main()
{
	Graph *newGraph = createGraph();
	add(newGraph, 1, { 2, 3 });
	add(newGraph, 2, { 4 });
	add(newGraph, 3, { 4 });
	add(newGraph, 4, { 1 });

	std::vector<int> result = traversal(newGraph, 4);

	return 0;
}
