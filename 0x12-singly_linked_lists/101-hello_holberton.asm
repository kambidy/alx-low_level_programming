	global   main
	  extern    printf
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
	  ret
<<<<<<< HEAD
format: db `Hello, Holberton\n ,0
=======
format: db `Hello, Holberton\n`,0
>>>>>>> 977db24706100f7d11bfd4efb11c8c47a328000f
