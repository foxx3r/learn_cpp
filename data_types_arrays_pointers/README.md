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

# Pointers

Every variable is a **memory** location, which has its **address** defined. 

That address can be accessed using the **ampersand (&)** operator (also called the address-of operator), which denotes an **address in memory**.

**For example:**

```cpp
int score = 5;
cout << &score << endl;

//Outputs "0x29fee8"
```

```diff
! This outputs the memory address, which stores the variable score.
```

A pointer is a variable, with the address of another variable as its value.

In C++, pointers help make certain tasks easier to perform. Other tasks, such as dynamic memory allocation, cannot be performed without using pointers.

All pointers share the same data type - a long **hexadecimal** number that represents a memory address.

```diff
! The only difference between pointers of different data types is the data type of the variable that the pointer points to.
```

A pointer is a variable, and like any other variable, it must be declared before you can work with it.

The **asterisk** sign is used to declare a pointer (the same asterisk that you use for multiplication), however, in this statement the asterisk is being used to designate a variable as a pointer.

Following are valid pointer declarations:

```cpp
int *ip;  // pointer to an integer
double *dp;   // pointer to a double
float *fp;  // pointer to a float
char *ch;  // pointer to a character
```

Just like with variables, we give the pointers a name and define the type, to which the pointer points to.

```diff
! The asterisk sign can be placed next to the data type, or the variable name, or in the middle.
```

# Using Pointers

Here, we assign the address of a variable to the pointer.

```cpp
int score = 5;
int *scorePtr;
scorePtr = &score;

cout << scorePtr << endl;

//Outputs "0x29fee8"
```

The code above declares a pointer to an integer called **scorePtr**, and assigns to it the memory location of the **score** variable using the ampersand (address-of) operator.

Now, scorePtr's value is the memory location of score.
