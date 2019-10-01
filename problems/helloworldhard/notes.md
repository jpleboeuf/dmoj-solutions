# Notes

Interpreting "Output Specification: `Hello, World!`, 3 times, on three different lines."
in a smarter way, as:

- printing `Hello, World!` 3 times, each time on a new line, but simulating removing the carriage returns;
- and also code-wise: switching to using a string variable, and still without using a loop.

⇒ Wrong answer :(

As a side note, `-Weverything` returns 3 warnings:

```
helloworldhard.cc:10:22: warning: implicit conversion changes signedness: 'int' to 'std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::size_type' (aka 'unsigned long long') [-Wsign-conversion]
  cout << string(    l, ' ') << hw << endl;
          ~~~~~~     ^
helloworldhard.cc:11:20: warning: implicit conversion changes signedness: 'int' to 'std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::size_type' (aka 'unsigned long long') [-Wsign-conversion]
  cout << string(2 * l, ' ') << hw << endl;
          ~~~~~~ ~~^~~
helloworldhard.cc:8:14: warning: implicit conversion loses integer precision: 'std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::size_type' (aka 'unsigned long long') to 'int' [-Wshorten-64-to-32]
  int l = hw.length();
      ~   ~~~^~~~~~~~
3 warnings generated.
```

## Some concepts

* standard library, namespace,
* `main` function, and its `return` value,
* standard output stream (`cout`, `<<`, `endl`).

## Related problems

* "[Hello, World!](https://dmoj.ca/problem/helloworld)"
* "[Too Simple](https://dmoj.ca/problem/toosimple)"
