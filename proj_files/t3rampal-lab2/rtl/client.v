/*verilator lint_off WIDTHEXPAND*/
/*verilator lint_off WIDTHTRUNC*/
/*verilator lint_off UNUSEDSIGNAL*/
/*verilator lint_off DECLFILENAME*/
/* Generated by Yosys 0.39+149 (git sha1 b9d3bffda, aarch64-apple-darwin21.4-clang++ 14.0.0-1ubuntu1.1 -fPIC -Os) */

module Client(clk, rst, i_ack, o_v, o, X, Y, i);
  wire [63:0] _00_;
  wire [63:0] _01_;
  wire [63:0] _02_;
  wire [63:0] _03_;
  wire [63:0] _04_;
  wire [511:0] _05_;
  wire [511:0] _06_;
  wire [63:0] _07_;
  wire [63:0] _08_;
  wire [63:0] _09_;
  wire _10_;
  wire _11_;
  wire _12_;
  wire _13_;
  wire _14_;
  wire _15_;
  wire _16_;
  wire _17_;
  wire _18_;
  wire _19_;
  wire _20_;
  wire _21_;
  wire _22_;
  wire _23_;
  wire [16:0] _24_;
  wire [16:0] _25_;
  wire [63:0] _26_;
  wire [511:0] _27_;
  wire [1:0] _28_;
  wire _29_;
  wire _30_;
  wire _31_;
  wire _32_;
  wire [511:0] _33_;
  wire [1:0] _34_;
  input [1:0] X;
  wire [1:0] X;
  input [1:0] Y;
  wire [1:0] Y;
  reg [63:0] attempts = 64'h0000000000000000;
  input clk;
  wire clk;
  output [516:0] i;
  reg [516:0] i;
  input i_ack;
  wire i_ack;
  wire [516:0] next;
  reg [63:0] now = 64'h0000000000000000;
  input [516:0] o;
  wire [516:0] o;
  input o_v;
  wire o_v;
  input rst;
  wire rst;
  reg [63:0] sent = 64'h0000000000000000;
  reg [63:0] sent0 = 64'h0000000000000000;
  wire [15:0] x_loc;
  wire [15:0] y_loc;
  assign _24_ = top.destx [_01_];
  assign _25_ = top.desty [_01_];
  assign _00_ = X + { 60'h000000000000000, Y, 2'h0 };
  assign _01_ = { _26_[63:1], 1'h0 } + sent0;
  assign _02_ = now + 32'd1;
  assign _03_ = sent + 32'd1;
  assign _04_ = { _26_[63:1], 1'h0 } + sent;
  assign _05_ = X + { 508'h0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000, Y, 2'h0 };
  assign _06_ = { _27_[511:1], 1'h0 } + sent0;
  assign _07_ = sent0 + 32'd1;
  assign _08_ = attempts + 32'd1;
  assign _09_ = { _26_[63:1], 1'h0 } + attempts;
  always @(posedge clk)
    if (_10_) attempts <= _08_;
  always @(posedge clk)
    if (_11_) sent0 <= _07_;
  always @(posedge clk)
    if (_12_) sent <= _03_;
  always @(posedge clk)
    if (rst) now <= 64'h0000000000000000;
    else now <= _02_;
  always @(posedge clk)
    if (rst) i[515:514] <= 2'h0;
    else if (_20_) i[515:514] <= _28_;
  always @(posedge clk)
    if (rst) i[513:512] <= 2'h0;
    else if (_20_) i[513:512] <= _34_;
  always @(posedge clk)
    if (rst) i[511:0] <= 512'h00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
    else if (_20_) i[511:0] <= _33_;
  always @(posedge clk)
    if (rst) i[516] <= 1'h0;
    else if (_20_) i[516] <= _32_;
  reg [1:0] _53_;
  always @(posedge clk)
    if (!_21_) _53_ <= 2'h0;
    else _53_ <= _25_[1:0];
  assign y_loc[1:0] = _53_;
  reg [1:0] _54_;
  always @(posedge clk)
    if (!_21_) _54_ <= 2'h0;
    else _54_ <= _24_[1:0];
  assign x_loc[1:0] = _54_;
  assign _13_ = ~ rst;
  assign _10_ = & { _13_, _22_ };
  assign _11_ = & { _13_, _18_, _20_ };
  assign _12_ = & { _13_, i_ack };
  assign _17_ = attempts > sent0;
  assign _18_ = _17_ && _23_;
  assign _19_ = ! i[516];
  assign _20_ = _19_ || i_ack;
  assign _21_ = sent0 < 32'd6;
  assign _23_ = $signed(sent0) < $signed(32'd6);
  assign _22_ = attempts < 32'd6;
  assign _26_[63:1] = _00_ * 31'h00000003;
  assign _27_[511:1] = _05_ * 31'h00000003;
  assign _28_ = _18_ ? x_loc[1:0] : 2'h0;
  assign _29_ = i_ack ? 1'h1 : 1'h0;
  assign _15_ = rst ? 1'h0 : _29_;
  assign _30_ = o_v ? 1'h1 : 1'h0;
  assign _14_ = rst ? 1'h0 : _30_;
  assign _31_ = _22_ ? 1'h1 : 1'h0;
  assign _16_ = rst ? 1'h0 : _31_;
  assign _32_ = _18_ ? 1'h1 : 1'h0;
  assign _33_ = _18_ ? _06_ : 512'h00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
  assign _34_ = _18_ ? y_loc[1:0] : 2'h0;
  always @(posedge clk) begin
    if (_14_) begin
      $write("M,%0d,%0d,%1d,%1d\n", $unsigned(now), $unsigned(o[511:0]), $unsigned(X), $unsigned(Y));
    end
    if (_16_) begin
      $write("A,%0d,%0d,%0d,%0d\n", $unsigned(now), $unsigned(_09_), $unsigned({ 14'h0000, x_loc[1:0] }), $unsigned({ 14'h0000, y_loc[1:0] }));
    end
    if (_15_) begin
      $write("S,%0d,%0d,%1d,%1d\n", $unsigned(now), $unsigned(_04_), $unsigned(i[515:514]), $unsigned(i[513:512]));
    end
  end
  assign _26_[0] = 1'h0;
  assign _27_[0] = 1'h0;
  assign next[515:0] = 516'h000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
  assign x_loc[15:2] = 14'h0000;
  assign y_loc[15:2] = 14'h0000;
endmodule
/*verilator lint_on WIDTHEXPAND*/
/*verilator lint_on WIDTHTRUNC*/
/*verilator lint_on UNUSEDSIGNAL*/
/*verilator lint_on DECLFILENAME*/