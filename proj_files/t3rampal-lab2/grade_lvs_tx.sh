#!/bin/zsh 

make lvs-step-tx

# Check LVS output
lvs_clean=`cat fullcustom/low_swing_tx_cmdline.lvs.txt | grep -c "LVS completed. CORRECT"`

if [[ $lvs_clean -eq 1 ]]; then lvs=15 else lvs=0; fi

# max15
echo "$lvs"
