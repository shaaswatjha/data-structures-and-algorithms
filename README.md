# DSA

Implementation of basic data structures and algorithms in C++.

## Algorithms

### Searching

- [Linear Search](./algorithms/searching/linear_search.cpp)
    * Time Complexity:
        + Best: O(1)
        + Average: O(n)
        + Worst: O(n)
    * Space Complexity: O(1)

- [Binary Search](./algorithms/searching/binary_search.cpp)
    * Time Complexity:
        + Best: O(1)
        + Average: O(log n)
        + Worst: O(log n)
    * Space Complexity: O(1)
    * Prerequisite: Input must be sorted.

### Sorting

- [Bubble Sort](./algorithms/sorting/bubble_sort.cpp)
    * Time Complexity:
        + Best: O(n) w/ early stopping, O(n²) otherwise
        + Average: O(n²)
        + Worst: O(n²)
    * Space Complexity: O(1)

- [Merge Sort](./algorithms/sorting/merge_sort.cpp)
    * Time Complexity:
        + Best: O(n log n)
        + Average: O(n log n)
        + Worst: O(n log n)
    * Space Complexity: O(n)

    The recursive version of merge sort additionally uses O(log n) call-stack space but overall it works out to be O(n).

## Data Structures

## Useful Resources

- [Data Structures and Algorithms Roadmap](https://roadmap.sh/datastructures-and-algorithms)
- [Learn Data Structures and Algorithms](https://www.programiz.com/dsa)
- [Learn C++](https://www.learncpp.com/)
- [Time & Space Complexities of Common Data Structures & Algorithms](https://www.bigocheatsheet.com/)

## Compiling & Running Programs

```bash
g++ -std=c++20 -O3 -Wall -Wextra -Wpedantic program.cpp -o program.out
./program.out <cli-arguments>
```
