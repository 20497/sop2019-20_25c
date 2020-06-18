#!/bin/bash
X=${1?Error: no name given}
if ["${X: -1} = "a"]
then
	echo $X "ma kota, a kot ma": ${X/%a/ę}
else
	echo $X "ma kota, a kot ma": "${X}a"
fi
