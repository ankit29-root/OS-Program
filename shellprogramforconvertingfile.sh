#!/bin/bash

for i in "Vishnu"
do
    echo "Before conversion is: $i"
    j=$(echo "$i" | tr '[:upper:]' '[:lower:]')
    echo "After conversion is: $j"
done
