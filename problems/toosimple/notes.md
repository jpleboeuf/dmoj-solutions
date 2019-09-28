# Notes

This one is a classics, and I had an idea of the solution from who knows when/where.

If we are forbidden to use numbers and strings, the idea is to find a way to define them using authorized constructs.
For strings, characters can easily be redefined from ASCII codes, which are numbers, forbidden.
Therefore if we find an alternative way to define numbers, we're done; and since operators are not forbidden, we just have to find a way to define digits.

In C++, types have a size, and the smallest type `char` have a size of 1.

From Wikipedia, "[sizeof](https://en.wikipedia.org/wiki/Sizeof)":

> In the programming languages C and C++, the unary operator sizeof generates the size of a variable or datatype, measured in the number of char-sized storage units required for the type. Consequently, the construct sizeof (char) is guaranteed to be 1.

See also:

* "[Can sizeof(char) be 2 on some machines? For example, what about double-byte characters?](http://www.cs.technion.ac.il/users/yechiel/c++-faq/sizeof-char.html)" in the C++ FAQ,
* "[Size of character ('a') in C/C++](https://stackoverflow.com/questions/2172943/size-of-character-a-in-c-c)" on Stack Overflow.

With this in mind, using `#define`s and basic arithmetic, it's easy to define digits from zero to nine, and the number 10; then come the characters needed to write "hello, world!".

| Character | ASCII code |
|-----------+------------|
| h         | 104        |
| e         | 101        |
| l         | 108        |
| l         | 108        |
| o         | 111        |
| ,         |  44        |
|           |  32        |
| w         | 119        |
| o         | 111        |
| r         | 114        |
| l         | 108        |
| d         | 100        |
| !         |  33        |

To get the uppercase 'H' and 'W', I chose to use the `toupper()` function.
Retrospectively, it's a bit stupid, because we don't need the lowercase letters.
I may fix that in a future version.

Remark: a zero being only needed for the `return 0;` of the `int main()` function, we could do without, since `return 0;` is the default behaviour. I may also fix that in a future version.

## Some concepts

* preprocessor, `#define`,
* `sizeof()`, `char`,
* standard library, namespace,
* `main` function, and its `return` value,
* standard output stream (`cout`, `<<`, `endl`).

## Related problems

* "[Hello, World!](https://dmoj.ca/problem/helloworld)"
* "[Hello, World! (Hard)](https://dmoj.ca/problem/helloworldhard)"
