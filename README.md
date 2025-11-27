## Functional Requirements
1. Add a New Investment

User enters:

Investment name (single-word string)

Amount invested (float)

A new investment is stored in the portfolio array.

Maximum of 50 investments (as defined by #define MAX 50).

2. View Current Portfolio

Displays a list of all saved investments.

Each entry shows:

Index number

Investment name

Dollar amount (formatted to two decimals)

3. Calculate Total Value

Sums up all investment amounts in the portfolio.

Displays the total value formatted as currency.

4. Exit Program

Ends the program loop and prints a goodbye message.

5. Input Validation

Checks menu options for validity.

Prevents adding investments once the maximum limit is reached.

## Features

- Simple, text-based interface

- Uses C struct to store investment data

- Supports up to 50 investment entries

- Live total calculation

- Lightweight and runs in any standard C environment

## How to Run the Program
1. Save the Code

Save the program to a file, e.g.:

portfolio.c

2. Compile the Code

Use a C compiler such as gcc:

gcc portfolio.c -o portfolio

3. Run the Program
./portfolio

## Abstract

This program is a simple console-based Investment Portfolio Manager written in C. It allows users to record different investments, view the current portfolio, and calculate the total invested value. It demonstrates basic C concepts such as structures, arrays, loops, user input, and menu-driven programs.

## summary
     The application maintains a list of investments using a struct and a fixed-size array. Users can interact with a menu to add new investments, display all stored investments, or compute the total amount invested. The system runs until the user chooses to exit.
