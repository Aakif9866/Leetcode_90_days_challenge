# Day 03 — LeetCode 90 Days Challenge

**Date:** 12 October 2026

## Problems Solved

1. Longest Consecutive Sequence
2. Top K Frequent Elements

## What I Learned

- Longest Consecutive Sequence: Put all numbers in a set, then only start counting a streak from a number that has no predecessor (`it - 1` not in the set). Walk forward (`val + 1`) while the next number exists, tracking streak length. Time O(n), space O(n).
- Top K Frequent Elements: Count frequencies with a map, push `{frequency, value}` pairs into a max-heap (priority_queue), then pop the top `k`. Time O(n log n), space O(n).

## Mistakes & Improvements

- Longest Consecutive Sequence: First attempt tried to force a DP solution and failed — had to step back and revisit the set-based approach.
- Longest Consecutive Sequence: While extending a streak, initially kept incrementing `val` incorrectly instead of checking `val + 1` in the set — fixed by advancing `val` only after confirming `val + 1` exists.
- Top K Frequent Elements: Straightforward once the map + max-heap idea clicked — no major issues this time.

## Self-Review

- Problems solved: 2
- Difficulty faced: Longest Consecutive Sequence took a couple of passes to get right after the failed DP attempt.
- What I understood better today:
  - Why starting a streak only from numbers without a predecessor avoids redundant work
  - Using a priority_queue of pairs to get top-k elements by frequency
- What I need to revise:
  - Longest Consecutive Sequence — want another clean pass to make the pattern stick
  - A frequency-bucket (O(n)) alternative to the heap-based Top K Frequent approach

## Tomorrow

Continue solving 2–3 new problems and revisit Longest Consecutive Sequence if time allows.
