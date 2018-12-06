## Loops (for/while)

1. Write a program which asks the user for a number `n` and prints the first `n` rounds of the FizzBuzz game. FizzBuzz is a very simple child game. Two children take rounds naming numbers. If the number is divided by 3, the child is supposed to say 'Fizz'. If the number is divided by 5, the child is supposed to say 'Buzz'. If its divisible by both, the child's supposed to say 'FizzBuzz'. Otherwise, the child must say the number itself.
    - For `n=4`, the output must be

      ```
        1
        2
        Fizz
        4
      ```
    - For `n=17`, the output must be

      ```
        1
        2
        Fizz
        4
        Buzz
        Fizz
        7
        8
        Fizz
        Buzz
        11
        Fizz
        13
        14
        FizzBuzz
        16
        17
      ```


1. Write a program which asks the user for a number `n` and prints the first `n` numbers of Fibonacci.

1. Write a program which asks the user for a number and then prints its digits in reverse order (e.g. `1234560` becomes `654321`).

1. Write a program which asks the user for a number `n` and then expects the user to enter exactly `n` more numbers. Print the sum of all numbers.
    - Example input:

      ```
        4
        2
        -5
        3
        9
      ```
    - Expected output:
      ```
      9
      ```

1. Write a program which asks the user for the numbers `n` and `k` and prints the number of combinations C<sup>n</sup><sub>k</sub>. Remember that this number is given by the value of `n! / k!(n-k)!`.

1. Write a program which asks the user for a number smaller than 10 000 and then prints its roman numeral.

    | Example input | Example output |
    | ------------- | -------------- |
    | 8 | VIII |
    | 95 | XCV |

1. Write a program which asks the user for a number `n` and then prints whether `n` is a prime number or not.

1. Write a program which asks the user for a number `n` and then prints all prime numbers smaller than `n`.

1. Write a program which asks the user for a number `n` and then prints all prime factors of `n`

    | Example input | Example output |
    | ------------- | -------------- |
    | 65780         | 2.2.5.11.13.23 |

1. Write a program which asks the user for a number `n` and then prints a square with numbers with as many rows as `n`. Align all numbers in the triangle!
    - For `n=3`, the output must be

      ```
        1 2 3
        4 5 6
        7 8 9
      ```

    - For `n=4`, the output must be (note how all columns are aligned!)

      ```
        1  2  3  4
        5  6  7  8
        9  10 11 12
        13 14 15 16
      ```

1. Write a program which asks the user for a number `n` and then prints a triangle with numbers with as many rows as `n`. Align all numbers in the triangle!
    - For `n=4`, the output must be

      ```
        1
        2 3
        4 5 6
        7 8 9 10
      ```

    - For `n=7`, the output must be (note how all columns are aligned!)

      ```
        1
        2  3
        4  5  6
        7  8  9  10
        11 12 13 14 15
        16 17 18 19 20 21
        22 23 24 25 26 27 28
      ```

1. Write a program which asks the user for an **odd** number `n` and then prints a Christmas tree as wide as `n`. Print an error if `n` is not odd!
    - For `n=5`, the output must be:

      ```
          *
         ***
        *****
          *
      ```
    - For `n=7`, the output must be:

      ```
          *
         ***
        *****
       *******
          *
      ```

1. Write a program which asks the user for an **odd** number `n` and then prints a heart twice as wide as `n`. Print an error if `n` is not odd!
    - For `n=3`, the output must be:

      ```
       *   *
      *** ***
       *****
        ***
         *
      ```
    - For `n=5`, the output must be:

      ```
        *     *
       ***   ***
      ***** *****
       *********
        *******
         *****
          ***
           *
      ```

1. Write a program which asks the user for a number and then prints:
    - the same number in binary
    - the same number in hex
    - the same number in oct

1. Harder task - write a program which asks the user to **think** of a number between 0 and 1024 and tries to guess it by asking questions like *'Is your number bigger than 512?'*, etc. Extra question: how many steps would your program take in the worst case?