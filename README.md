# DMOJ Solutions

This repository contains my solutions to some of the problems available on [DMOJ](https://dmoj.ca/).
DMOJ is a contest platform for programming problems.

My username on DMOJ: [jpleboeuf](https://dmoj.ca/user/jpleboeuf).

## Structure

Problems and their solutions are located in the [`problems/`](problems/) subdirectory.
There is then a subdirectory per problem.
Inside a problem subdirectory, can be found:

* the problem in PDF format in the file _`problem_name`_`.en.pdf` (downloaded from DMOJ);
* my coded solution;
* a Ninja build file to create the executable for the coded solution;
* the DMOJ status of the coded solution, in the `STATUS.md` file;
* my notes relating to the problem, in the `NOTES.md` file, containing analyses, insights, or tips.

## Building the solutions

The [Ninja](https://ninja-build.org/) build files provided are meant to be used on MS Windows with [MinGW-W64](https://sourceforge.net/projects/mingw-w64/) and [LLVM](https://llvm.org/).
Yet they can easily be adapted to other platforms and compiler infrastructures.

The [`build/`](build/) subdirectory contains the files needed to use Ninja:

* the [`build/build_head.ninja`](build/build_head.ninja) Ninja file contains the build instructions common to all solutions - the "ninja head";
* the [`build/create_ninja_body.bat`](build/create_ninja_body.bat) is a Windows batch script that can create the main Ninja file for building a specific solution - the "ninja body".

For example, if one needs to create a "ninja body" for a solution to the 'helloword' problem:

0. create the `problems\helloworld\` subdirectory if it does not already exist,
1. go to `problems\helloworld\`,
2. then execute `..\..\build\create_ninja_body.bat helloworld`.

When our servitor has a body, you can just invoke the `ninja` to create the executable solution `helloworld.exe`.

## About the solutions

I just started coding solutions, and I don't have a lot of time, therefore don't expect hundreds of problems to be solved anytime soon.
My intent is to have fun solving brain-teasers, and doing some C++17 coding using clang++.

Even if these solutions are meant for competition, I try to avoid bad software practices when possible (for now).

## About the author

I have never participated in any programming competition (well, except some Corewar stuff a long time ago), thus don't expect any form of wizardry.
