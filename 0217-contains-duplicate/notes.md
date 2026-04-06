This question can be solved by brute force but time complexity = O(n^2). But the efficient solution would be to use a hash set instead of comparing every pair

set is slower → O(n log n) overall

unordered_set is faster → O(n) overall 

set (Ordered Set):
---
Internally uses a balanced BST (Red-Black Tree), Keeps elements sorted 

Operations: insert → O(log n) search → O(log n)

unordered_set (Hash Set):
---
Uses a hash table, No ordering

Operations: insert → O(1) average search → O(1) average


