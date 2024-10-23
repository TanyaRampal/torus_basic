
SIM_DIR = sim/
VCD ?= 0
VCD_FILE_STR ?= "test.vcd"
SRC =  rtl/router.v rtl/torus.sv rtl/client.v
TOP = top

VFLAGS = -DTEST_FILE_X=\"../data/input_x.hex\" -DTEST_FILE_Y=\"../data/input_y.hex\" -DTOP=$(TOP)
_CFLAGS = -CFLAGS

ifeq ($(VCD), 1)
VFLAGS+= --trace
_CFLAGS+= -DVCD -CFLAGS -DVCD_FILE=\\\"$(VCD_FILE_STR)\\\"
endif

compile: $(SRC) tb/test_torus.cpp
	mkdir -p $(SIM_DIR)
	verilator $(VFLAGS) \
		$(_CFLAGS) \
		-Itb\
		-Irtl\
		--clk clk\
		--cc $(SRC)\
		tb/test_torus.sv \
		--exe ./tb/test_torus.cpp \
		-top-module top \
		--Mdir $(SIM_DIR)
	make -C $(SIM_DIR) -f V$(TOP).mk V$(TOP) 

run: compile
	echo "Verilator Running Test"
	cd $(SIM_DIR) && ./V$(TOP) > log.csv
	python3 checkLog.py -f $(SIM_DIR)/log.csv

schex:
	ocean -nograph -norecurse < fullcustom/schematic2hspice_low_swing_rx.ocn
	ocean -nograph -norecurse < fullcustom/schematic2hspice_low_swing_tx.ocn
	cp ./simulation/low_swing_rx/hspiceD/schematic/netlist/input.ckt spice/low_swing_rx_schematic.sp
	cp ./simulation/low_swing_tx/hspiceD/schematic/netlist/input.ckt spice/low_swing_tx_schematic.sp

schematic-spice-sim:
	cd spice; hspice schematic_low_swing_tx_tb.sp > trace.schematic_tx.txt; cd ..;
	cd spice; hspice schematic_low_swing_rx_tb.sp > trace.schematic_rx.txt; cd ..;
	cd spice; hspice schematic_baseline_tb.sp > trace.schematic_base.txt; cd ..;
	#wv schematic_tb.tr0; cd ..



.PHONY: clean

clean:
	rm -rf sim
	rm -f log.csv times.csv
 
lvs-step-tx:
	rm -f .running
	mkdir -p ./lvs
	strmout -library ece720t7 -topCell low_swing_tx -view layout -strmFile output.gds
	mv output.gds lvs/low_swing_tx.calibre.db
	cp fullcustom/si_tx.env si.env
	si -batch -cdslib cds.lib -command netlist
	mv low_swing_tx.src.net ./lvs
	calibre -gui -lvs -runset fullcustom/ece720.lvs.low_swing_tx.runset -batch > fullcustom/low_swing_tx_cmdline.lvs.txt
 
lvs-step-rx:
	rm -f .running
	mkdir -p ./lvs
	strmout -library ece720t7 -topCell low_swing_rx -view layout -strmFile output.gds
	mv output.gds lvs/low_swing_rx.calibre.db
	cp fullcustom/si_rx.env si.env
	si -batch -cdslib cds.lib -command netlist
	mv low_swing_rx.src.net ./lvs
	calibre -gui -lvs -runset fullcustom/ece720.lvs.low_swing_rx.runset -batch > fullcustom/low_swing_rx_cmdline.lvs.txt
 
 
 
drc-step-tx:
	mkdir -p ./drc
	strmout -library ece720t7 -topCell low_swing_tx -view layout -strmFile output.gds
	cp output.gds ./drc/low_swing_tx.calibre.db
	calibre -gui -drc -runset fullcustom/ece720.drc.low_swing_tx.runset -batch > fullcustom/low_swing_tx_cmdline.drc.txt
 
drc-step-rx:
	mkdir -p ./drc
	strmout -library ece720t7 -topCell low_swing_rx -view layout -strmFile output.gds
	cp output.gds ./drc/low_swing_rx.calibre.db
	calibre -gui -drc -runset fullcustom/ece720.drc.low_swing_rx.runset -batch > fullcustom/low_swing_rx_cmdline.drc.txt

 
 
pex-step-tx:
	mkdir -p ./pex
	strmout -library ece720t7 -topCell low_swing_tx -view layout -strmFile output.gds
	mv output.gds ./pex/low_swing_tx.calibre.db
	calibre -gui -pex -runset fullcustom/ece720.pex.runset -batch > fullcustom/low_swing_tx_cmdline.pex.txt
	cp ./pex/low_swing_tx.pex.netlist spice/
	cp ./pex/low_swing_tx.pex.netlist.LOW_SWING_TX.pxi spice/
	cp ./pex/low_swing_tx.pex.netlist.pex spice/
 
 
pex-step-rx:
	mkdir -p ./pex
	strmout -library ece720t7 -topCell low_swing_rx -view layout -strmFile output.gds
	mv output.gds ./pex/low_swing_rx.calibre.db
	calibre -gui -pex -runset fullcustom/ece720.pex.runset -batch > fullcustom/low_swing_rx_cmdline.pex.txt
	cp ./pex/low_swing_rx.pex.netlist spice/
	cp ./pex/low_swing_rx.pex.netlist.LOW_SWING_RX.pxi spice/
	cp ./pex/low_swing_rx.pex.netlist.pex spice/
 

layout-spice-sim:
	cd spice; hspice layout_tb.sp > trace.layout.txt; cd ..;
	#wv spice/layout_tb.tr0;


