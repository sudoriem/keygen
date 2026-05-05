## Simple Crackme – GDB Required

A minimal binary challenge that looks trivial at first glance but is designed to test your understanding of runtime analysis rather than brute force guessing.

### Description

You are given a compiled binary that asks for a key. If the correct key is provided, it reveals the flag. Otherwise, access is denied.

At face value, the program performs a straightforward string comparison. However, the real objective is not to guess the password but to extract it through analysis.

### Objective

Recover the correct key and obtain the flag.

### Hints

* Static reading alone is enough, but dynamic analysis makes it faster.
* Tools like `gdb`, `strings`, or disassemblers will expose everything you need.
* Focus on how the program handles input and where the comparison happens.

### Flag Format

`CTF{...}`

### Difficulty

Easy

### Tags

`reverse-engineering`, `gdb`, `binary-analysis`, `crackme`

### Author Note

This challenge reinforces a core principle: if a secret exists in a binary, it can be found.
