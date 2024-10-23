#!/bin/zsh

make drc-step-tx

# Check if it is OK
drc_clean=`cat fullcustom/low_swing_tx_cmdline.drc.txt | grep -c -- "--- TOTAL RESULTS GENERATED"`

if [[ $drc_clean -eq 1 ]]; then drc=10 else drc=0; fi

# max 10
echo "$drc"
