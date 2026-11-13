#!/bin/sh
# Build (if needed) and run the prime counter. Reads N on stdin, prints pi(N).
set -e
cd "$(dirname "$0")"
if [ ! -x ./primes ]; then gcc -O3 -o primes primes.c; fi
exec ./primes
