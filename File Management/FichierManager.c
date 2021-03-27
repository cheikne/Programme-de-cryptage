#include "FichierManager.h"
extern char *Minus_Caractere[28];
extern char *Majus_Caractere[26];
extern char *Code_accentue[16];
extern char SpecialChar[31];
extern char *Char_Special[31];
char separator[] = {'|','#','@','&','$','!','%','(',')'};
void CodingCharacterMinusc(char *fileCrypt,int key){
	char phrase[1000];
	int num,index,accent;
	FILE *file=NULL,*fileRead=NULL;
	file =key?fopen("FileE.txt","w"):fopen("FileE.txt","a");
	fileRead = fopen(fileCrypt,"r");
	if(!file || !fileRead){
		printf("Imposible d'ouvrir le fichier : FileEphemeral.txt.\n");
		exit(EXIT_FAILURE);
	}
	if(key==0)
		fprintf(file, "%c%c",':','?');
	while(fgets(phrase,1000,fileRead) !=NULL){
		int str = strlen(phrase)+2;
		for(index=0;index<str;index++){
			accent = (int)phrase[index];
			// printf("c = %c  accent =%d\n",phrase[index],accent);
			if(index+1 ==str)
				fprintf(file,"%c",'~');
			else if(accent==-61){
				CodingCaractAccentue(file,phrase,index);
				index++;
			}
			else{
				// printf("phrase[%d]=%c\n",i,phrase[i]);
				if((phrase[index]>='A' && phrase[index]<='Z') ||
					 (phrase[index]>='a' && phrase[index]<='z')){
					switch(phrase[index]){
						case 'a':{
							num = (rand() %8) + 1;
							fprintf(file,"%s%c",Minus_Caractere[a],separator[num]);
							break;
						}case 'b':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[b],separator[num]);
							break;
						}case 'c':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[c],separator[num]);
							break;
						}case 'd':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[d],separator[num]);
							break;
						}case 'e':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[e],separator[num]);
							break;
						}case 'f':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[f],separator[num]);
							break;
						}case 'g':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[g],separator[num]);
							break;
						}case 'h':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[h],separator[num]);
							break;
						}case 'i':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[i],separator[num]);
							break;
						}case 'j':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[j],separator[num]);
							break;
						}case 'k':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[k],separator[num]);
							break;
						}case 'l':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[l],separator[num]);
							break;
						}case 'm':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[m],separator[num]);
							break;
						}case 'n':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[n],separator[num]);
							break;
						}case 'o':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[o],separator[num]);
							break;
						}case 'p':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[p],separator[num]);
							break;
						}case 'q':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[q],separator[num]);
							break;
						}case 'r':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[r],separator[num]);
							break;
						}case 's':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[s],separator[num]);
							break;
						}case 't':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[t],separator[num]);
							break;
						}case 'u':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[u],separator[num]);
							break;
						}case 'v':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[v],separator[num]);
							break;
						}case 'w':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[w],separator[num]);
							break;
						}case 'x':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[x],separator[num]);
							break;
						}case 'y':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[y],separator[num]);
							break;
						}case 'z':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Minus_Caractere[z],separator[num]);
							break;
						}case 'A':{
							num = (rand() %8) + 1;
							fprintf(file,"%s%c",Majus_Caractere[A],separator[num]);
							break;
						}case 'B':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[B],separator[num]);
							break;
						}case 'C':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[C],separator[num]);
							break;
						}case 'D':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[D],separator[num]);
							break;
						}case 'E':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[E],separator[num]);
							break;
						}case 'F':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[F],separator[num]);
							break;
						}case 'G':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[G],separator[num]);
							break;
						}case 'H':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[H],separator[num]);
							break;
						}case 'I':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[I],separator[num]);
							break;
						}case 'J':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[J],separator[num]);
							break;
						}case 'K':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[K],separator[num]);
							break;
						}case 'L':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[L],separator[num]);
							break;
						}case 'M':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[M],separator[num]);
							break;
						}case 'N':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[N],separator[num]);
							break;
						}case 'O':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[O],separator[num]);
							break;
						}case 'P':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[P],separator[num]);
							break;
						}case 'Q':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[Q],separator[num]);
							break;
						}case 'R':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[R],separator[num]);
							break;
						}case 'S':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[S],separator[num]);
							break;
						}case 'T':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[T],separator[num]);
							break;
						}case 'U':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[U],separator[num]);
							break;
						}case 'V':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[V],separator[num]);
							break;
						}case 'W':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[W],separator[num]);
							break;
						}case 'X':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[X],separator[num]);
							break;
						}case 'Y':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[Y],separator[num]);
							break;
						}case 'Z':{
							num = (rand() %8) + 1;
							fprintf(file, "%s%c",Majus_Caractere[Z],separator[num]);
							break;
						}default :{
							break;
							//printf("Aucune reponse :Veuillez verifier votre caractere %c.\n",phrase[i]);
						}
					}
				}else{
					CondingCharSpecial(file,phrase,index);
				}
			}
		}
	}
	fclose(file);
	fclose(fileRead);
	if(key==0){
		rename("FileE.txt","fileCrypt.txt");
	}

}
/***************************************************/
void EncryptKey(char *key){
	FILE *file = fopen("FileKey.txt","w");
	if(!file){
		printf("Imposible d'ouvrir le fichier :FileKey.\n");
		exit(EXIT_FAILURE);
	}
	fprintf(file, "%s",key);
	fclose(file);
	CodingCharacterMinusc("FileKey.txt",0);
	remove("FileKey.txt");
}
/******************************************************/
// srand(time(0)); 


void StrcmpWord(char *Mot[]){
	int i,j,boole=0;
	for(i=1;i<28;i++){
		for(j=0;j<28,j!=i;j++){
			if(strcmp(Mot[i],Mot[j])==0){
				printf("La position de i= %d et j= %d sont les memes \n",i,j);
				boole=1;
			}
			else
				boole = 0;
		}
	}
	if(!boole)
		printf("Toutes les lignes sont differentes \n");
}
void Syntax(){
	char c;
	FILE *file = fopen("FichierOption.txt","r");
	if(!file){
		printf("Impossible d'ouvir :FichierOption.txt\n");
		exit(EXIT_FAILURE);
	}
	do{
		c = fgetc(file);
		printf("%c",c);
	}while(c !=EOF);
	fclose(file);
}
void CodingCaractAccentue(FILE *fileWrite,char phrase[],int index){
	char c;
	c= phrase[index+1];
	int num, accent = (int)c;
	switch(accent){
		case -88:{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Code_accentue[e_accent_grave],separator[num]);
			break;
		}case -87:{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Code_accentue[e_accent_aigui],separator[num]);
			break;
		}case -86:{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Code_accentue[e_accent_chapeau],separator[num]);
			break;
		}case -96:{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Code_accentue[a_accent_grave],separator[num]);
			break;
		}case -95:{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Code_accentue[a_accent_aigui],separator[num]);
			break;
		}case -94:{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Code_accentue[a_accent_chapeau],separator[num]);
			break;
		}case -69:{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Code_accentue[u_accent_chapeau],separator[num]);
			break;
		}case -71:{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Code_accentue[u_accent_grave],separator[num]);
			break;
		}case -70:{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Code_accentue[u_accent_aigui],separator[num]);
			break;
		}case -76:{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Code_accentue[o_accent_chapeau],separator[num]);
			break;
		}case -78:{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Code_accentue[o_accent_grave],separator[num]);
			break;
		}case -89:{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Code_accentue[c_cedile],separator[num]);
			break;
		}case -82:{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Code_accentue[i_chapeau],separator[num]);
			break;
		}case -81:{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Code_accentue[i_accent_twopoint],separator[num]);
			break;
		}case -83:{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Code_accentue[i_accent_aigui],separator[num]);
			break;
		}case -84:{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Code_accentue[i_accent_grave],separator[num]);
			break;
		}default:{
			break;
		}
	}
}
void CondingCharSpecial(FILE *fileWrite,char phrase[],int index){
	int num;
	switch(phrase[index]){
		case ':':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[twopoint],separator[num]);
			break;
		}case '/':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[slash],separator[num]);
			break;
		}case '-':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[tiret],separator[num]);
			break;
		}case '_':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[anderscore],separator[num]);
			break;
		}case '!':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[exclamation],separator[num]);
			break;
		}case '@':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[arobase],separator[num]);
			break;
		}case '#':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[diese],separator[num]);
			break;
		}case '$':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[dolar],separator[num]);
			break;
		}case '%':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[pourcentage],separator[num]);
			break;
		}case '&':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[ecomercial],separator[num]);
			break;
		}case '*':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[etoile],separator[num]);
			break;
		}case ')':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[parentheseF],separator[num]);
			break;
		}case '(':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[parentheseO],separator[num]);
			break;
		}case '}':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[acoladeF],separator[num]);
			break;
		}case '{':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[acoladeO],separator[num]);
			break;
		}case ']':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[crochetF],separator[num]);
			break;
		}case '[':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[crochetO],separator[num]);
			break;
		}case ',':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[virgule],separator[num]);
			break;
		}case ';':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[pointvirgule],separator[num]);
			break;
		}case '"':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[guillemet],separator[num]);
			break;
		}case '+':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[plus],separator[num]);
			break;
		}case '=':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[egal],separator[num]);
			break;
		}case '^':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[chapeau],separator[num]);
			break;
		}case '.':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[point],separator[num]);
			break;
		}case '?':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[interogation],separator[num]);
			break;
		}case '>':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[superieur],separator[num]);
			break;
		}case '<':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[inferieur],separator[num]);
			break;
		}case '|':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[barre],separator[num]);
			break;
		}case ' ':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[espace],separator[num]);
			break;
		}case '\'':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[apostrophe],separator[num]);
			break;
		}case '\\':{
			num = (rand() %8) + 1;
			fprintf(fileWrite,"%s%c",Char_Special[anti_slash],separator[num]);
			break;
		}default:{
			break;
		}
	}
}