Exploration
-----------

To interpret: "Output Specification: `Hello, World!`, 3 times, on three different lines."


## Summary of Tries:

|           try | interpretation / comment                                                                                                                                         | eol (count)                                               | loop                          |
|--------------:|------------------------------------------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------|-------------------------------|
| [01](#try-01) | `Hello, World!`, 1 time per line, on 3 lines                                                                                                                     | `endl` (3)                                                | `for` loop(3)                 |
| [02](#try-02) | `Hello, World!`, 3 times per line, on 3 lines                                                                                                                    | `endl` (3)                                                | `for` loop(3) x `for` loop(3) |
| [03](#try-03) | `Hello, World!`, 1 time per line, on 3 lines, but no eol on the last line                                                                                        | `endl` (2)                                                | none                          |
| [04](#try-04) | `Hello, World!`, 1 time per line, on 3 lines (similar to Try 01, but using explicitely `\n` as eol, and not using a loop anymore)                                | `\n`   (3)                                                | none                          |
| [05](#try-05) | `Hello, World!`, 1 time per line, on 3 lines (similar to Try 04, but back to using `endl`)                                                                       | `endl` (3)                                                | none                          |
| [06](#try-06) | `Hello, World!`, 1 time per line, on 3 lines (similar to Try 05, but without `return 0` at the end of the code)                                                  | `endl` (3)                                                | none                          |
| [07](#try-07) | `Hello, World!`, 1 time per line, on 3 lines, but starting each new line without a carriage return (simulated)                                                   | `endl` (3)                                                | none                          |
| [08](#try-08) | `Hello, World!`, 1 time per line, on 3 lines, but no eol on the last line (similar to Try 03, but using explicitely `\n` as eol, and using a string variable)    | `\n`   (2)                                                | none                          |
| [09](#try-09) | `Hello, World!`, 1 time per line, on 3 lines (similar to Try 04, but using a string variable)                                                                    | `\n`   (3)                                                | none                          |
| [10](#try-10) | `Hello, World!`, 1 time per line, on 3 lines, but starting each new line after the first with one space more than the previous line (making each line different) | `\n`   (3)                                                | none                          |
| [11](#try-11) | `Hello, World!`, 1 time per line, on 3 lines, but no text on the real first line (empty), and no eol on the real last line                                       | `endl` (3), Start-Of-Line instead of EOL                  | none                          |
| [12](#try-12) | `Hello, World!`, 1 time per line, on 3 lines (similar to Try 05, but using a string variable)                                                                    | `endl` (3)                                                | none                          |
| [13](#try-13) | `Hello, World!`, 1 time per line, on 3 lines, but starting each new line with "N. " where N is the line number (making each line different)                      | `endl` (3)                                                | none                          |
| [14](#try-14) | `Hello, World!`, 1 time per line, on 3 lines, but using a different eol on each line (making each line different, but only in the code)                          | `\n` [NL], `char(10)` [NL dec], `char(0x0A)` [NL hex] (3) | none                          |
| [15](#try-15) | `Hello, World!`, 1 time per line, on 3 lines, but using a different eol on each line (making each line different)                                                | `\n`, `\r\n`, `\n\r` (3)                                  | none                          |
| [16](#try-16) | `Hello, World!`, 1 time per line, on 3 lines, but using a different eol on each line (making each line different)                                                | `\n`, `\r\n`, `\r` (3)                                    | none                          |
| [17](#try-17) | `Hello, World!`, 1 time per line, on 3 lines, but using a different eol on each line (making each line different)                                                | `\n`, `\r`, `\r\n` (3)                                    | none                          |


### Try 17

Interpreting "Output Specification: `Hello, World!`, 3 times, on three different lines."
in a smarter way but very hacky (fourth take), that is to say, as:

- printing `Hello, World!` 3 times, each time on a new line, but using a different eol on each line, therefore also making each line different, using `\n` on the first line, `\r` on the second line, and `\r\n` on the last line.

⇒ Correct answer :D

```cpp
    string hw = "Hello, World!";
    cout << hw << "\n";    // 1. Unix systems
    cout << hw << "\r";    // 2. old Mac-s
    cout << hw << "\r\n";  // 3. Windows
```


### Try 16

Interpreting "Output Specification: `Hello, World!`, 3 times, on three different lines."
in a smarter way but very hacky (third take), that is to say, as:

- printing `Hello, World!` 3 times, each time on a new line, but using a different eol on each line, therefore also making each line different, using `\n` on the first line, `\r\n` on the second line, and `\r` on the last line.

⇒ Wrong answer :(

```cpp
    string hw = "Hello, World!";
    cout << hw << "\n";    // 1. Unix systems
    cout << hw << "\r\n";  // 2. Windows
    cout << hw << "\r";    // 3. old Mac-s
```


### Try 15

Interpreting "Output Specification: `Hello, World!`, 3 times, on three different lines."
in a smarter way but very hacky (second take), that is to say, as:

- printing `Hello, World!` 3 times, each time on a new line, but using a different eol on each line, therefore also making each line different, using `\n` on the first line, `\r\n` on the second line, and `\n\r` on the last line.

⇒ Wrong answer :(

```cpp
    string hw = "Hello, World!";
    cout << hw << "\n";
    cout << hw << "\r\n";
    cout << hw << "\n\r";
```


### Try 14

Interpreting "Output Specification: `Hello, World!`, 3 times, on three different lines."
in a smarter way but very hacky, that is to say, as:

- printing `Hello, World!` 3 times, each time on a new line, but using a different eol on each line, therefore also making each line different, but only in the code (it's starting to look desperate).

⇒ Wrong answer :(

```cpp
    string hw = "Hello, World!";
    cout << hw << "\n";
    cout << hw << char(10);
    cout << hw << char(0x0A);
```


### Try 13

Interpreting "Output Specification: `Hello, World!`, 3 times, on three different lines."
in a smarter way but still dumb, that is to say, as:

- printing `Hello, World!` 3 times, each time on a new line, but prefixing each new line with "N. " where N is the line number, therefore also making each line different.

⇒ Wrong answer :(

```cpp
    string hw = "Hello, World!";
    cout << "1. " << hw << endl;
    cout << "2. " << hw << endl;
    cout << "3. " << hw << endl;
```


### Try 12

Memorabilia: 2fde9bcbd9e77cb544b4797a22ea1db555185a77

Interpreting "Output Specification: `Hello, World!`, 3 times, on three different lines."
almost the dumbest way possible (another take, variation of the third take in Try 05), that is to say, as:

- printing `Hello, World!` 3 times, each time on a new line, but back to putting each `endl` at the end of each new line instead of the start;
- also, code-wise: it's Try 05, but still following the trend started in Try 07, of using a string variable.

Similar to Try 05, but using a string variable.

⇒ Wrong answer :(

```cpp
    string hw = "Hello, World!";
    cout << hw << endl;
    cout << hw << endl;
    cout << hw << endl;
```


### Try 11

Memorabilia: 4cca968da016925cd96cae9ba92273eadc48bd49

Interpreting "Output Specification: `Hello, World!`, 3 times, on three different lines."
almost the dumbest way possible, that is to say, as:

- printing `Hello, World!` 3 times, each time on a new line, but putting each `endl` at the beginning of each new line instead of the end;
- also code-wise: thus back to using `endl`-s instead of `\n`-s, and still back to using 3 `cout`-s, still without using a loop.

⇒ Wrong answer :(

```cpp
    string hw = "Hello, World!";
    cout << endl << hw;
    cout << endl << hw;
    cout << endl << hw;
```


### Try 10

Memorabilia: 379836613ec20f17f0e96c6ef55a30e4fdb47108

Interpreting "Output Specification: `Hello, World!`, 3 times, on three different lines."
in a smarter way yet still dumb, that is to say, as:

- printing `Hello, World!` 3 times, each time on a new line, but making each new line different by adding n spaces before `Hello, World!`, n starting at 0 for the first line;
- also code-wise: still replacing the `endl`-s by `\n`-s, but back to using 3 `cout`-s, still without using a loop.

⇒ Wrong answer :(

```cpp
    string hw = "Hello, World!";
    cout         << hw << '\n';
    cout << " "  << hw << '\n';
    cout << "  " << hw << '\n';
```


### Try 09

Memorabilia: c5e0a12289dcb8fe648f77ab772d8f4a0dd5cd89

Interpreting "Output Specification: `Hello, World!`, 3 times, on three different lines."
almost the dumbest way possible (another take, similar to Try 04), that is to say, as:

- printing `Hello, World!` 3 times, each time on a new line, back to ending the last line (it's a variation of Try 04, the code is a bit different, like Try 08);
- and also code-wise: still replacing the `endl`-s by `\n`-s, and still using only one `cout`, but still without using a loop.

Similar to Try 04, but using a string variable.

⇒ Wrong answer :(

```cpp
    string hw = "Hello, World!";
    cout << hw << '\n' << hw << '\n' << hw << '\n';
```


### Try 08

Memorabilia: d7650689c31d24db914d6fc3935e0ac038452032

Interpreting "Output Specification: `Hello, World!`, 3 times, on three different lines."
almost the dumbest way possible (another take, similar to Try 03), that is to say, as:

- printing `Hello, World!` 3 times, each time on a new line, but without ending the last line (it's a variation of Try 03, the code is a bit different);
- and also code-wise: back to replacing the `endl`-s by `\n`-s, and using only one `cout`, but still without using a loop.

Similar to Try 03, but using explicitely `\n` as eol, and using a string variable.

⇒ Wrong answer :(

```cpp
    string hw = "Hello, World!";
    cout << hw << '\n' << hw << '\n' << hw;
```


### Try 07

Memorabilia: 6ab8baccbd5ea6f1b972b1aaa4b0e6096ee80e75

Interpreting "Output Specification: `Hello, World!`, 3 times, on three different lines."
in a smarter way, as:

- printing `Hello, World!` 3 times, each time on a new line, but simulating removing the carriage returns;
- and also code-wise: switching to using a string variable, and still without using a loop.

⇒ Wrong answer :(

```cpp
    string hw = "Hello, World!";
    int l = hw.length();
    cout                       << hw << endl;
    cout << string(    l, ' ') << hw << endl;
    cout << string(2 * l, ' ') << hw << endl;
```

@todo: C++ warnings to fix.


### Try 06

Memorabilia: a1f03960c4acc87bd7679530530026ea2b0ef800

Interpreting "Output Specification: `Hello, World!`, 3 times, on three different lines."
the dumbest way possible (fourth take, small variation of the third take in Try 05), that is to say, as:

- printing `Hello, World!` 3 times, each time on a new line;
- and also code-wise: removing the explicit `return 0;` at the end of the code, and still without using a loop.

Similar to Try 05, but without `return 0` at the end of the code.

⇒ Wrong answer :(

```cpp
    cout << "Hello, World!" << endl;
    cout << "Hello, World!" << endl;
    cout << "Hello, World!" << endl;
```


### Try 05

Memorabilia: ec9217d4dbb17a366e3a971c60f2ea6e757a72ea

Interpreting "Output Specification: `Hello, World!`, 3 times, on three different lines."
the dumbest way possible (third take, variation of the second take in Try 04), that is to say, as:

- printing `Hello, World!` 3 times, each time on a new line;
- and also code wise: going back to using `endl`-s instead of `\n`-s, and still without using a loop.

Similar to Try 04, but back to using `endl`.

⇒ Wrong answer :(

```cpp
    cout << "Hello, World!" << endl;
    cout << "Hello, World!" << endl;
    cout << "Hello, World!" << endl;
```


### Try 04

Memorabilia: e894c8f3e691aeb39baedd5eaf6e993f0817cbc3

Interpreting "Output Specification: `Hello, World!`, 3 times, on three different lines."
the dumbest way possible (second take, variation of the first take in Try 01), that is to say, as:

- printing `Hello, World!` 3 times, each time on a new line;
- and also code-wise: replacing the `endl`-s by `\n`-s, and still without using a loop.

Similar to Try 01, but using explicitely `\n` as eol, and not using a loop anymore.

⇒ Wrong answer :(

```cpp
    cout << "Hello, World!" << "\n";
    cout << "Hello, World!" << "\n";
    cout << "Hello, World!" << "\n";
```


### Try 03

Memorabilia: 889277befd8743c4263d3b0e0d13eacaf281fb01

Interpreting "Output Specification: `Hello, World!`, 3 times, on three different lines."
almost the dumbest way possible, that is to say, as:

- printing `Hello, World!` 3 times, each time on a new line, but without ending the last line;
- and also code-wise: multiple `cout`-s, without using a loop.

⇒ Wrong answer :(

```cpp
    cout << "Hello, World!";
    cout << endl;
    cout << "Hello, World!";
    cout << endl;
    cout << "Hello, World!";
```


### Try 02

Memorabilia: fff785f52c05e3371e88a00168ce49a9ea42e261

Interpreting "Output Specification: `Hello, World!`, 3 times, on three different lines."
another way, as:

- printing `Hello, World!` 3 times per line, on 3 new lines, therefore 3x3=9 times in total.

⇒ Wrong answer :(

```cpp
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        cout << "Hello, World!";
      }
      cout << endl;
    }
```


### Try 01

Memorabilia: e92a5813b17afe0f7c02c55e37c7b6ef8e983b9b

Interpreting "Output Specification: `Hello, World!`, 3 times, on three different lines."
the dumbest way possible, that is to say, as:

- printing `Hello, World!` 3 times, each time on a new line.

⇒ Wrong answer :(

```cpp
    for (int i = 0; i < 3; i++) {
        cout << "Hello, World!" << endl; 
    }
```
