#!/bin/sh

DATA= grep -n $1 $2

for line in "$DATA"
do
        printf "\n"$line
done
