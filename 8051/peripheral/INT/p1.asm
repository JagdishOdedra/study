LED BIT P2.0
CSEG AT 0X0003
	CPL LED
RETI

CSEG AT 0X0000
	AJMP MAIN

CSEG AT 0X0050
MAIN:
	MOV IE,#81H
	MOV A,#1

HERE:
		MOV P1,A
		RL A
		SJMP HERE
END