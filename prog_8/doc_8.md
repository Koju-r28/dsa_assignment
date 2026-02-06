
# Documentation of prog_8 (Sorting with Performance Count)
## Introduction
Sorting arranges data in a specific order. Different sorting algorithms have different time complexities and performance. Allowing the user to choose the algorithm helps compare their efficiency.

## Datastructure used
--- bash
Array
---


## Function Specification
 bubbleSort() – compares adjacent elements repeatedly

selectionSort() – selects minimum element and places it correctly

insertionSort() – inserts element into sorted subarray

## Algorithm

1. Read N from user

2. Generate N random numbers

3. Ask user to choose sorting method

4. Apply selected algorithm

5. Display sorted output and performance metrics


## Overview on main() function
The main() function generates random numbers, takes user choice for sorting method, calls the respective sorting function, and prints comparisons and swaps.

## Output
--- bash
Enter N: 5
Before Sorting:
45 12 78 34 9
Choose Sorting Method:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
Enter choice: 2
After Sorting:
9 12 34 45 78
Comparisons: 10, Swaps: 4