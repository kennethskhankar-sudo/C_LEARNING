# Multi-Step C Language Calculator

An advanced, terminal-based calculator built in clean C code designed to process multi-number sequential equations safely and efficiently. This project was developed as part of a pre-university computer science acceleration track to master hardware memory behaviors and robust exception handling.

## 🚀 Key Architectural Features

- **Multi-Step Chaining (Dual-Phase Logic):** Unlike basic calculators, this system retains the result of the first mathematical calculation and dynamically carries it forward as an input base to process a third variable seamlessly.
- **Console Buffer Cleaning:** Implements strict whitespace stripping filters (`scanf(" %c")`) to vacuum trailing newline characters from the input stream, preventing skipped menus.
- **Defensive Error Handling:** Manually intercepts domain math violations (division by zero) before they hit the processor, protecting the application from abrupt runtime core dumps.
- **Jump Table Optimization:** Utilizes clean `switch` control blocks for instant hardware routing, completely avoiding long, slow execution chains.

## 💻 Tech Stack & Environment

- **Language:** C Language (C23 Compliant Syntax)
- **Compiler:** GCC
- **Development Rig:** M1 MacBook Air (macOS)
- **Editor:** Visual Studio Code

## 🛠️ How to Compile and Run Locally

Open your integrated Mac terminal window inside the project directory and execute the following commands:

```bash
# 1. Compile the source file into an optimized executable
gcc age.c -o calculator

# 2. Fire up the calculation engine
./calculator
```
