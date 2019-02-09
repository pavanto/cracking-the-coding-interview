/*
Chapter 04 - Problem 10 - Check Subtree

Problem Statement:
T1 and T2 are two very large binary trees, with T1 much bigger than T2.
Create an algorithm to determine if T2 is a subtree of T1. A tree T2 is a subtree of T1
if there exists a node n in T1 such that the subtree of n is identical to T2. That is,
if you cut off the tree at node n, the two trees would be identical.

Solution:
Traverse T1 recursively in the main function. If during the recursive traversal a node with the same
value as the head of T2 is found in T1, use a helper function to traverse T2 from its head and T1 from
simultaneously to check that every node in each subtree has the same value. If this helper function
returns True, the main function will return True. If the main function reaches the end of T1 without
the helper function having returned True, the main function will return false.

Time complexity: O(N + KM) where K is the number of times the head of T2 appears in T1.
Space complexity: O(log(N) + log(M)) assuming trees are balanced
*/

#pragma once
#include "../chapter_02_linked_lists/Node.h"

namespace chapter_04 {
    template <typename T>
    bool checkSubtree(chapter_02::BinaryNode<T> T1_head, chapter_02::BinaryNode<T> T2_head) {
        return false;
    }
}  // chapter_04