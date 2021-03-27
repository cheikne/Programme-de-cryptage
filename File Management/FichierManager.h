#ifndef FICHIERMANAGER_H_INCLUDED
#define FICHIERMANAGER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void fillerFile(char *_file_ );
extern char *CharCryptionMinuscl( char *mycrypt,int index);
extern char *CharCryptionMajusc( char *mycrypt,int index);
extern void CondingCharacterAxcentue(char *mycrypt[]); 
void Count();
void Syntax();
// void FillerFileCrypt(char *fileCrypt);
void CodingCharacterMinusc(char *fileCrypt,int key);
void Decryptage(char *fileCrypt);
int ComparMot(char Mot[],int *M,int *N,int *L,int *P);
int DecryptageKey(char *fileCrypt,char *key_crypt);
void CondingCharSpecial(FILE *fileWrite,char phrase[],int index);
void CodingCaractAccentue(FILE *fileWrite,char phrase[],int index);
// extern void CodingCharacterMajusc(char const *fileCrypt,int key);
// extern void CodingCharacterSpecial(char const *fileCrypt,int key);
extern void CharacterMinsc(char p[]);
extern void CharacterMajusc(char p[]);
void StrcmpWord(char *Mot[]);
void EncryptKey(char *key);


enum{a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,
					  q,r,s,t,u,v,w,x,y,z} bool1;

enum{A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,
					  Q,R,S,T,U,V,W,X,Y,Z} bool2;
enum{twopoint,slash,tiret,anderscore,exclamation,arobase,
		diese,dolar,pourcentage,ecomercial,etoile,parentheseO,parentheseF,
		acoladeO,acoladeF,crochetO,crochetF,virgule,
		pointvirgule,guillemet,plus,egal,chapeau,point,interogation,
		superieur,inferieur,barre,espace,apostrophe,anti_slash,
	    apo1,apo2,apo3,apo4}bool3;

enum{a_accent_grave,a_accent_chapeau,a_accent_aigui,e_accent_aigui,e_accent_grave,
	 e_accent_chapeau,o_accent_grave,o_accent_chapeau,u_accent_chapeau,
	 u_accent_grave,u_accent_aigui,c_cedile,i_chapeau,i_accent_aigui,
	  i_accent_grave,i_accent_twopoint}bool4;

// char *Char_Accentue[]={"à","â","á","é","è","ê","ò","ô","û","ù","ú","ç"}
// char *Var[] = {"kOWmOW6_6","=65oO0","*tT_Gt5*","+yt_6]",
// 				"1cXy_yfGT3ftz","H{9zDy1X}fmX=","yZ63G=6+toXYyHX0+o",
// 				"GXTm02U*","6h1um097","5H1sTAHYG6","HD+{X1h_1S_","5_YsSJZTJo"
// 			}; 
// char SpecialChar[]={':','/','-','_','!','@','#','$','%','&','*','(',
// 					')','{','}','[',']',',',';','"','+','=','^',
// 					'.','?','>','<','|','՛','՝','՚','׳'};

#endif