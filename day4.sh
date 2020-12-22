#!/bin/bash
awk 'BEGIN{ RS = "" ; FS = "\n" }{print $1,$2,$3,$4,$5,$6,$7,$8}' "$1" > "blank.txt";
i=0;while IFS=$'\n' read -r line ; do if [[ $line == *byr:19[2-9][0-9]*  && $line == *eyr* && $line == *iyr* && $line == *hgt* && $line == *hcl* && $line == *ecl* && $line == *pid* ]]; then i=$((i+1)); fi; done < "blank.txt"; echo "$i"
