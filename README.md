# MultiParadigmStats

This project demonstrates how the same problem—calculating basic statistics (mean, median, and mode) on a list of integers—can be solved using three different programming paradigms:

- **Procedural Programming** in C  
- **Functional Programming** in OCaml  
- **Object-Oriented Programming** in Python

## Problem

Given a list of integers, compute:
- **Mean** (average)
- **Median** (middle value)
- **Mode** (most frequent value)

## Languages Used

- `C`: Manual implementation using arrays and loops.
- `OCaml`: Pure functional style using list operations like `map`, `fold`, and `sort`.
- `Python`: Class-based design using methods and built-in data structures like `Counter`.

## Folder Structure

```
MultiParadigmStats/
├── C/
│   └── stats.c
├── OCaml/
│   └── stats.ml
├── Python/
│   └── statistics_calculator.py
```

## How to Run

### C (Requires gcc):
```bash
cd C
gcc stats.c -o stats
./stats
```

### OCaml (Requires ocaml or utop):
```bash
cd OCaml
ocaml stats.ml
```

### Python:
```bash
cd Python
python3 statistics_calculator.py
```
