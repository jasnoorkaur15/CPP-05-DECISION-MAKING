# 🧠 C++ Experiment 5: Decision-Making Statements (If-Else, Nested If, Switch Case)

## 🎯 Aim

- Write C++ programs using `if-else`, `nested if` statements, and `switch-case`  
- Handle **multiple conditions** and flow control using decision-making logic

---

## 🎓 Objectives

- ✅ Learn how to use `if-else` and `nested if` in real-world problems  
- ✅ Understand how `switch-case` works  
- ✅ Use `break` and `exit(0)` correctly to control program flow  

---

## 📖 Theory

### 🔹 If-Else Statement

Used when we want to check if a **condition is true or false**.

**Syntax:**
```cpp
if (condition) {
    // Code runs if condition is true
} else {
    // Code runs if condition is false
}
```

---

### 🔹 Nested If Statement

When one `if` is written **inside another**, it's a **nested if**. Useful for **multiple condition checks**.

**Syntax:**
```cpp
if (condition1) {
    if (condition2) {
        // Code if condition2 is also true
    } else {
        // Code if condition2 is false
    }
} else {
    // Code if condition1 is false
}
```
### 🔹 Switch Case Statement

Used to choose between **multiple options** using one input variable.  
It avoids writing multiple `if-else if` chains.

- Use `break` to stop further execution once a match is found
- If no match is found, the `default` block runs

**Syntax:**
```cpp
switch (expression) {
    case value1:
        // Code block 
        break;

    case value2:
        // Code block
        break;

    // More cases...

    default:
        // Code if no case matches
}
```

---

## 🧠 Concepts Used

- `if-else`  
- `nested if`  
- `switch-case`  
- `break`  
- `exit(0)`

---

## 🖥️ Sample Programs & Outputs

### ✅ Check if Number is Even or Odd
```
Enter any number: -23  
The number is negative.
```

---

### 🔺 Finding Greatest of 3 Numbers
```
Enter 3 numbers: 2 8 0  
8 is greatest

Enter 3 numbers: 0 1 1  
1 is greatest

Enter 3 numbers: -4 5 4  
5 is greatest
```

---

### 🧮 Calculator (Switch Case)
```
Available operations on the calculator:  
A) Addition  
B) Subtraction  
C) Multiplication  
D) Division  

Enter operation you want to do (A, B, C, D): C  
Enter num 1: 89  
Enter num 2: 55  

Multiplication of the given numbers is 4895
```

---

### 🔤 Vowel or Consonant Checker
```
Enter the alphabet: d  
It is a consonant.
```

---

### 📅 Day of the Week
```
Enter number to know the day of the week (1 to 7): 6  
Its Saturday...woohoo!
```
