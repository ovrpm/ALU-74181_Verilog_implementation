module alu(
	input wire carry_in,
	input wire [15:0] in_a,
	input wire [15:0] in_b,
	input wire [3:0] sel,
	input wire mode,
	output wire carry_out,
	output wire compare,
	output reg [15:0] alu_out
);
	assign compare = (in_a == in_b);
	wire [15:0] ar_out;
	wire [15:0] lo_out;	

	arithmetics ar(carry_in, in_a, in_b, sel, carry_out, ar_out);
	logics lo(in_a, in_b, sel, lo_out);

	always @ (*) begin
		alu_out = 0;
		case (mode)
			1'b1: alu_out = lo_out;
			1'b0: alu_out = ar_out;
		endcase
	end
endmodule

module cout16(
	input wire carry_in,
	input wire [15:0] in_a,
	input wire [15:0] in_b,
	output wire carry_out
);
	reg out[15:0];

	reg [15:0] carry_vector;
	assign carry_out = carry_vector[15];

	assign out[0] = in_a[0] ^ in_b[0] ^ carry_in;
	assign carry_vector[0] = (in_a[0] & carry_in) | (in_a[0] & in_b[0]) | (in_b[0] & carry_in);

	always @(*) begin
		for (integer i = 1; i < 16; i = i + 1) begin
			out[i] = in_a[i] ^ in_b[i] ^ carry_vector[i - 1];
			carry_vector[i] = (in_a[i] & carry_vector[i - 1]) | (in_a[i] & in_b[i]) | (in_b[i] & carry_vector[i - 1]);
		end
	end
endmodule


module arithmetics(
	input wire carry_in,
	input wire [15:0] in_a,
	input wire [15:0] in_b,
	input wire [3:0] sel,
	output wire carry_out,
	output wire [15:0] arithmetics_out
);
	reg [15:0] out;
	reg cout;
	assign arithmetics_out = out;
	assign carry_out = cout;

	wire cout0101;
	wire cout0110;
	wire cout0111;
	wire cout1000;
	wire cout1001;
	wire cout1010;
	wire cout1011;
	wire cout1100;
	wire cout1101;
	wire cout1110;
	wire cout1111;

	cout16 cout1(carry_in, in_a | in_b, in_a & ~in_b, cout0101);
	cout16 cout2(carry_in, 0, in_a - in_b - 1, cout0110);
	cout16 cout3(carry_in, (in_a & ~in_b) - 1, 0, cout0111);
	cout16 cout4(carry_in, in_a, in_a & in_b, cout1000);
	cout16 cout5(carry_in, in_a, in_b, cout1001);
	cout16 cout6(carry_in, (in_a | ~in_b), (in_a & in_b), cout1010);
	cout16 cout7(carry_in, (in_a & in_b) - 1, 0, cout1011);
	cout16 cout8(carry_in, in_a, in_a, cout1100);
	cout16 cout9(carry_in, (in_a | in_b), in_a, cout1101);
	cout16 cout10(carry_in, (in_a | ~in_b), in_a, cout1110);
	cout16 cout11(carry_in, in_a - 1, 0, cout1111);


	always @ (*) begin
		case (sel)
			4'b0000: out = in_a;
			4'b0001: out = in_a | in_b;
			4'b0010: out = in_a | ~in_b;
			4'b0011: out = 1;
			4'b0100: out = in_a | (in_a & ~ in_b);
			4'b0101: begin
				out = (in_a | in_b) + (in_a & ~in_b) + carry_in;
				cout = cout0101;
			end
			4'b0110: begin
				out = in_a - in_b - 1 + carry_in;
				cout = cout0110;
			end
			4'b0111: begin
				out = (in_a & ~in_b) - 1 + carry_in;
				cout = cout0111;
			end
			4'b1000: begin
				out = in_a + (in_a & in_b) + carry_in;
				cout = cout1000;
			end
			4'b1001: begin
				out = in_a + in_b + carry_in;
				cout = cout1001;
			end
			4'b1010: begin
				out = (in_a | ~in_b) + (in_a & in_b) + carry_in;
				cout = cout1010;
			end
			4'b1011: begin
			       	out = (in_a & in_b) - 1 + carry_in;
				cout = cout1011;
			end
			4'b1100: begin
   			        out = in_a + in_a + carry_in;
				cout = cout1100;
			end
			4'b1101: begin
				out = (in_a | in_b) + in_a + carry_in;
				cout = cout1101;
			end
			4'b1110: begin
				out = (in_a | ~in_b) + in_a + carry_in;
				cout = cout1110;
			end
			4'b1111:begin
			       	out = in_a - 1 + carry_in; 	
				cout = cout1111;
			end
		endcase
	end
endmodule


module logics(
	input wire [15:0] in_a,
	input wire [15:0] in_b,
	input wire [3:0] sel,
	output wire [15:0] logic_out
);
	reg[15:0] out;
	assign logic_out = out;

	always @ (*) begin
		case(sel)
			4'b0000: out = ~in_a;
			4'b0001: out = ~(in_a | in_b);
			4'b0010: out = ~in_a & in_b;
			4'b0011: out = 0;
			4'b0100: out = ~(in_a & in_b);
			4'b0101: out = ~in_b;
			4'b0110: out = in_a ^ in_b;
			4'b0111: out = in_a & ~in_b;
			4'b1000: out = ~in_a | in_b;
			4'b1001: out = ~(in_a ^ in_b);
			4'b1010: out = in_b;
			4'b1011: out = in_a & in_b;
			4'b1100: out = 1;
			4'b1101: out = in_a | ~in_b;
			4'b1110: out = in_a | in_b;
			4'b1111: out = in_a;
		endcase
	end
endmodule
