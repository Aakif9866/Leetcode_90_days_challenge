# Day 06 — LeetCode 90 Days Challenge

**Date:** 20 October 2026

## Problems Solved

1. Sort Colors
2. 3Sum — already solved earlier (see [../Day-02/04-3sum.cpp](../Day-02/04-3sum.cpp)); counted today as a re-do/revision, no new file

## What I Learned

- **Sort Colors:** the Dutch National Flag approach sorts 0s, 1s and 2s in one pass with three pointers (`l`, `m`, `h`). `nums[m] == 0` → swap with `l`, advance both; `1` → advance `m`; `2` → swap with `h`, shrink `h` without advancing `m` (the swapped-in value is unchecked). Time O(n), space O(1), in place.
- **3Sum:** revisited the sort + fix one index + two pointers approach from Day 2 (O(n²)).

## Mistakes & Improvements

- Sort Colors: the pointer comments in the code are copy-pasted ("m -> start pointers of 0s" three times). `l` is the next slot for 0, `m` is the current element, `h` is the next slot for 2 — worth fixing.
- Why `m` isn't advanced after swapping with `h`: easy to get wrong; remember the swapped-in value hasn't been classified yet.

## Self-Review

- Problems solved: 1 new (Sort Colors) + 1 repeat (3Sum)
- Difficulty faced: None noted.
- What I understood better today:
  - Three-pointer partitioning as an extension of two pointers
- What I need to revise:
  - Nothing flagged for [../REVISIT.md](../REVISIT.md)

## Tomorrow

Day 7 is a revision day — work through the list in [../Day-07/extra_questions.md](../Day-07/extra_questions.md).
