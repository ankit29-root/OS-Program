

echo “enter name of file”
read filename
if [ -f $filename ]
then
echo “File $filename Excits!”
else
echo “File $filename Does Not Excits!”
touch $filename
fi
