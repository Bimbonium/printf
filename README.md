This repository is for a printf project

The logic we intend to use is;

Step 1: Write a _putchar, a function to write char to std output, this is the basis for everything, since the function puts only one character per time, care should be taken to use it with an iteration.
The iteration should ideally stop at every ‘%’ sign and check the character after that % sign, if the character is a known specifier, then it should insert something from the vargs list.


Step 2: The iterator (parser function) that will check for %, could be a For loop (that ends at ‘\0’)…
If it encounters %, it inserts the argument from vargs, else it _putchar what is on the line, if there is nothing in the vargs list or if it is not of the specified format, it should return an error


Step 3 (or maybe this should come after step 1?): A function (let’s call this _converter) that converts parameters to the variadic function into forms I can use with both _putchar and the iterator

