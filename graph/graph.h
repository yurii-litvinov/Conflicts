#pragma once
#include <vector>

struct Graph;

Graph *createGraph();
void add(Graph *graph, const int node, const std::vector<int> &adjacentNodes);
std::vector<int> adjacent(Graph *graph, const int &current);
