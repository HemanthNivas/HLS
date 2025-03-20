#include "ap_int.h"

void ALU(ap_uint<4> sel,ap_uint<4> a,ap_uint<4> b,ap_uint<8> &outs){
//#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS PIPELINE
#pragma HLS INTERFACE ap_none port=outs
#pragma HLS INTERFACE ap_none port=b
#pragma HLS INTERFACE ap_none port=a
#pragma HLS INTERFACE ap_none port=sel
	switch(sel){
	case 0:outs=0; break;
	case 1:outs=a+b;
	break;
	case 2:outs=a-b;
	break;
	case 3:outs=a*b;
	break;
	case 4:outs=a/b;
	break;
	case 5:outs=a%b;
	break;
	case 6:outs=a<<b;
	break;
	case 7:outs=a>>b;
	break;
	case 8:outs=b;
	break;
	case 9:outs=a&b;
	break;
	case 10:outs=a|b;
	break;
	case 11:outs=a^b;
	break;
	case 12:outs=~(a^b);
	break;
	case 13:outs=a;
	break;
	case 14:outs=~a; break;
	case 15:outs=~b; break;
	}
}
