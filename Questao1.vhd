library STD;
USE STANDARD.ALL;

entity nandPort is
port(
	A,B: IN BIT;
	X:   OUT BIT
    );
end nandPort;

architecture q1 of nandPort is
BEGIN
	X <= NOT(NOT(A AND B));
end q1;
