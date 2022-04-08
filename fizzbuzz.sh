#!/bin/bash

read -p "Enter the start and end points (seperated by space): " rng_start rng_end
if [[ "${rng_start}" -ge "${rng_end}" ]]; then
  echo "The start number must be less than the end number."
  exit 1
fi

for (( i = rng_start; i <= rng_end; i++ )); do
  if [[ $(( i % 15 )) -eq 0 ]]; then
    echo "FizzBuzz"
  elif [[ $(( i % 3 )) -eq 0 ]]; then
    echo "Fizz"
  elif [[ $(( i % 5 )) -eq 0 ]]; then
    echo "Buzz"
  else
    echo "${i}"
  fi
done
