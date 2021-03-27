#include "FichierManager.h"

int main(int argc, char *argv[]){
	int test=0,i=0;char crypt[]="-c",decrypt[]="-d";
	if(argc !=4){
		Syntax();
	}
	if(strcmp(crypt,argv[1])==0){
		CodingCharacterMinusc(argv[2],1);
		EncryptKey(argv[3]);
		remove(argv[2]);
		rename("fileCrypt.txt",argv[2]);
	}
	else if(strcmp(decrypt,argv[1])==0){
		test = DecryptageKey(argv[2],argv[3]);
		if(test){
			//printf("Cle de chiffrement Correcte .\n");
			Decryptage(argv[2]);
			remove(argv[2]);
			rename("File_Decrypte.txt",argv[2]);
		}
	}
	else 
		Syntax();
	// file = malloc(strlen(argv[1]));
	// key = malloc(strlen(argv[2]));
	// strcpy(file,argv[1]);
	// strcpy(key,argv[2]);
	// printf("argv[1] =%s et argv[2] =%s\n",file,key);
	
	
	// Count();
	// printf("a=%d,b=%d,c=%d,d=%d,e=%d,f=%d\n",a,b,c,d,e,f);

		// CodingCharacterMinusc(argv[1],1);
		// EncryptKey(argv[2]);
		// remove(argv[1]);
	// int test=0;
	// test = DecryptageKey(argv[1],argv[2]);
	// 	if(test){
	// 		printf("Cle de chiffrement Correcte .\n");
	// 		// printf("helloooooooooooooo : %s\n",argv[1]);
	// 		Decryptage(argv[1]);
			
	// 	}
	printf("Execution avec succes.\n");
	return 0;
}