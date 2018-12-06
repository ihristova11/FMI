## Functions and recursion

1. Write a function that takes two numbers as parameters and returns their sum.
1. Write a function that takes one number and returns its absolute value.
1. Write a function that takes two numbers as parameters and returns the greater one.
1. Write a function that takes two integer numbers and returns if they are equal.
1. Write a function that takes three numbers - `a` , `b` and `epsilon`, and returns if the distance between `a` and `b` is less than `epsilon`.
1. Write a function that takes two numbers - `a` and `b` and returns `a^b`.
1. Write a function that takes one integer and returns it reversed. (e.g. `12345` becomes `54321`).
1. Write a function that takes three numbers and returns the smallest one of them.
1. Write a function that takes one number and returns if it is prime.
1. Write a function that takes three numbers and returns if the smallest one of them is prime.
1. Write a function that takes a char and returns if it is a digit.
1. Write a function that takes a char and returns if it is a letter.
1. Write a function that takes two bools and returns if they are both true.
1. Write a function that takes two numbers and returns if the first is divisible by the second.
1. Write a function that takes one integer `n` and returns the sum 1+2+...+(n-1)+n.
1. Write a function that takes two numbers - `a` and `b`, and returns the root of the equation `ax + b = 0`.
1. Write a function that takes four numbers - coordinates of two points in 2D - `x1`, `y1`, `x2`, `y2`, and returns the distance between `(x1,y1)` and `(x2,y2)`.
1. Write a function that takes six numbers - coordinates of three points in 2D, and returns if they lie on a straight line.
1. Write a function that takes tree numbers - coordinates of a vector in 3D, and returns the length of the vector.
1. Write a function that takes one integer `n` and returns `n!`.
1. Write a function that takes two integers - `n` and `k` and returns `n choose k`(binomial coefficient).
1. Write a program which asks the user for a number `n` and prints the first `n` numbers of Fibonacci.
1. Write a program which asks the user for a number `n` and prints the first `n` numbers of Tribonacci.


1. TODO: Karatsuba multiplication
1. TODO: GCD via Euclid


## Complex tasks
1. Tisho wants to play [Bulls and cows](https://en.wikipedia.org/wiki/Bulls_and_Cows), but he is confused by the rules, so he needs ouр help. We have to write a program that reads two integer numbers `A` and `B` in the range \[0,9999\] from the console and prints back the number of bulls and cows for these numbers. Numbers smaller than 1000 we should pad with zeros, for example 19 should be interpreted as 0019.

    | Example input | Example output |
    | ------------- | -------------- |
    | 1001 2010| 1 2 |
    | 0 1      | 3 0 |
    | 9988 1234| 0 0 |
    | 1010 1001| 2 2 |

1. Tisho really enjoyed our help and he needs us again. Now he asked us to do the following:
Given a number `A`- Tisho's suggestion for his opponent's number,`b`-number of bulls and `c`- number of cows, we have to print every number `N` that has `b` bulls and `c` cows with the number `A`.

1. Strahil and Pesho really love hamburgers. And they have a game, which they play in rounds - they try to eat as much as they can. And since it is very hard to overeat, they can't remember how many burgers they ate, so they write the result in a single number `B` with the following format:
The sum of the left digits of `B` gives the number of burgers Strahil ate, and the sum of the right digits gives the burger count for Pesho. For example 3489 means that Strahil ate 3 + 4 = 7 and Pesho ate 8 + 9 = 17.
If the number `B` has odd number of digits, then the one in the middle is shared between them both. For example 324 means 3 + 2 = 5 for Strahil and 2 + 4 = 6 for Pesho.
The number `B` will never be more than 9 digits long.
Your task is to help them decide who is better and print who won the game and how much burgers he ate. If they have equal results, print that the result is even.

    | Example input | Example output |
    | ------------ | -------------- |
    | 1001 | Even       |
    |  17  | Pesho 7    |
    | 9988 | Strahil 18 |
    | 578  | Pesho 15   |