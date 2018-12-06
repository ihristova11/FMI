## Matrices

1. Write a program which asks the user to enter `n` and `k` - the rows and columns count of a matrix. Then the program should ask for `n*k` numbers and fill a 2D array(matrix) with the given values.

1. Write a function which takes a matrix and prints it on the console in the appropriate format.

1. Write a function which takes a matrix and prints it on the console `transposed`.

1. Write a program which reads a matrix from the console, then prints the `sum` of `each row`.

1. Write a program which reads a square matrix from the console and prints the `sum` of the `main diagonal elements`.

1. Write a program which reads a matrix from the console and prints the `average` of `each row`.

1. Write a program which reads a matrix from the console and prints the elements of the 2x2 submatrix in it that has the `maximum sum`.
Example:

      ```    
      1 2 3 -5 
      2 7 9 11 
      9 3 1 7  
      ```
    Results in  `9 11 1 7 `

1. Write a program which asks the user for a number `n` and generates (also prints) 4 `nxn` matrices in the pattern of the given example:


    - For `n=4` (note how all the numbers are aligned!)

    a/ 
     ```
      1  5  9 13
      2  6 10 14
      3  7 11 15
      4  8 12 16
      ```
    b/ 
      ```
      1  8  9 16
      2  7 10 15
      3  6 11 14
      4  5 12 13
      ```
    
    c/
      ```
      7 11 14 16
      4  8 12 15
      2  5  9 13
      1  3  6 10
      ```
    
    d/
      ```
      1  2  3  4
      12 13 14 5
      11 16 15 6
      10 9  8  7
      ```
1. [Game of Life](http://en.wikipedia.org/wiki/Conway's_Game_of_Life) is a game for zero :confused: players and consists of a surface, devided in cells. Every cell is [dead or alive](https://www.youtube.com/watch?v=SRvCvsRp5ho). The game is played in turns. Every turn depends on the state of the game in the previous turn following these rules:

  - Every cell with less than two living neighours dies(of loneliness).
  - Every living cell with more than three living neighbours dies(too crowded).
  - Evey living cell with two or three living neighbours stays alive for the next turn.
  - Every dead cell with exactly three living neighbours comes back to live.
  
  Your task is to simulate this game. The initial state of the surface should be hard-coded. On every turn the state of the     cells should be written to the console: 'X' for a living cell, ' ' for a dead cell.

10. How many `islands and peninsulas` are there on the "map"?

You are given a numbers `n`, `m` and a `nxm` matrix that consists of numbers `0 through 9`. Your task is to create a program that says `how many` islands and peninsulas are there. These are the 'rules':

  - 0 is water
  - 1-9 is the height of the ground
  - Islands are pieces of land connected by different grounds.
  Example of an island:
   ```
   000000000000
   000001100000
   000012321000
   000011210000
   000000100000
   000000000000
   ```
  - Peninsulas are like islands but on the edge of the 'map'.
  Example of a peninsula:
   ```
   984321000
   544200000
   321000000
   100000000
   ```
  - Note that we don't actually care if the land is an island or peninsula. We care about the number of different connected lands.
   
Example input:
```
10 5

4321000020
3210000010
2100000000
2100000000
1000010001
```
Output should be:
```4```
