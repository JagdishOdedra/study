CSEG AT 0H
MAIN:
	MOV A,#01
	MOV R7,#8
	MOV R0,#0
	
BACK:
	RLC A
	JNC NEXT
	INC R0
NEXT:
	DJNZ R7,BACK
	SJMP $
END
	
	