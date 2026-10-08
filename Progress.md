GOALS:

- [x] Implement Luhn validation
- [x] Test Luhn validation with different numbers
- [ ] Understand pseudo-random number generation
- [ ] Implement a pseudo-random number generator without `<random>`
- [ ] Generate a sequence of digits
- [ ] Calculate the Luhn check digit
- [ ] Generate complete Luhn-valid numbers
- [ ] Test generated numbers with the validator
- [ ] Improve the project structure


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