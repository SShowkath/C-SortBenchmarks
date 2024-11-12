# Sorting Algorithm Benchmarking Program

This program benchmarks the performance of five different sorting algorithms by counting the number of **comparisons** and **swaps/assignments** each algorithm performs on a dataset of 5000 random integers. It provides insight into the computational efficiency of each algorithm.

---

## **Overview**

The program:
1. **Generates a dataset** of 5000 random integers.
2. **Duplicates the dataset** across five separate arrays and a linked list.
3. **Applies five sorting algorithms**:
   - Bubble Sort
   - Selection Sort
   - Insertion Sort
   - Quick Sort
   - Merge Sort (on a linked list)
4. **Counts operations**: Tracks comparisons and swaps/assignments performed by each algorithm.
5. **Outputs the results**, displaying the total number of operations for each sorting method.

---

## **Sorting Algorithms**

### 1. **Bubble Sort**
- Compares adjacent elements and swaps them if they are in the wrong order.
- Repeats this process until the array is sorted.
- **Complexity**: O(n²)
- **Performance**: Slowest among the implemented algorithms for large datasets.

---

### 2. **Selection Sort**
- Finds the smallest element in the unsorted portion of the array and places it in the sorted portion.
- Repeats this process until all elements are sorted.
- **Complexity**: O(n²)
- **Performance**: Slightly better than Bubble Sort but still inefficient for large datasets.

---

### 3. **Insertion Sort**
- Builds a sorted portion of the array one element at a time by inserting each element into its correct position.
- **Complexity**: O(n²) (worst case)
- **Performance**: Performs better than Bubble and Selection Sort, especially for partially sorted data.

---

### 4. **Quick Sort**
- Selects a pivot and partitions the array such that elements smaller than the pivot are on the left, and elements larger than the pivot are on the right.
- Recursively sorts the partitions.
- **Complexity**: O(n log n) (average case), O(n²) (worst case with poor pivot selection).
- **Performance**: Efficient and fast on average, making it one of the best algorithms in practice.

---

### 5. **Merge Sort**
- Recursively splits a linked list into two halves, sorts each half, and merges the sorted halves into a single sorted list.
- **Complexity**: O(n log n) (always).
- **Performance**: Stable and consistent but requires extra memory for merging.

---

## **Operation Counting**

The program tracks:
- **Comparisons** (`c1`, `c2`, `c3`, `c4`, `c5` for Bubble, Selection, Insertion, Quick, and Merge Sort respectively).
- **Swaps/Assignments** (`s1`, `s2`, `s3`, `s4` for Bubble, Selection, Insertion, and Quick Sort).

At the end of the program, it prints the total operations for each sorting algorithm.

---
