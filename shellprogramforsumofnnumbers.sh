echo "Enter the number of values to sum : "
read n
i=1
sum=0

echo "Enter the numbers :"
while [ $i -le $n ]
do
    read num
    if [[ ! $num =~ ^[0-9]+$ ]]; then
        echo "Invalid input. Please enter a valid number."
        continue
    fi
    sum=$((sum + num))
    i=$((i + 1))
done
echo "Sum = $sum"
