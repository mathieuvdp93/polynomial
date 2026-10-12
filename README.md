# Polynomial

> display value of the polynomial of user entry

**Date:** 11/10/2026
**Tags:** fgets, horner's rule, strchr, strtol

## 🎯 Goal

What I wanted to learn: 
- use fgets and check for ints, instead of scanf

## 💡 What I Learned

- i can set the count of how many chars fgets reads, but if user enter more chars they don't dissappear, they stay in the stream for the next thing that reads/uses that stream. example: fgets(user_input, 5, stdin); if user enters 7 chars (1234567) user_input would contain 1234'\0' if i called it again fgets(user_input2, 5, stdin) user_input2 would start with the leftover 567 from the previous entry before it reads a new entry.
- so point above makes it clear that it is necessary to flush the stream of leftover input.
- learned how to use strtol to check the input validity
- learned how and what checks to do with strtol
- the ERANGE check alone is not enough the check if the number entered by the user is too large or small, the user could enter a number that is more chars than the allocated buffer but not enough to be out of the range of a long, example: if buffer is 5 chars long fgets will cut it off at 4chars + '\0' so the user could enter a 25 char long number but fgets would cut it off at 4 chars so the  ERANGE check would never be triggered and the input would be "valid". so before strtol check with strchr(buf, '\n') == NULL to see if the buffer was read completely.
- used ckd_mul ckd_add from the stdckdint library (c23 only) to check if the polynomial would overflow during the calculation. still don't understand very well how this function works.

## 🐛 Mistakes & Fixes

- **Problem:**  
  **Fix:** 

## ❓ Open Questions

- look into ways to check for overflow, because i used one now but don't understand it very well.
