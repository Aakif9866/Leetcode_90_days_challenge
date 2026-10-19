# Day 05 — LeetCode 90 Days Challenge

**Date:** 19 October 2026

> **Gap acknowledged:** Day 04 was on 13 October 2026. I didn't practise from 14–18 October (5 days), so the streak resets here. Apologies to anyone following the repo for the delay — resuming now.

## Problems Solved

1. Two Sum II - Input Array Is Sorted
2. Valid Palindrome

## What I Learned

- **Two Sum II:** the array is sorted, so two pointers (`i` at the start, `j` at the end) work: if the sum is less than the target, move `i` right; if greater, move `j` left. Returns 1-indexed positions. Time O(n), space O(1).
- **Valid Palindrome:** (marked "very easy nostalgic question" in my own comment) filter the string down to lowercase alphanumeric characters, then compare from both ends with two pointers. Time O(n), space O(n) for the cleaned string.

## Mistakes & Improvements

- Valid Palindrome: the `islower(it) || isalnum(it)` check is redundant since `isalnum` already covers lowercase letters; `isalnum` alone is enough.
- Valid Palindrome: the loop condition `i <= j` works, but `i < j` is enough (the middle character never needs comparing).
- Valid Palindrome: a leftover debug `cout << news` is still in the solution — remove before submitting.
- Valid Palindrome: could be done in O(1) extra space by skipping non-alphanumeric characters with the pointers instead of building a new string.

## Self-Review

- Problems solved: 2
- Difficulty faced: None noted — both were easy warm-ups after the break.
- What I understood better today:
  - Sorted input is the cue for two pointers instead of a hash map
- What I need to revise:
  - Nothing flagged for [../REVISIT.md](../REVISIT.md)

## Tomorrow

Continue solving 2–3 new problems and stay consistent after the break.
