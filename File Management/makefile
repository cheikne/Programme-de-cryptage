all:crypt.e
FichierManager.o:FichierManager.c 
	gcc -c FichierManager.c 
CharCryption.o:CharCryption.c
	gcc -c CharCryption.c
FileDecrypt.o:FileDecrypt.c
	gcc -c FileDecrypt.c
CodageCaractere.o:CodageCaractere.c
	gcc -c CodageCaractere.c 
main.o:main.c 
	gcc -c main.c 
crypt.e:main.o FileDecrypt.o CodageCaractere.o FichierManager.o CharCryption.o
	gcc  main.o FileDecrypt.o CodageCaractere.o FichierManager.o CharCryption.o -o crypt.e