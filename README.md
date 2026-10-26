# Data-Structures-Algorithms
DSA work that I learn along the way.

This repository contains C++ programs developed as part of college coursework in Data Structures and Algorithms.&#x20;

## Programs

### 1. Binary Search Tree — `BST.cpp`

- **Description:** Demonstrates a Binary Search Tree (BST), where values smaller than a node are placed in its left subtree and larger values in its right subtree.
- **Concepts:** Dynamic memory allocation, pointers, recursive insertion, searching, and tree traversal.
- **Time complexity:** Search, insertion, and deletion are O(log n) on average for a reasonably balanced tree, but O(n) in the worst case for an unbalanced tree.
- **Space complexity:** O(n) for storing the tree.

### 2. Queue — `QUEUE.cpp`

- **Description:** Demonstrates the queue data structure, which follows FIFO (First In, First Out).
- **Concepts:** Enqueue, dequeue, front/rear management, and queue operations.
- **Time complexity:** Typically O(1) per enqueue/dequeue operation when implemented with suitable pointers or a circular array.
- **Space complexity:** O(n).

### 3. Stack — `STACKS.cpp`

- **Description:** Demonstrates the stack data structure, which follows LIFO (Last In, First Out).
- **Concepts:** Push, pop, top/peek, and stack management.
- **Time complexity:** O(1) per push or pop operation with a suitable implementation.
- **Space complexity:** O(n).

### 4. Smallest Element to Last — `SmallestElementToLast.cpp`

- **Description:** Appears to demonstrate an operation that moves the smallest element to the end of a collection or linked list.
- **Concepts:** Element comparison, traversal, and linked-list or array manipulation.
- **Time complexity:** Depends on the implementation and the number of traversals performed.
- **Space complexity:** Depends on whether the operation modifies the collection in place or uses additional storage.

### 5. Sum of Two Elements in a Linked List — `X_isSumOf_2ElementsOfTheList.cpp`

- **Description:** Traverses a singly linked list and checks whether each target element can be expressed as the sum of two other nodes. The program prints the first matching pair found for each target.
- **Concepts:** Singly linked lists, multiple pointers, nested traversal, and pair-sum checking.
- **Time complexity:** O(n³) in the worst case, because the program uses three nested traversals.
- **Auxiliary space complexity:** O(1), excluding the linked list itself.

### 6. AVL Trees — `avl-trees.cpp`

- **Description:** Demonstrates AVL trees, which are self-balancing Binary Search Trees. The tree maintains a balance factor of -1, 0, or +1 at every node.
- **Concepts:** Height calculation, balance factors, rotations (LL, RR, LR, RL), and balanced tree operations.
- **Time complexity:** Search, insertion, and deletion are O(log n) when implemented with AVL balancing.
- **Space complexity:** O(n) for the tree, with O(log n) recursive stack space for standard recursive operations.

### 7. Bin Sort Using a Linked List — `binsort-linkedlist.cpp`

- **Description:** Appears to demonstrate bin-based sorting using linked lists to distribute and organize elements.
- **Concepts:** Linked-list manipulation, distribution into bins, and sorting.
- **Time complexity:** Depends on how elements are distributed among bins and how each bin is processed.
- **Space complexity:** Depends on whether the implementation uses additional bins or nodes.

### 8. Bucket Sort — `bucketsort.cpp`

- **Description:** Distributes elements into buckets according to their values, sorts individual buckets, and combines the buckets to produce the sorted output.
- **Concepts:** Distribution-based sorting, buckets, and combining sorted collections.
- **Time complexity:** Average-case O(n + k) under suitable distribution and bucket-sorting assumptions; worst-case O(n²) for common implementations if many elements fall into one bucket. Here, k is the number of buckets.
- **Space complexity:** Typically O(n + k).

### 9. Circular Queue — `circularqueue.cpp`

- **Description:** Implements a circular queue in which the last array position connects logically back to the first, allowing freed positions to be reused.
- **Concepts:** FIFO, modular arithmetic, front/rear management, and overflow/underflow conditions.
- **Time complexity:** O(1) per enqueue and dequeue operation.
- **Space complexity:** O(n), where n is the queue capacity.

### 10. Merging Two Sorted Arrays — `doublelist-merge.cpp`

- **Description:** Merges two sorted arrays into a third array, combining all elements in ascending order. Two pointers traverse the input arrays simultaneously, comparing their current elements and placing the smaller element into the result array. Any remaining elements are then copied into the result.
- **Concepts:** Array traversal, two-pointer technique, comparison-based merging, and the merge operation used in Merge Sort.
- **Time complexity:** O(n + m), where `n` and `m` are the sizes of the two input arrays. Each element is processed once.
- **Space complexity:** O(n + m) for the third array containing all elements from both input arrays.


### 11. Heap Sort — `heapsort.cpp`

- **Description:** Sorts elements using a binary heap. A max heap is constructed, then the maximum element is repeatedly moved to the end of the unsorted portion.
- **Concepts:** Heap construction, heapify, parent/child index relationships, and in-place sorting.
- **Time complexity:** O(n log n) in the best, average, and worst cases.
- **Space complexity:** O(1) auxiliary space for an iterative, in-place implementation; recursive heapify can use O(log n) stack space.

### 12. K Smallest Elements — `k-smallestelements.cpp`

- **Description:** Appears to find the k smallest elements from a collection without necessarily sorting the entire collection.
- **Concepts:** Selection algorithms, comparisons, and potentially heaps or partitioning.
- **Time complexity:** Depends on the algorithm used; for example, a max heap of size k can achieve O(n log k), while other approaches have different bounds.
- **Space complexity:** Depends on the selection method.

### 13. Linked-List Search and Deletion — `linkedlist-search&deletion.cpp`

- **Description:** Demonstrates searching for a value in a linked list and deleting a specified node while maintaining the list's links.
- **Concepts:** Pointer traversal, node identification, link updates, and dynamic memory management.
- **Time complexity:** O(n) for searching and locating a node by value; deletion itself is O(1) once the relevant node and predecessor are available.
- **Space complexity:** O(1) auxiliary space for an iterative implementation.

### 14. Linked List — `linkedlistFull.cpp`

- **Description:** Appears to contain a broader implementation of linked-list operations.
- **Concepts:** Node creation, traversal, insertion, deletion, and pointer manipulation.
- **Time complexity:** Traversal and searching are O(n); insertion or deletion at a known position can be O(1) after locating that position.
- **Space complexity:** O(n) for storing n nodes.

### 15. Linked-List Queue — `queue-linked.cpp`

- **Description:** Implements a queue using linked nodes rather than a fixed-size array.
- **Concepts:** Dynamic memory allocation, FIFO ordering, front/rear pointers, enqueue, and dequeue.
- **Time complexity:** O(1) for enqueue and dequeue when both front and rear pointers are maintained correctly.
- **Space complexity:** O(n).

### 16. Radix Sort Using Arrays — `radixsort-array.cpp`

- **Description:** Implements Radix Sort using arrays to sort integers digit by digit, starting from the least significant digit (LSD). A stable sorting procedure is applied at each digit position until all digit places have been processed.
- **Concepts:** Radix Sort, arrays, digit extraction, stable sorting, and non-comparison-based sorting.
- **Time complexity:** \(O(d(n+b))\), where `n` is the number of elements, `d` is the maximum number of digits, and `b` is the base (typically 10).
- **Space complexity:** \(O(n+b)\) for the temporary array and digit-counting storage used by the standard counting-sort-based implementation.

### 17. Linked-List Stack — `stacks-linked.cpp`

- **Description:** Implements a stack using linked nodes, allowing the stack to grow dynamically as elements are pushed.
- **Concepts:** LIFO ordering, push, pop, top pointer, and dynamic memory allocation.
- **Time complexity:** O(1) per push and pop operation when operations are performed at the head.
- **Space complexity:** O(n).

### 18. Towers of Hanoi — `towers-of-hanoi.cpp`

- **Description:** Solves the Towers of Hanoi puzzle recursively by moving a stack of disks from a source peg to a destination peg using an auxiliary peg. Larger disks must never be placed on smaller disks.
- **Concepts:** Recursion, base cases, problem decomposition, and recursive call stacks.
- **Time complexity:** O(2ⁿ), with 2ⁿ − 1 moves required for n disks.
- **Space complexity:** O(n) auxiliary recursion stack space.

