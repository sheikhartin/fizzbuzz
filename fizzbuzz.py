#!/usr/bin/env python

import sys

rng_start = input('Enter the starting number: ')
rng_end = input('Enter the ending number: ')
try:
    rng_start = int(rng_start)
    rng_end = int(rng_end)
except ValueError:
    print('The range values must be pure integers.')
    sys.exit(1)
if rng_start >= rng_end:
    print('The starting number must be less than the ending number.')
    sys.exit(1)

for i in range(rng_start, rng_end+1):
    if i % 15 == 0:
        print('FizzBuzz')
    elif i % 3 == 0:
        print('Fizz')
    elif i % 5 == 0:
        print('Buzz')
    else:
        print(i)
