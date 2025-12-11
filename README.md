# Multi-Paradigm Statistics Calculator  

This repository contains three implementations of a basic statistics calculator (mean, median, and mode) using three distinct programming paradigms across C, OCaml, and Python.

---

## Features
- Computes **Mean**
- Computes **Median**
- Computes **Mode**
- Demonstrates **Procedural (C)**, **Functional (OCaml)**, and **Object-Oriented (Python)** paradigms.

---

# Languages & Paradigms

## C – Procedural  
- Implemented with functions and arrays  
- Manual memory handling  
- Sorting and frequency counting implemented manually  

File: `C/stats.c`  

---

## OCaml – Functional  
- Uses immutable lists  
- Uses higher-order functions (`List.fold_left`, `List.sort`)  
- No mutable state  

File: `OCaml/stats.ml`

---

## Python – Object-Oriented  
- `StatisticsCalculator` class  
- Methods: `.mean()`, `.median()`, `.mode()`  
- Uses Python lists and dictionaries  

File: `Python/stats.py`

---

# **How to Run**

## C
```bash
gcc stats.c -o stats
./stats
```
## OCaml
```bash
ocamlc stats.ml -o stats
./stats
```
## Python
```bash
python3 stats.py
```
