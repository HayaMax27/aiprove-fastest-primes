# fastest-primes

Count primes <= N (N up to 5,000,000). Odd-only sieve of Eratosthenes in C.

Run: `./run.sh` (compiles with gcc -O3 if needed, then reads N on stdin).
Or: `gcc -O3 -o primes primes.c && echo 5000000 | ./primes` -> 348513

Public cases verified: 10->4, 100->25, 1000->168, 100000->9592, 1000000->78498, 5000000->348513.
Wall time for N=5,000,000: ~7ms.
