# Luhn Number Generator

A beginner-friendly C++ project exploring the Luhn algorithm, number validation, and pseudo-random number generation.

## Current Features

- **Luhn validation:** Checks whether a number passes the Luhn checksum.
- **Pseudo-random digit generation:** Uses a Linear Congruential Generator (LCG) to generate a sequence of digits from 0 to 9.
- **Modular arithmetic:** Uses a recurrence relation to generate successive states.

## Project Structure

```text
luhn/
├── check.cpp
├── random_gen.cpp
├── README.md
└── progress.md
```

- `check.cpp` — validates numbers using the Luhn algorithm.
- `random_gen.cpp` — generates pseudo-random digits using an LCG.
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

## Current Limitations

- The generator is experimental and has not been statistically tested.
- The seed and intermediate arithmetic types still need to be reviewed for overflow and portability.
- Generating digits does not automatically produce a Luhn-valid number.
- The validator and generator have not yet been integrated into one program.

## Planned Improvements

- Integrate the digit generator with the Luhn validator.
- Generate a number body and calculate its Luhn check digit.
- Test generated numbers against the validator.
- Investigate the generator's period and statistical quality.

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

These commands assume each source file has its own valid `main()` function.
