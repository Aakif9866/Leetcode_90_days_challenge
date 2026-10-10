# Day 02 — LeetCode 90 Days Challenge

**Date:** 10 October 2026

## Problems Solved

1. Valid Anagram
2. Two Sum
3. Group Anagrams
4. 3Sum (extra)

## What I Learned

- Valid Anagram: Sorting both strings and comparing them is a quick way to check for an anagram. Time O(n log n), space O(1) extra.
- Two Sum: One-pass hash map storing value : index, checking for target - nums[i] as you go. Time O(n), space O(n).
- Group Anagrams: Sort each string to get a canonical key, then bucket originals by that key in a map. Time O(n·k log k), space O(n·k).
- 3Sum: First tried a triple-nested-loop brute force, then rewrote it with sort + fix one index + two pointers on the rest. Brute is O(n³), the two-pointer version is O(n²).

## Mistakes & Improvements

- 3Sum brute force doesn't scale — it TLE'd on larger inputs. Rewrote it with the two-pointer approach after sorting.
- Kept both 3Sum attempts in the same file for comparison; since both classes are named `Solution`, only one can compile at a time.
- Fixed a couple of typos in my own code comments (previouly → previously, alein → alien, missing apostrophes in "I've").

## Self-Review

- Problems solved: 4 (including the 3Sum bonus)
- Difficulty faced: going from brute force to the two-pointer approach for 3Sum
- What I understood better today:
  - Hash map pattern for Two Sum and anagram-style problems
  - Sort + two-pointer pattern for triplet-sum problems
- What I need to revise:
  - Recognizing upfront when brute force won't scale instead of discovering it via TLE

## Tomorrow

Continue solving 2–3 new problems.
