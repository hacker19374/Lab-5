ECCS 1611 – Introductory Programming Lab 5 – Iteration 

## **IMPORTANT** 

- Read this entire document before coding. 

- **Take out your duck.** If you left it at home or it has gone missing, see us at the start of lab — we have spares. 

- **<mark>Every problem in this lab asks you to predict what your program will print before you run it. Predictions are never marked right or wrong. A prediction that misses is information, and it is worth a journal entry.</mark>** 

# **Your Duck and Your Journal, Week Five** 

**The Duck-First Rule:** before asking your instructor, a TA, or a neighbor for help, explain the problem to your duck first and write one line in your journal about what you found. This is a step in the process, not a barrier — if you are stuck, frustrated, or out of ideas, come get help regardless of whether the duck cooperated. 

**Loops and your duck.** A loop runs the same lines many times, so explaining each line once is not enough this week. For every loop, tell your duck three things: what the loop variable is on the _first_ pass, what it is on the _last_ pass, and what makes the loop stop. Most loop bugs live in one of those three answers. 

Unless otherwise instructed, for each laboratory problem, keep adding to your debugging journal (same Google Doc, same three fields plus the problem name as the heading label): 

1. What I expected the program to do 

2. What it actually did 

3. What assumption(s) of mine, if any, turned out to be wrong 

Record every error you hit in each problem below, including the ones you fixed in ten seconds. Entries are checked for completion and effort only, never for content. 

# **Before You Start — Demos and Repositories** 

This applies to every problem in this lab. Read it **_<u>now</u>_** <u>, not at the end.</u> 

- **Demo before you continue.** Demonstrate each working program to your instructor or a lab assistant, and get the signature on your checksheet, **before** you begin the next problem. The one exception is P51, which has no demo. 

- **Then push it.** After each demo (or, for P5-1, when you finish it), create a new GitHub repository for that problem, commit your .cpp file, and push. One repository per program — do not put several problems in one repository. 

- Name repositories to match the problem number: **P5-1, P5-2, P5-3, P5-4, and P5-5** . Use hyphens and no spaces — GitHub silently rewrites spaces, and then the name on your checksheet will not be the name on your account. 

- Reminder: For each program, you have to make a new project in your Visual Studio IDE. 

- Reminder: If a problem provides you with an example run, then your program must match exactly what you see, character by character, unless otherwise instructed. 

**P5-1** Make a new project named P5-1, and type in the code below exactly as shown. The program adds 0.1 to a running total `PASSES` times, then compares the total with `PASSES / 10.0` , which is what arithmetic says it should be. Predict what each result will be by filling in the first column of the P5-1 section of your checksheet, then run the program six times, initially having PASSES set to 10, then increasing that value by an order of magnitude. Make sure to record every digit displayed. When done, push the code to your P5-1 repository. 

```
#include<iostream>
#include<iomanip>
usingnamespace std;
int main(void) {
constint PASSES = 10;
double total = 0.0;
double expected = PASSES / 10.0;
for (int pass = 1; pass <= PASSES; pass++) {
        total = total + 0.1;
    }
    cout << setprecision(17);
    cout <<"Total after "<< PASSES <<" passes: "<< total << endl;
    cout <<"Expected: "<< expected << endl;
if (total == expected) {
        cout <<"Equal? yes"<< endl;
    }
else {
        cout <<"Equal? no"<< endl;
    }
    cout <<"Off by: "<< total - expected << endl;
return 0;
}
```

- **REMINDER: Predict before you run.** On your checksheet, record your expected outputs with `PASSES` set to 10, then 100, and so on up to 1000000. 

- **Reading the output.** `cout` normally shows only six significant digits, so the first line can look perfect. `setprecision( 17 )` asks for every digit on the lines after it. A value printed as `-3.2e-9` means −3.2 × 10<sup>−9</sup> : the first nonzero digit is nine places to the right of the decimal point. 

- **This code will have an error in it: where did the error come from?** Without using the Internet to search for an answer, record what you think the reason is on your checksheet. 

- **Journal it.** Write a journal entry for this program. 

- **P5-2** Write a program that reads a positive integer `n` from the user and then uses four separate **`for`** loops to: 

   - (a) print the integers counting up from 1 to `n` , all on one line; 

   - (b) print the integers counting down from `n` to 1, all on one line; 

   - (c) print the odd integers from 1 up to `n` , all on one line; and 

   - (d) add up the integers from 1 through `n` and print the sum. 

�(���) as a check on your loop. � 

After the sum, print the value of the formula 

**<mark>Plan the headers before you write them by filling out the checksheet at this time.</mark>** Every **`for`** loop header has three parts: an initialization, a condition, and an update. On your checksheet, fill in all three parts for each of the four loops _before_ you write any code. Notice which parts change from one loop to the next. Then explain each header to your duck: what is the loop variable on the first pass, and on the last? 

Example run (with user input indicated with **_bold italics_** ): 

```
Enter a positive integer: 7
Counting up:   1 2 3 4 5 6 7
Counting down: 7 6 5 4 3 2 1
Odd numbers:   1 3 5 7
Sum of 1 through 7 is 28
Check: 7 * 8 / 2 = 28
```

**Predict before you run.** On your checksheet, write what you expect your program to print for `n` = 10, for `n` = 1, and for a value you choose (other than 1, 7, or 10) — before you run it. Then run it and compare. 

**One more thing to try, and to journal.** Run your program with 0. The problem says `n` is to be positive, so there is no right answer for 0, and nothing needs fixing. Look at what your program printed, and answer the provided questions in your checksheet. 

**P5-3** Write a program using one **`while`** loop that will read in a sequence of integers guaranteed to be within the inclusive range of 0 through 99,999 from the user. Print out the smallest input, the largest input, the number of even inputs, and the number of odd inputs. HINT: refer to the code from the Example Code program in Section 4.5.2 (Reading Until Input Fails) of your textbook. 

Example run (with user input indicated with **_bold italics_** ): 

```
Enter number or Q to quit: 100
Enter number or Q to quit: 200
Enter number or Q to quit: 300
Enter number or Q to quit: 90001
Enter number or Q to quit: 7
Enter number or Q to quit: 999
Enter number or Q to quit: Q
Largest value: 90001 Smallest value: 7
Even number count: 3 Odd number count: 3
```

**Predict before you run.** Your checksheet lists four test runs. Predict all four before you run any of them. Two of those runs — a single number by itself, and the two ends of the allowed range — are there because programs that handle the example perfectly have gotten them wrong. 

**One run you cannot get wrong.** For your last run, you entered Q as the very first input. The problem does not say what should happen when no numbers are entered, so there is no correct output and nothing you are required to fix. In your journal: where did the largest and smallest values come from? Would someone reading that output know that no numbers were entered? 

- **P5-4** Write a program that reads a positive integer value called `number` and prints out all of its binary digits. The algorithm is as follows: 

Print the remainder of dividing the current value by the conversion base by using: `number % 2` then keep just the quotient of that division by replacing `number` with: `number / 2` Repeat these two steps until the value of `number` is 0. 

Example run (with user input indicated with **_bold italics_** ): 

```
Please enter a number: 13
```

```
1
0
1
1
```

Note that with this algorithm the resultant binary value is read from **bottom to top** : 1310 = 11012 

**Predict before you run.** For each input on your checksheet, write the digits across the page in the order your program will print them — top to bottom, exactly as they will appear — and then the binary value they represent (i.e., from bottom to top). 

**Some inputs cannot tell you which way to read.** If a program’s output reads the same from either end, it cannot catch someone reading it in the wrong direction. One of the inputs on your checksheet is like that. Find it before you run, and answer the question on your checksheet. 

**P5-5** Credit Card Checksum. The last digit of a credit card number is the check digit, which protects against transcription errors such as an error in a single digit or switching two digits. The following method is used to verify actual credit card numbers but, for simplicity, we will describe it for numbers with 8 digits instead of 16: 

- Starting from the rightmost digit, form the sum of every other digit. For example, if the credit card number is 43589795, then you form the sum: 5 + 7 + 8 + 3 = 23. 

- Double each of the digits that were not included in the preceding step. Add all digits of the resulting numbers. For example, with the number given above, doubling the digits, starting with the next-to-last one, yields: 18 18 10 8. Adding all digits in these values yields: 1 + 8 + 1 + 8 + 1 + 0 + 8 = 27. 

- Add the sums of the two preceding steps to form the checksum. If the last digit of the result is 0, the number is valid. In our case, 23 + 27 = 50, so the number is valid. 

Write a program that implements this algorithm **using an appropriate, and iterative, process** . The user should supply an 8-digit number, and you should print out whether the number is valid or not. 

**HINTS:** 

- **(1) look at digitStripper.cpp (provided below), and** 

**(2) work the checksum by hand for 43589796 and 26184739, and record your work on the checksheet,** **_before_ trying to write code.** 

Example runs (with user input indicated with **_bold italics_** ): 

```
Please enter 8-digit card number: 43589795
Card is valid.
```

```
Please enter 8-digit card number: 43589796
Card is not valid.
```

```
// digitStripper.cpp - John K. Estell - 20 September 2026
// demo of iterative routine that strips the rightmost digit from a
// value until nothing is left...
```

```
#include <iostream>
using namespace std;
int main( void ) {
    int value;
    int digit;
    cout << "Enter a non-zero, positive value: ";
    cin  >> value;
    while ( value > 0 ) {
        digit  = value % 10;
        value /= 10;
        cout << digit << endl;
    }
```

```
    return 0;
}
```

```
Enter a non-zero, positive value: 123456
6
5
4
3
2
1
Press any key to continue . . .
```

