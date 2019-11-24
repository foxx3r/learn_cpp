# Data Types

The operating system allocates memory and selects what will be stored in the reserved memory based on the variable's **data type**.

The data type defines the proper use of an identifier, what kind of data can be stored, and which types of operations can be performed.

```diff
! There are a number of built-in types in C++.
```

# Expressions

The examples below show legal and illegal C++ expressions.

```cpp
55+15 //  legal C++ expression
//Both operands of the + operator are integers

55 + "John" // illegal
// The + operator is not defined for integer and string
```

```diff
! You can implement some logic for illegal expressions by overloading operators.
```

# Numeric Data Types

Numeric data types include:

**Integers** (whole numbers), such as -7, 42.

**Floating point** numbers, such as 3.14, -42.67.

# Strings & Characters

A string is composed of numbers, characters, or symbols. String literals are placed in **double quotation** marks; some examples are "Hello", "My name is David", and similar.

**Characters** are single letters or symbols, and must be enclosed between **single quotes**, like 'a', 'b', etc.

```diff
! In C++, single quotation marks indicate a character; double quotes create a string literal. While 'a' is a single a character literal, "a" is a string literal.
```

# Booleans

The Boolean data type returns just two possible values: **true** (1) and **false** (0).

```diff
! Conditional expressions are an example of Boolean data type.
```
