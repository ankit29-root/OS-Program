echo  –n  “Enter the Filename”
read filename
if [  !  -f  $filename ];
then
echo “Filename $filename does not exists”
exit 1
fi
tr  ‘[A-Z]’ ‘[a-z]’ <  $filename
