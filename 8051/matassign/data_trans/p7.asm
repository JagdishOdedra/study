CSEG AT 0H
	MOV R0,#05
	MOV R1,#10

	MOV A,R0

	ANL A,#0FH
	MOV R3,A
	MOV A,R1
	ANL A,#0FH
	MOV R4,A

	MOV A,R1
	SUBB A,R4
	ADD A,R3
	MOV R1,A

	MOV A,R0
	SUBB A,R3
	ADD A,R4
	MOV R0,A
END