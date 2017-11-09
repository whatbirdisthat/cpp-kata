# C++ Bowling Game Kata

## A variant on the Bowling Game Kata in C++

The difference between this kata and others, is the
rule of "no dependencies".

In order to write test-driven code, it is necessary to 
build our own test-runner and asserts.

This way, without any learning curve on *other frameworks* or whatever
we can focus instead on `actual TDD practice` and leave the
clever bells and whistles until later, when we have
experienced first hand the needs of a TDD process.

That process, and the emergence of a self-referencial test-driven
design is key here.

## Some notes to a happier compile

I found that the g++ on my mac wasn't c++11 by default
so vim was going all weird about the `#include <chrono>` business.

The trick is to add this to your `.vimrc` :
    let g:syntastic_cpp_compiler_options = ' -std=c++0x'

## The journey is important




