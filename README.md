# Luhn Number Generator

A beginner-friendly C++ project exploring the Luhn algorithm, number validation, and pseudo-random number generation.

## Current Features

- **Luhn validation:** Checks whether a number passes the Luhn checksum.
- **Pseudo-random digit generation:** Uses a Linear Congruential Generator (LCG) to generate a sequence of digits from 0 to 9.
- **Modular arithmetic:** Uses a recurrence relation to generate successive states.
- **Luhn check-digit calculation:** Calculates the check digit needed to make a number pass the Luhn checksum.
- **Number generation:** Generates a number using the pseudo-random digit generator and appends the check digit.

## Project Structure

```text
luhn/
├── check.cpp
├── random_gen.cpp
├── luhn_gen.cpp
├── README.md
└── progress.md
```

- `check.cpp` — validates numbers using the Luhn algorithm and calculates the check digit.
- `random_gen.cpp` — generates pseudo-random digits using an LCG.
- `luhn_gen.cpp` — generates a number and appends its Luhn check digit.
- `progress.md` — tracks development progress and upcoming tasks.

## How It Works

The random digit generator uses the recurrence relation:

\[
x_{n+1}=(ax_n+c)\bmod m
\]

Currently, the parameters are:

- Multiplier: `a = 17`
- Increment: `c = 5`
- Modulus: `m = 4294967296` (\(2^{32}\))

The initial seed is obtained from the system clock. Each generated state is reduced modulo 10 to produce a decimal digit.

The number generator uses these digits to build a number and calculates the final Luhn check digit before appending it.

## Planned Improvements

- Test generated numbers against the validator.
- Try generating numbers of different lengths.
- Investigate the generator's period and experiment with its parameters.
- Improve the project structure by separating function declarations and implementations.

## Building

Compile the digit generator:

```bash
g++ -std=c++17 random_gen.cpp -o random_gen
./random_gen
```

Compile the validator separately:

```bash
g++ -std=c++17 check.cpp -o check
./check
```

Compile the number generator:

```bash
g++ -std=c++17 luhn_gen.cpp -o luhn_gen
./luhn_gen
```

The commands assume each file is set up for standalone compilation. The current `luhn_gen.cpp` includes the other `.cpp` files directly.
