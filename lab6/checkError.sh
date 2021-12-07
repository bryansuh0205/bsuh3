#!/bin/bash

/* Check Error Script */

echo "Try to find out some errors!!!"

# seach for the words which can be match by regex [^a]*ce
# And save the output to file "result"
echo "The regex [^a]*ce can match the string(s):" > Result 
grep '^[^a]*ce$'>Result  <<END  

ace
brace
decide
piece
END

# Check the existence of file "Result" 
# Send the content in "Result" to your emailbox
# $1 is replaced by your campusID
ls Result | mailx $1@student.gsu.edu<Result

# $1 is replaced b your campusID
echo "The result has been sent to ${1}@student.gsu.edu" 
echo	"Congratulations! you have corrected all the errors!"

