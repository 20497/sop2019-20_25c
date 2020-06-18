#!/bin/bash
X=${1?Error: no args}
if[$# -lt 2]; then
	echo "Nie podano paramtetrów"
else
	echo $X
fi
