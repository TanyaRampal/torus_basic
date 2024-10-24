** Generated for: hspiceD
** Generated on: Oct 20 16:12:00 2024
** Design library name: ece720t7
** Design cell name: low_swing_rx
** Design view name: schematic



.TEMP 25
.OPTION
+    ARTIST=2
+    INGOLD=2
+    PARHIER=LOCAL
+    PSF=2
.LIB "/CMC/tsmc_65nm/CRN65GP/TN65CMSP018K3_V1.0C/models/hspice/crn65gplus_2d5_lk_v1d0.l" tt
.LIB "/CMC/tsmc_65nm/CRN65GP/TN65CMSP018K3_V1.0C/models/hspice/crn65gplus_2d5_lk_v1d0.l" tt_hvt

** Library name: ece720t7
** Cell name: low_swing_rx
** View name: schematic
.subckt low_swing_rx i o vdd vss
m0 o net10 vdd vdd pch l=l5 w='(w5*2)*1' m=1 nf=1 sd=200e-9 ad='(((1-int(500e-3)*2)*175e-9+(2-int(1.0)*2)*100e-9)*w5)*2' as='(((1-int(500e-3)*2)*175e-9+(2-int(1.0)*2)*250e-9)*w5)*2' pd='(1-int(500e-3)*2)*(350e-9+(2*w5)*2)+(2-int(1.0)*2)*(200e-9+(1*w5)*2)' ps='(1-int(500e-3)*2)*(350e-9+(2*w5)*2)+(2-int(1.0)*2)*(500e-9+(3*w5)*2)' nrd='(1-int(500e-3)*2)*((100e-9/w5)*2)+(2-int(1.0)*2)*((100e-9/w5)*2)' nrs='(1-int(500e-3)*2)*((100e-9/w5)*2)+(2-int(1.0)*2)*((100e-9/w5)*2)' sa=175e-9 sb=175e-9 sca=0 scb=0 scc=0
m1 o net10 vss vss nch l=l5 w='w5*1' m=1 nf=1 sd=200e-9 ad='((1-int(500e-3)*2)*175e-9+(2-int(1.0)*2)*100e-9)*w5' as='((1-int(500e-3)*2)*175e-9+(2-int(1.0)*2)*250e-9)*w5' pd='(1-int(500e-3)*2)*(350e-9+2*w5)+(2-int(1.0)*2)*(200e-9+1*w5)' ps='(1-int(500e-3)*2)*(350e-9+2*w5)+(2-int(1.0)*2)*(500e-9+3*w5)' nrd='(1-int(500e-3)*2)*(100e-9/w5)+(2-int(1.0)*2)*(100e-9/w5)' nrs='(1-int(500e-3)*2)*(100e-9/w5)+(2-int(1.0)*2)*(100e-9/w5)' sa=175e-9 sb=175e-9 sca=0 scb=0 scc=0
m2 net10 i vss vss nch_hvt l=l5 w='w5*1' m=1 nf=1 sd=200e-9 ad='((1-int(500e-3)*2)*175e-9+(2-int(1.0)*2)*100e-9)*w5' as='((1-int(500e-3)*2)*175e-9+(2-int(1.0)*2)*250e-9)*w5' pd='(1-int(500e-3)*2)*(350e-9+2*w5)+(2-int(1.0)*2)*(200e-9+1*w5)' ps='(1-int(500e-3)*2)*(350e-9+2*w5)+(2-int(1.0)*2)*(500e-9+3*w5)' nrd='(1-int(500e-3)*2)*(100e-9/w5)+(2-int(1.0)*2)*(100e-9/w5)' nrs='(1-int(500e-3)*2)*(100e-9/w5)+(2-int(1.0)*2)*(100e-9/w5)' sa=175e-9 sb=175e-9 sca=0 scb=0 scc=0
m3 net10 i vdd vdd pch_hvt l=l5 w='(w5*2)*1' m=1 nf=1 sd=200e-9 ad='(((1-int(500e-3)*2)*175e-9+(2-int(1.0)*2)*100e-9)*w5)*2' as='(((1-int(500e-3)*2)*175e-9+(2-int(1.0)*2)*250e-9)*w5)*2' pd='(1-int(500e-3)*2)*(350e-9+(2*w5)*2)+(2-int(1.0)*2)*(200e-9+(1*w5)*2)' ps='(1-int(500e-3)*2)*(350e-9+(2*w5)*2)+(2-int(1.0)*2)*(500e-9+(3*w5)*2)' nrd='(1-int(500e-3)*2)*((100e-9/w5)*2)+(2-int(1.0)*2)*((100e-9/w5)*2)' nrs='(1-int(500e-3)*2)*((100e-9/w5)*2)+(2-int(1.0)*2)*((100e-9/w5)*2)' sa=175e-9 sb=175e-9 sca=0 scb=0 scc=0
.ends low_swing_rx
** End of subcircuit definition.
.END
