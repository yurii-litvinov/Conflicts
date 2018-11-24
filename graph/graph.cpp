#include <vector>

struct Node
{
	bool exists = false;
	std::vector<int> adjacentNodes;
};

struct Graph
{
	std::vector<Node> nodes;
};

Graph *createGraph()
{
	return new Graph;
}

bool exists(const Graph *const graph, const int node)
{
	for (Node const &current : graph->nodes)
	{
		if (current.exists)
		{
			return true;
		}
	}

	return false;
}

void add(Graph *graph, const int node, const std::vector<int> &adjacentNodes)
{
	if (node >= graph->nodes.size())
	{
		graph->nodes.resize(node + 1);
	}

	for (const int adjacentNode : adjacentNodes)
	{
		if (exists(graph, adjacentNode))
		{
			add(graph, adjacentNode, {});
		}
		graph->nodes[node].adjacentNodes.push_back(adjacentNode);
	}	
	graph->nodes[node].exists = true;
}

std::vector<int> adjacent(Graph *graph, const int &current)
{
	return graph->nodes[current].adjacentNodes;
}







