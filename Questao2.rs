fn main(){
	let mut A:u8 ;
	let mut B:u8 ;
	let mut x:u8;
	

	A = 0;
	B = 0;
	x = !(!(A&B));
	println("NOT(NOT (A AND B))(quando A=0 e B=0):{}", x);
	A = 0;
	B = 1;
	x = !(!(A&B));
	println("NOT(NOT (A AND B))(quando A=0 e B=1):{}", x);
	A = 1;
	B = 1;
	x = !(!(A&B));
	println("NOT(NOT (A AND B))(quando A=1 e B=1):{}", x);
	A = 1;
	B = 0;
	x = !(!(A&B));
	println("NOT(NOT (A AND B))(quando A=1 e B=0):{}", x);
}
