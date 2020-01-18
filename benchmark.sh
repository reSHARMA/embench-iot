#!/bin/sh

if [ "$#" -ne 3 ]; then
    echo "Usage: bash benchmark.sh PATH_TO_C_COMPILER WORD_SIZE RESULT.txt"
    echo "	 bash benchmark.sh riscv64-unknown-linux-gnu-gcc 64 result.txt"
fi

python3 build_all.py --cc $1 --ld $1 --arch=riscv$2 --chip=size-test-gcc --board=ri5cyverilator
python3 benchmark_size.py > $3

