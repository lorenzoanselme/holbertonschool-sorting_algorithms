# Sorting Algorithms & Big O

## Description

This project is part of the Holberton School Low-Level Programming curriculum.
It focuses on implementing different sorting algorithms in C and analyzing their
time complexity using Big O notation.

## Learning Objectives

At the end of this project, you should be able to explain:

- At least four different sorting algorithms
- What Big O notation is and how to evaluate the time complexity of an algorithm
- How to choose the best sorting algorithm for a given input
- What a stable sorting algorithm is
- The difference between best, average, and worst case time complexity

## Environment

- Language: C
- Compiler: gcc
- Compilation flags:
  -Wall -Wextra -Werror -pedantic -std=gnu89
- OS: Ubuntu 20.04 LTS
- Coding style: Betty

## Project Structure

```text
sorting_algorithms/
├── sort.h
├── print_array.c
├── print_list.c
├── 0-bubble_sort.c
├── 0-O
├── 1-insertion_sort_list.c
├── 1-O
├── 2-selection_sort.c
├── 2-O
├── 3-quick_sort.c
├── 3-O
└── README.md
```

## Implemented Algorithms

### Bubble Sort
File: 0-bubble_sort.c

Time Complexity:
- Best case: O(n)
- Average case: O(n^2)
- Worst case: O(n^2)

### Insertion Sort (Doubly Linked List)
File: 1-insertion_sort_list.c

Time Complexity:
- Best case: O(n)
- Average case: O(n^2)
- Worst case: O(n^2)

### Selection Sort
File: 2-selection_sort.c

Time Complexity:
- Best case: O(n^2)
- Average case: O(n^2)
- Worst case: O(n^2)

### Quick Sort (Lomuto Partition Scheme)
File: 3-quick_sort.c

Time Complexity:
- Best case: O(n log n)
- Average case: O(n log n)
- Worst case: O(n^2)

## Header File

All function prototypes and data structures are declared in sort.h.

## Author

Lorenzo Anselme
Holberton School Student

## License

Educational purposes only.
