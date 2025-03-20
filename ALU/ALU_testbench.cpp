#include "ap_int.h"
void ALU(ap_uint<4> sel,ap_uint<4> a,ap_uint<4> b,ap_uint<8> &outs);
int main(){
	ap_uint<4> sel;ap_uint<4> a;ap_uint<4> b;ap_uint<8> outs;
	sel=1;
	a=5;b=10;

//	 for (sel = 0; sel <=15; sel++) {
//	        ALU(sel, a, b, outs);
//	        std::cout << "sel=" << sel << " a=" << a << " b=" << b << " outs=" << outs << std::endl;
//	    }
	//
	ALU(sel,a,b,outs);
	std::cout<<"a="<<a<<"b="<<b<<"outs="<<outs<<" addition"<<std::endl;
sel=2;
a=10;b=5;
ALU(sel,a,b,outs);
	std::cout<<"a="<<a<<"b="<<b<<"outs="<<outs<<" subtraction"<<std::endl;
sel=3;
ALU(sel,a,b,outs);
	std::cout<<"a="<<a<<"b="<<b<<"outs="<<outs<<" Multiplication"<<std::endl;
sel=4;
ALU(sel,a,b,outs);
	std::cout<<"a="<<a<<"b="<<b<<"outs="<<outs<<" Division"<<std::endl;
sel=5;
ALU(sel,a,b,outs);
	std::cout<<"a="<<a<<"b="<<b<<"outs="<<outs<<" Modulo %"<<std::endl;
sel=6;
ALU(sel,a,b,outs);
	std::cout<<"a="<<a<<"b="<<b<<"outs="<<outs<<" <<"<<std::endl;
sel=7;
ALU(sel,a,b,outs);
	std::cout<<"a="<<a<<"b="<<b<<"outs="<<outs<< " >>"<<std::endl;
sel=8;
ALU(sel,a,b,outs);
	std::cout<<"a="<<a<<"b="<<b<<"outs="<<outs<<" b"<<std::endl;
sel=9;
ALU(sel,a,b,outs);
	std::cout<<"a="<<a<<"b="<<b<<"outs="<<outs<<" and"<<std::endl;
sel=10;
ALU(sel,a,b,outs);
	std::cout<<"a="<<a<<"b="<<b<<"outs="<<outs<<" or"<<std::endl;
sel=11;
ALU(sel,a,b,outs);
	std::cout<<"a="<<a<<"b="<<b<<"outs="<<outs<<" xor"<<std::endl;
sel=12;
ALU(sel,a,b,outs);
	std::cout<<"a="<<a<<"b="<<b<<"outs="<<outs<<" xnor"<<std::endl;
sel=13;
ALU(sel,a,b,outs);
	std::cout<<"a="<<a<<"b="<<b<<"outs="<<outs<<" a"<<std::endl;
sel=14;
ALU(sel,a,b,outs);
	std::cout<<"a="<<a<<"b="<<b<<"outs="<<outs<<" ~a"<<std::endl;
sel=15;ALU(sel,a,b,outs);
std::cout<<"a="<<a<<"b="<<b<<"outs="<<outs<<" ~b"<<std::endl;
sel=0;
ALU(sel,a,b,outs);
	std::cout<<"a="<<a<<"b="<<b<<"outs="<<outs<<" 0"<<std::endl;

}
