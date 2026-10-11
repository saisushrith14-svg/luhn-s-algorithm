# Project Progress

## GOALS

- [x] Implement Luhn validation
- [x] Test Luhn validation with different numbers
- [x] Understand pseudo-random number generation
- [x] Implement a pseudo-random number generator without `<random>`
- [x] Generate a sequence of digits
- [ ] Calculate the Luhn check digit
- [ ] Generate complete Luhn-valid numbers
- [ ] Test generated numbers with the validator
- [ ] Improve the project structure

---

## Commit 1 — Luhn Validator

### Status

Completed

### What I did

- Created `check.cpp`
- Implemented the Luhn algorithm
- Processed digits from right to left
- Implemented alternating double/keep logic
- Handled doubled digits greater than 9
- Calculated the final checksum
- Checked whether the checksum is divisible by 10

### Luhn Logic

For each digit, starting from the right:

- Keep the rightmost digit unchanged.
- Double every second digit.
- If the doubled value is greater than 9, subtract 9.
- Add all transformed digits.
- Check whether the final sum is divisible by 10.

### Testing

Tested the program with:

```text
8273123273520569
```

---

## Commit 2 — Initial Pseudo-Random Digit Generator

### Status

Initial implementation completed

### What I did

- Created `random_gen.cpp`
- Explored `std::chrono` to obtain a time-based seed
- Implemented a Linear Congruential Generator (LCG)
- Used fixed parameters for the generator
- Generated a sequence of states using the LCG recurrence
- Converted the generated states into decimal digits using modulo 10
- Printed the generated digits

### LCG Logic

The generator uses the recurrence relation:

[
x\_{n+1}=(ax_n+c)\bmod m
]

Current parameters:

- Multiplier: `a = 17`
- Increment: `c = 5`
- Modulus: `m = 4294967296` ((2^{32}))

The initial seed is obtained from the system clock. Each generated state is reduced modulo 10 to produce a decimal digit.


## Commit 3 — Luhn Number Generator

### Status

implementation completed

### What I did

- Created `luhn_gen.cpp`
- Reused the pseudo-random digit generator
- Built a number from the generated digits
- Implemented check-digit calculation using the Luhn checksum
- Appended the calculated check digit to the generated number

* [x] Verify generated numbers using the Luhn validator
* [x] Test different requested lengths
