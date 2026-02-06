# Documentation of prog_7(Dijkstra’s Algorithm)

## Introduction
Dijkstra’s algorithm is a graph-based shortest path algorithm used to find the minimum distance from a source vertex to all other vertices in a weighted graph with non-negative edge weights.

## Function Specifications
minDistance(int dist[], int visited[]):This function selects the unvisited vertex with the minimum distance value. It returns the index of that vertex, which is then processed in Dijkstra’s algorithm.

## Algorithm
1. Initialize all distances as infinity (999) except the source vertex.

2. Mark all vertices as unvisited.

3. Select the unvisited vertex with the minimum distance.

4. Mark the selected vertex as visited.

5. Update distances of adjacent vertices if a shorter path is found.

6. Repeat steps until all vertices are visited.

## Overview on main function
The main() function initializes a weighted graph and applies Dijkstra’s algorithm starting from vertex 0. It computes and prints the shortest distance from the source to every other vertex.

## Output
--- bash
Vertex Distance from Source
0 	 0
1 	 7
2 	 8
3 	 8
4 	 5