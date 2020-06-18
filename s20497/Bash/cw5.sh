#!/bin/bash
X=${1?Error: no args}
pierwszaLitera=${X:0:1}
ostatniaLitera=${X: -1}
echo $pierwszaLitera
echo $ostatniaLitera
case "$X" in
	*SOP*)
	echo -e \\e[32mSOP\\e[0m
	;;
esac
