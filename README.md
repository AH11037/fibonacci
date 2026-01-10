# Fibonacci N<sup>th</sup> term finder
This is my first C++ program. This is also a proof-of-concept.

A C++ program that calculates the N<sup>th</sup> Fibonacci number, including values far too large for standard numeric types to handle. Each term is instead stored as a string (no, I'm not a masochist), and a custom digit-by-digit addition function avoids integer overflow without external libraries.

The program also reports how long the computation took, so you have ample time to question your existence.
## Screenshot
<img width="1903" height="425" alt="image" src="https://github.com/user-attachments/assets/826d2ca8-0eb9-4f23-98db-6db0db347e7f" /></br>
In this example, I computed the 10,000<sup>th</sup> Fibonacci number.
## Downloading & Running
1. Download the `.exe` from `Releases`
2. Double-click to run it
3. Enter an integer (`n`) when prompted
    * There is no prompt (I kinda forgot) so instead type the number when the cursor begins flashing on the terminal
4. Receive the corresponding Fibonacci number along with the computation time
## How it works
* The program starts the calculation with 2 numbers
    * F(0) = 0
    * F(1) = 1
* Iteratively computes terms up to `n` using a custom `adder()` function that: 
    * Adds numbers digit-by-digit as strings
    * Handles carry from previous digits
* This design avoids integer overflow and keeps the implementation straightforward
## What I Learned
* C++ in general
* Implementing arbitrary-precision arithmetic without external libraries
* Efficient string manipulation in C++
* Writing iterative algorithms that scale predictably
* Measuring runtime and interpreting results
* My immense stupidity at choosing strings as a substitute for integers
## Limitations
* Runtime grows linearly with `n`
    * If you put `1,000,000,000` as `n`, pack a meal & don't be shocked if it takes 4 months to calculate
* Very large outputs may exceed terminal width
* No input validation
    * You put in text, it crashes
    * You put in a negative number, it will output 1
    * You look at it the wrong way, it crashes
## Future improvements
* Implement faster Fibonacci algorithms
    * Already done, see <a href = "https://github.com/AH11037/fibonacciFAST">here</a>
* Add input validation and error handling
* Improve output formatting
