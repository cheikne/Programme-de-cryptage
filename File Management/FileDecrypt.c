#include "FichierManager.h"
extern char *Minus_Caractere[26];
extern char *Majus_Caractere[26];
extern char *Code_accentue[16];
extern char *Char_Special[31];
extern char SpecialChar[31];
void Decryptage(char *fileCrypt){
	char mychar[30],Mot[30],c;
	int index=0,i=0,N=0,M=0,L=0,P=0;
	char Char_Minusc[28],Char_Majusc[28];
	char *Char_Accentue[]={"à","â","á","é","è","ê","ò","ô","û","ù","ú","ç",
							"î","í","ì","ï"};
	// printf("char_accentue : %s  %s  %s\n",Char_Accentue[0],Char_Accentue[1],Char_Accentue[2]);
	// exit(EXIT_FAILURE);
	//**************************************
	// char *mycrypt_Minuscl[28];
	// char *mycrypt_Majusc[28];
	// CharCryptionMinuscl(mycrypt_Minuscl);
	// CharCryptionMajusc(mycrypt_Majusc);
	//****************************************
	FILE *file_read =NULL;
	FILE *file_write = NULL;
	file_read = fopen(fileCrypt,"r");
	file_write = fopen("File_Decrypte.txt","w");
	if(!file_read || !file_write){
		// printf("hellloooooooo\n");
		printf("Impossible d'ouvrir le fichier: %s\n",fileCrypt);
		exit(EXIT_FAILURE);
	}
	CharacterMinsc(Char_Minusc);
	CharacterMajusc(Char_Majusc);
	do{
		c = fgetc(file_read);
		if(c=='|'|| c=='#' || c=='@' || c=='&' || 
			c=='$' || c=='!' || c=='%' || c=='(' || c==')'){
			// Mot = (char *)malloc((i+1)*sizeof(char));
			// if(!Mot){
			// 	printf("Espace non disponible.\n");
			// 	exit(EXIT_FAILURE);
			// }
			strcpy(Mot ,mychar);
			Mot[i] = '\0';
			mychar[0] = '\0';
			index = ComparMot(Mot,&M,&N,&L,&P);
			// printf("M = %d  et N = %d  L=%d  index =%d,Mot :%s\n",M,N,L,index,Mot);
			if(N==1){
				fputc(Char_Minusc[index],file_write);
				// printf("%c \n",Char_Minusc[index]);
				N=M=L=P=0;
			}else if(M==1){
				fputc(Char_Majusc[index],file_write);
				// fprintf(file_write,"%c",Char_Majusc[index]);
				// printf("%c \n",Char_Majusc[index]);
				N=M=L=P=0;
			}else if(L==1){
				fprintf(file_write,"%s",Char_Accentue[index]);
				N=M=L=P=0;
			}else if(P==1){
				fprintf(file_write,"%c",SpecialChar[index]);
				N=M=L=P=0;
			}

			i=0;
		}
		else if(c=='~'){
			fprintf(file_write,"\n");
		}
		else if(c==':'){
			break;
		}
		else{
			mychar[i] = c;
			i++;
		}
	}while(c !=EOF);
	fclose(file_read);
	fclose(file_write);
	// remove(fileCrypt);
}
void Count(){
	int i,j;
	for(int i=0;i<28;i++){
		for(j=0;j<26 && j!=i;j++){
			if(strcmp(Minus_Caractere[i],Majus_Caractere[j])==0)
				printf("Mot_Min[%d] = %s  Mot_Maj[%d] = %s\n",i,Minus_Caractere[i],j,Majus_Caractere[j]);
		}
	}
}
int ComparMot(char Mot[],int *M,int *N,int *L,int *P){
	int i=0;
	for(i=0;i<26;i++){
		if(strcmp(Mot,Minus_Caractere[i])==0){
			*N=1;
			return i;
		}
	}
	if(*N==0){
		for(i=0;i<26;i++){
			if(strcmp(Mot,Majus_Caractere[i])==0){
				*M=1;
				return i;
			}
		}
	}
	if(*M==0){
		for(i=0;i<16;i++){
			// printf("Mot : %s  Caractere special: %s\n",Mot,Code_accentue[i]);
			if(strcmp(Mot,Code_accentue[i])==0){
				*L=1;
				return i;
			}
		}
	}
	if(*L==0){
		for(i=0;i<31;i++){
			// printf("Mot : %s  Caractere special: %s\n",Mot,Code_accentue[i]);
			if(strcmp(Mot,Char_Special[i])==0){
				*P=1;
				return i;
			}
		}
	}
	printf("Ce fichier ne peut pas etre decrypte\n");
	exit(EXIT_FAILURE);
}
int DecryptageKey(char *fileCrypt,char *key_crypt){
	char mychar[30],Mot[30],key[20],c;
	int index=0,i=0,M=0,N=0,k=0,L=0,P=0;
	char Char_Minusc[28],Char_Majusc[28];
	char *Char_Accentue[]={"à","â","á","é","è","ê","ò","ô","û","ù","ú","ç"};
	FILE *file_read = fopen(fileCrypt,"r");
	if(!file_read){
		printf("Impossible d'ouvrir le fichier: %s\n",fileCrypt);
		exit(EXIT_FAILURE);
	}
	CharacterMinsc(Char_Minusc);
	CharacterMajusc(Char_Majusc);
	do{
		c = fgetc(file_read);
	}while(c!='?');
	do{
		c = fgetc(file_read);
		if(c=='|'|| c=='#' || c=='@' || c=='&' || 
			c=='$' || c=='!' || c=='%' || c=='(' || c==')'){
			// Mot = (char *)malloc((i+1)*sizeof(char));
			// if(!Mot){
			// 	printf("Espace non disponible.\n");
			// 	exit(EXIT_FAILURE);
			// }
			strcpy(Mot ,mychar);
			// int str = strlen(mychar);
			// for(j=i-1;j<str;j++){
				
			// }
			Mot[i] ='\0';
			mychar[0] ='\0';
			// printf("Mot : %s,mychar : %s\n",Mot,mychar);
			index = ComparMot(Mot,&M,&N,&L,&P);
			
			// printf("M = %d  et N = %d\n",M,N);
			if(N){
				key[k] = Char_Minusc[index];k++;
				N=M=L=P=0;
			}else if(M==1){
				key[k] = Char_Majusc[index];k++;
				N=M=L=P=0;
			}else if(L==1){
				strcat(key,Char_Accentue[index]);
				k = strlen(key)+1;
				N=M=L=P=0;
			}else if(P==1){
				key[k] = SpecialChar[index];
				k++;
				N=M=L=P=0;

			}
			// free(Mot);
			i=0;
		}
		// else if(c=='~')
		// 	break;
			// goto Fin;
		else{
			mychar[i] = c;
			i++;
		}
	}while(c !='~');
		fclose(file_read);
		key[k] ='\0';
		if(strcmp(key,key_crypt)!=0){
			printf("Votre Cle de chiffrement est incorrecte!!\n");
			printf("Cle incorrecte: %s\n",key_crypt);
			exit(EXIT_FAILURE);
		}
		else
			return 1;
}