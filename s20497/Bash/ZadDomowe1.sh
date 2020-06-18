#!/bin/bash
plik=${1?Error: no input}
X="$PWD/$test"
while IFS=read -r line
do
	if[$line=="Jakub" ]; then
		echo -e\\[31mJakub\\e[0m
	else
		echo "$line"
	fi
done < "$X"
