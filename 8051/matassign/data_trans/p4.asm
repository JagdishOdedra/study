X1 EQU 0123H
X2 EQU 0234H

CSEG AT 0H

	MOV DPTR,#X1
	MOVX A,@DPTR
	MOV TL0,A

	MOV DPTR,#X2
	MOVX A,@DPTR
	MOV TH0,A

END