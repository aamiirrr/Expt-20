# Insertion Sort Algorithm

This repository contains a simple implementation of the **insertion sort algorithm** in C++.

## How Insertion Sort Works

Insertion sort is a simple sorting algorithm that builds the sorted array one element at a time. It works similarly to how you would arrange playing cards in your hand:

1. Start with the second element, assuming the first element is already sorted.
2. Compare the current element (key) with the elements before it.
3. Shift the elements that are greater than the key one position to the right.
4. Place the key in its correct position.
5. Repeat the process for all elements in the array.

### Example

Given the array: `[5, 2, 9, 1, 5, 6]`

- Start with the second element `2`, compare with `5`, and insert it before `5`.
- The array now looks like `[2, 5, 9, 1, 5, 6]`.
- Continue with `9`, which is already in the correct position.
- Move to `1`, compare it with `9`, `5`, and `2`, and insert it at the beginning.
- Finally, the sorted array becomes `[1, 2, 5, 5, 6, 9]`.

### Time Complexity

- **Best case**: O(n) — When the array is already sorted.
- **Worst case**: O(n²) — When the array is sorted in reverse order.
- **Average case**: O(n²)

### Space Complexity

- O(1) — Insertion sort is an in-place sorting algorithm, requiring a constant amount of additional memory space.

## Implementation

The C++ implementation can be found in the `main.cpp` file.

### How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/Dios-001/Expt-20.git
   ```

# Sorting Algorithms: Bubble Sort and Selection Sort

This repository contains simple implementations of the **bubble sort** and **selection sort** algorithms in C++.

## Bubble Sort Algorithm

### How Bubble Sort Works

Bubble sort is a straightforward sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The process is repeated until the list is sorted.

1. Start at the beginning of the array.
2. Compare the first two adjacent elements.
3. If the first element is greater than the second, swap them.
4. Move to the next pair of adjacent elements and repeat the comparison and swapping.
5. Continue this process until you reach the end of the array. This completes one pass.
6. Repeat the entire process for the number of elements in the array minus one.

### Example

Given the array: `[5, 2, 9, 1, 5, 6]`

- Compare `5` and `2`, swap → `[2, 5, 9, 1, 5, 6]`
- Compare `5` and `9`, no swap → `[2, 5, 9, 1, 5, 6]`
- Compare `9` and `1`, swap → `[2, 5, 1, 9, 5, 6]`
- Continue until the end of the array.
- After several passes, the sorted array becomes `[1, 2, 5, 5, 6, 9]`.

### Time Complexity

- **Best case**: O(n) — When the array is already sorted.
- **Worst case**: O(n²) — When the array is sorted in reverse order.
- **Average case**: O(n²)

### Space Complexity

- O(1) — Bubble sort is an in-place sorting algorithm.

## Selection Sort Algorithm

### How Selection Sort Works

Selection sort divides the input array into two parts: a sorted and an unsorted region. It repeatedly selects the smallest (or largest) element from the unsorted region and moves it to the end of the sorted region.

1. Start from the beginning of the array.
2. Find the smallest element in the unsorted region.
3. Swap it with the first unsorted element.
4. Move the boundary between the sorted and unsorted regions one element to the right.
5. Repeat until the entire array is sorted.

### Example

Given the array: `[5, 2, 9, 1, 5, 6]`

- Find the smallest element (`1`), swap with `5` → `[1, 2, 9, 5, 5, 6]`
- Next, find the smallest from `[2, 9, 5, 5, 6]`, which is `2`, no swap needed → `[1, 2, 9, 5, 5, 6]`
- Find the smallest from `[9, 5, 5, 6]`, swap `9` with `5` → `[1, 2, 5, 9, 5, 6]`
- Continue until the sorted array becomes `[1, 2, 5, 5, 6, 9]`.

### Time Complexity

- **Best case**: O(n²) — No matter the initial arrangement of the array.
- **Worst case**: O(n²)
- **Average case**: O(n²)

### Space Complexity

- O(1) — Selection sort is also an in-place sorting algorithm.

## Implementations

The C++ implementations can be found in the `main.cpp` file.

### How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/Dios-001/Expt-20.git
   ```
