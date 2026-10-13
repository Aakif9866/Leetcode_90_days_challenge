# Day 04 — LeetCode 90 Days Challenge

**Date:** 13 October 2026

## Problems Solved

1. Subarray Sum Equals K

## What I Learned

- First instinct was to treat it as a classic two-pointer / sliding window problem (shrink the window whenever `sum > k`). This looks right at a glance but silently breaks once negative numbers are in the array, since shrinking the window on `sum > k` assumes the sum only grows as the window extends.
- The working approach is prefix sums + hash map: keep a running `sum`, and a map of how many times each prefix sum has occurred. At each step, the number of valid subarrays ending here equals `mp[sum - k]` (how many earlier prefixes, if removed, would leave exactly `k`). `mp[0] = 1` seeds the case where a prefix itself equals `k`.
- Time O(n), space O(n).

## Mistakes & Improvements

- Wrote a sliding-window solution first since the problem resembled past two-pointer problems — wrong approach for this problem because of negative elements, which invalidate the shrink-the-window logic.
- Marked the prefix-sum + hash map solution as shaky in my own comments and flagged it to revisit — I can produce the answer but want to rewatch the TUF explanation until the `sum - k` logic feels intuitive rather than memorized.

## Self-Review

- Problems solved: 1
- Difficulty faced: Recognizing why two-pointer doesn't generalize to arrays with negative numbers, and internalizing the prefix-sum/hash-map trick well enough to derive it from scratch next time.
- What I understood better today:
  - Why sliding window needs a monotonic (non-negative) sum to work
  - The prefix-sum-frequency-map pattern for counting subarrays with a target sum
- What I need to revise:
  - Subarray Sum Equals K — flagged for revisit, see [../REVISIT.md](../REVISIT.md)

## Tomorrow

Continue solving 2–3 new problems; revisit Subarray Sum Equals K from the list when doing a revision pass.
