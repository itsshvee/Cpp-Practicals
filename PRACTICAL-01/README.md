# Practical 01: GitHub Setup and C++ Fundamentals

**Course:** B.Tech (Artificial Intelligence & Data Science) — 2nd Year  
**Subject:** Object Oriented Programming (C++)  
**Lab Practical:** Practical 01  

---

## 🎯 Aim
To practise basic C++ syntax (data types, constants, variables, operators, and input/output) and learn how to track code changes using Git and GitHub.

---

## 📋 Problem Statement / Question
Create a GitHub repository and write a C++ program that demonstrates data types, constants, variables, operators, and input/output.

---

## 💡 Concepts Demonstrated in Code

| Concept | Implementation in `practical01.cpp` |
|---|---|
| **Data Types & Variables** | `string` (`studentName`), `int` (`rollNumber`), `float` (`marks1`, `marks2`, `marks3`, `totalMarks`, `averageMarks`), `char` (`grade`), `bool` (`isPassed`) |
| **Constants** | `const int TOTAL_SUBJECTS = 3;`, `const int MAX_MARKS_PER_SUBJECT = 100;`, `const float PASSING_MARK = 40.0f;` |
| **Arithmetic Operators** | `+` (calculating total marks), `/` (calculating average percentage) |
| **Relational Operators** | `>=`, `<` (used for passing checks and letter grade assignment) |
| **Logical Operators** | `&&` (ensuring student passed each subject individually AND average >= 40%) |
| **Input & Output (I/O)** | `std::cin` & `getline` for interactive user input, `std::cout` with `std::fixed` and `std::setprecision` for formatted output |

---

## ⚙️ How to Compile and Run

### Prerequisites
- Modern C++ compiler (`g++` or `clang++`).

### Compilation
```bash
# macOS (clang++)
clang++ -std=c++17 practical01.cpp -o practical01

# Linux / Windows MinGW (g++)
g++ -std=c++17 practical01.cpp -o practical01
```

### Execution
```bash
./practical01
```

Or run with test input file:
```bash
./practical01 < sample_input.txt
```

---

## 📝 Sample Input & Output

### Sample Input (`sample_input.txt`)
```text
Shravanee Potdar
101
88.5
92.0
85.5
```

### Sample Output (`sample_output.txt`)
```text
========================================
  Student Performance Evaluation System  
========================================
Enter Student Name: Shravanee Potdar
Enter Roll Number: 101
Enter marks for Subject 1 (out of 100): 88.5
Enter marks for Subject 2 (out of 100): 92.0
Enter marks for Subject 3 (out of 100): 85.5

----------------------------------------
             REPORT CARD                
----------------------------------------
Student Name : Shravanee Potdar
Roll Number  : 101
Subject 1    : 88.50 / 100
Subject 2    : 92.00 / 100
Subject 3    : 85.50 / 100
Total Marks  : 266.00 / 300
Average      : 88.67%
Grade        : A
Result       : PASSED
----------------------------------------
```

---

## 🔬 Result / Observation (For Lab Manual)
> *The basic syntax of C++, including primitive data types (`int`, `float`, `char`, `bool`, `string`), constants (`const`), standard console I/O streams (`cin`, `cout`), arithmetic operators (`+`, `/`), relational operators (`>=`, `<`), and logical operators (`&&`), was implemented and validated successfully through a student evaluation program. The project was version-controlled and pushed to GitHub.*
