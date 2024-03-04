# Random Number Generation in C

Random numbers play a significant role in various programming tasks, from simulations to games. C provides functionalities for generating random numbers through functions available in the C standard library.

## `rand()` Function

The `rand()` function, declared in the `<stdlib.h>` header, generates an integer between 0 and `RAND_MAX`, a constant also defined in `<stdlib.h>`.

```c
#include <stdlib.h>
#include <stdio.h>

int main() {
    printf("RAND_MAX: %d\n", RAND_MAX);
    return 0;
}
```

The value of `RAND_MAX` varies depending on the compiler. For instance:
- On GNU C compiler, `RAND_MAX` was: 2147483647
- On Visual C++ compiler, `RAND_MAX` was: 32767

## Understanding `RAND_MAX`

Standard C specifies that `RAND_MAX` must be at least 32767. However, the actual value can differ between compilers.

## Generating Random Numbers

The `rand()` function produces a random number within the range [0, `RAND_MAX`].

## Random1 Statement

To illustrate `rand()`, let’s develop a program simulating 20 rolls of a six-sided die and print the value of each roll. The function prototype for `rand()` is in `<stdlib.h>`.

## Random2 Statement

To demonstrate the likelihood of occurrence, let’s simulate 6000 rolls of a die, expecting each number from 1 to 6 approximately 1000 times.

## Random3 Statement

`rand()` generates pseudorandom numbers. Repeated calls to `rand()` produce a sequence that appears random but repeats with each program execution. This behavior aids in debugging. For varied sequences, we use `srand()` to seed `rand()` differently.

## Random4 Statement

When re-entering the same seed, the sequence repeats. To automate seeding, use `srand(time(NULL))`. This sets the seed based on the current time since January 1, 1970. The `time()` function resides in `<time.h>`.
