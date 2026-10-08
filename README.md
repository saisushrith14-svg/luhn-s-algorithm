# Luhn Number Generator

A C++ project built from scratch to understand the Luhn algorithm and
pseudo-random number generation.

The project will eventually generate numbers that pass the Luhn
validation check.

## Goal

The goal of this project is to understand:

- The Luhn algorithm
- Checksum validation
- Digit manipulation
- Pseudo-random number generation
- Generating a valid check digit
- Basic Git and project development workflow

## Current Features

### Luhn Validator

`check.cpp` takes a number as input and checks whether it passes the
Luhn algorithm.

The program:

1. Reads a number from the user.
2. Processes the digits from right to left.
3. Doubles every second digit.
4. Reduces doubled values greater than 9.
5. Calculates the checksum.
6. Checks whether the checksum is divisible by 10.

If the checksum is divisible by 10, the number is considered valid.

## Project Structure

```text
luhn/
├── check.cpp
├── generator.cpp
├── README.md
└── progress.md