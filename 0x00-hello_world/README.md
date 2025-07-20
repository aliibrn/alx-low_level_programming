# 🚀 ALX C Programming - Hello, World

![ALX Project](https://user-images.githubusercontent.com/105258746/189208480-2fccc610-22af-4ed9-8928-2ebf0e99b002.png)

## 📋 Project Overview

Welcome to **0x00. C - Hello, World** - your gateway to C programming! This introductory project from the ALX Africa curriculum covers fundamental compilation concepts and basic C programming constructs.

## ⚙️ Setup Instructions

> **Important:** When creating scripts for this project:
> 1. Start each script file with the shebang: `#!/bin/bash`
> 2. Add your command/solution on the second line
> 3. Make scripts executable: `chmod u+x filename`

---

## 📁 Project Tasks

### Task 0: Preprocessor Script
**File:** `0-preprocessor`

Creates a script that processes a C file through the preprocessor stage and saves the output.

```bash
gcc -E $CFILE -o c
```

### Task 1: Compilation Script
**File:** `1-compiler`

Develops a script that compiles C source code without linking.

```bash
gcc -c $CFILE
```

### Task 2: Assembly Generator
**File:** `2-assembler`

Builds a script that converts C code into assembly language and saves it to a file.

```bash
gcc $CFILE -S
```

### Task 3: Executable Creator
**File:** `3-name`

Constructs a script that compiles C code and generates an executable named `cisfun`.

```bash
gcc $CFILE -o cisfun
```

### Task 4: Output with puts()
**File:** `4-puts.c`

Implements a C program using `puts()` to display:
> "Programming is like building a multilingual puzzle"

*Check the source file for implementation details.*

### Task 5: Formatted Output
**File:** `5-printf.c`

Creates a C program using `printf()` to output:
> "with proper grammar, but the outcome is a piece of art,"

*Review the source file for the complete code.*

### Task 6: Data Type Sizes
**File:** `6-size.c`

Develops a program that displays the memory sizes of various data types on the current system.

*Examine the source file for the implementation.*

### Task 7: Intel Assembly (Advanced)
**File:** `100-intel`

Advanced script that generates assembly code using Intel syntax format and saves it to an output file.

### Task 8: Error Output (Advanced)
**File:** `101-quote.c`

Advanced C program that outputs to standard error:
> "and that piece of art is useful" - Dora Korpar, 2015-10-19

---

## 🎯 Learning Objectives

By completing this project, you will understand:
- C compilation process stages
- Difference between compilation and linking
- How to use GCC compiler options
- Basic C program structure
- Standard output vs standard error
- Assembly language basics

## 🛠️ Tools & Requirements

- **Compiler:** GCC
- **Operating System:** Linux (Ubuntu recommended)
- **Text Editor:** Any (vi/vim, emacs, nano, etc.)
- **Shell:** Bash

---

*Happy coding! 🎉*
