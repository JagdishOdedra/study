CSEG AT 0H
MAIN:
	MOV R0,#250
	DJNZ R0,$
	MOV R0,#249
	DJNZ R0,$
	SJMP $
END