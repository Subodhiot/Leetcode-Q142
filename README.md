# Leetcode-Q142
Q - Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.
There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter
Solution - 
The given code is a C++ implementation of finding the starting node of a linked list cycle. The function detectCycle() takes a singly linked list represented by its head node as input and returns the starting node of the cycle if one exists, otherwise, it returns NULL.

The implementation uses an unordered map umap to keep track of the frequency of each node in the linked list. The variable temp is initialized to the head of the linked list and a while loop is used to iterate over the linked list until temp becomes NULL.

In each iteration of the loop, the frequency of the current node pointed by temp is incremented in the unordered map using the operator[]. If the frequency of the current node becomes greater than 1, it means that the current node has already been visited before and it is the starting node of the cycle. In this case, the current node is returned as the starting node of the cycle.

If the loop finishes without finding any cycle, the function returns NULL indicating that there is no cycle in the linked list.

However, this implementation has a time complexity of O(n) due to the use of the unordered map. This can be improved by using Floyd's cycle-finding algorithm, which has a time complexity of O(n) and space complexity of O(1).
