#!/bin/bash
rm -f a.out
rm -f src/a.out
cd src && g++ tests.cpp BowlingGame.cpp && ./a.out
