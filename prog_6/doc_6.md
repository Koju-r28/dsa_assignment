# Documentation of prog_6 (Min Heap & Max Heap Construction)
## Introduction
A heap is a special complete binary tree that satisfies the heap property. In a max heap, the value of each parent node is greater than or equal to the values of its child nodes. Heaps are commonly implemented using arrays because a complete binary tree can be efficiently represented in contiguous memory.
For an array-based heap:

.Parent index = (i - 1) / 2

.Left child index = 2\*i + 1

.Right child index = 2\*i + 2

## Functions Specification
heapify(int arr[], int n, int i) :This function ensures that the subtree rooted at index i satisfies the max-heap property. It compares the parent node with its left and right children and swaps with the largest element if necessary. The function is called recursively until the heap property is restored.
## c) Algorithm Explanation

    1.Treat the array as a complete binary tree.

    2.Start heapification from the last non-leaf node (n/2 - 1).

    3.Compare parent with its children and swap with the largest child.
          
    4.Recursively heapify the affected subtree.

    5.Continue until the entire array forms a max heap.
## Overview on main() function
The main() function initializes an integer array and converts it into a max heap by calling the heapify() function on all non-leaf nodes. After heap construction, the heap elements are printed.

## Output
      Max Heap: 10 5 3 4 1
