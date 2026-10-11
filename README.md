# Polynomial

> display value of the polynomial of user entry

**Date:** 11/10/2026
**Tags:** fgets, horner's rule

## 🎯 Goal

What I wanted to learn: 
- use fgets and check for ints, instead of scanf

## 💡 What I Learned

- i can set the count of how many chars fgets reads, but if user enter more chars they don't dissappear, they stay in the stream for the next thing that reads/uses that stream. example: fgets(user_input, 5, stdin); if user enters 7 chars (1234567) user_input would contain 1234'\0' if i called it again fgets(user_input2, 5, stdin) user_input2 would start with the leftover 567 from the previous entry before it reads a new entry.
- so point above makes it clear that it is necessary to flush the stream of leftover input.

## 🐛 Mistakes & Fixes

- **Problem:**  
  **Fix:** 

## ❓ Open Questions

- 
