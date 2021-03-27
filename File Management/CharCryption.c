#include <stdio.h>
#include<stdlib.h>
// char *CharCryptionMinuscl( char *mycrypt,int index){
// 	char *Var[] ={"D*TkW{[9TOW07H7}o","YgX2]_ZkT=tY}19",
// 						"19=k*fo[1HG3=O3o0{}","tz=3o137yk1_mXzk_k","k_Z_=T_[=3OZ}XzXtT",
// 						"t*{]gGf0zY[=WZ16[]","[ZG0[WWt{m=033]zmW]**gy*","{YT35Tzg}o=+1=HDW7G",
// 						"0A_TGT=XX1m*y}AWOgfZG_6O_k]","Z]HAkc9Wf[G]Xf*O7]",
// 						"f}Z907zWO*2X06Oz2t{","A0+_2c=H6gz*",
// 						"tX[[]tGWDYc+]mT5Y}z","0G*H{k2GmXg]GzY1079AA0",
// 						"[Yg+10X{W*OXYH+DXZ=2","oTcY75T==kX0[WWtZ","{XDo_77X+]zZ1gokf",
// 						"c++[7+13kY+Xz*[mctoY}","0fZcAXt00X7z[z+kAYc",
// 						"c2G+YO}AHZX9Y03z=","z_X_6D[1_7WyYA[YX*7Y*c[D7_*",
// 						"kOWmOW6_6*=65oO0=oXZWZ*t","T_Gt5*X3__zfWfOt}+yt_6]",
// 						"1cXy_yfGT3ftz]}k{H{9zDy1","X}fmX=TyZ63G=6+toXY","yHX0+oWDuTJW{[9TOW07",
// 						"H7}oYgh2*_ZJT=tY}191","9=JuFo[1HGS=OSo0{}tU=So1"
// 					};
	// int i;
	// for(i=0;i<28;i++){
	// 	mycrypt[i] = Var[i];
	// }
// 	strcpy(mycrypt,Var[index]);
// }

// char *CharCryptionMajusc( char *mycrypt,int index){
// 	char *Var[] ={
// 						"1cXy_yfGT3ftz]}k{H{9zDy1X}f","mX=TyZ63G=6+toXYyHX0+o","WDuTJW{[9TOW07H7}oYgh2*_ZJ",
// 						"T=tY}1919=JuFo[1HGS=OSo0{","}tU=So1S7yJ1_mhUJ_JJ_Z_=T_[=S","OZ}hUhtTtu{*gGF0UY[=WZ16[*",
// 						"[ZG0[WWt{m=0SS*UmW*uugyu{Y","TS5TUg}o=+1=HDW7G0A_TGT=X",
// 						"h1muy}AWOgFZG_6O_J*Z*HA","Js9WF[G*XFuO7*F}Z907UW",
// 						"Ou2X06OU2t{A0+_2s=H6gUu","th[[*tGWDYs+*mT5Y}U0GuH",
// 						"{J2GmXg*GUY1079AA0[Yg+10","h{WuOXYH+DhZ=2oTsY75T==JX0","[WWtZ{hDo_77X+*UZ1goJFs++[7+1SJ",
// 						"Y+XUu[mstoY}0FZsAXt00h","7U[U+JAYss2G+YO}AHZX9Y",
// 						"0SU=U_X_6D[1_7WyYA[Yhu7Yus[D","7_uJOWmOW6_6u=65oO0=ohZ",
// 						"WZutT_Gt5uXS__UFWFOt}+yt_6*1","sXy_yFGTSFtU*}J{H",
// 						"{9UDy1h}Fmh=TyZ6SG=6+toX","YyHX0+oWJ5U5Yy62g}S{9O","OFXo_DAsyU+10A[6u57O=tWFsY*h",
// 						"=*s*oAF{*U6+htm=[s=HsSXY","7tZA00HZs0oJA10mOT[5sDt1Hu"
// 					};
	// int i;
	// for(i=0;i<28;i++){
	// 	mycrypt[i] = Var[i];
	// }
	// strcpy(mycrypt,Var[index]);
					// StrcmpWord(Var);
// }
void CondingCharacterAxcentue(char *mycrypt[]){
    char *Var[] = {"kOWmOW6_6","=65oO0","*tT_Gt5*","+yt_6]",
					"1cXy_yfGT3ftz","H{9zDy1X}fmX=","yZ63G=6+toXYyHX0+o"
				};
	int i;
	for(i=0;i<7;i++){
		mycrypt[i] = Var[i];
	}
}

void CodingCharacterSpecial(char const *fileCrypt,int key){

}

void CharacterMinsc(char p[]){
	char mychar[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p',
					  'q','r','s','t','u','v','w','x','y','z',' '
					};
	int i=0;
	while(i<27){
		p[i] = mychar[i];
		i++;
	}
}
//La fonction qui renvoi un caracteur

void CharacterMajusc(char p[]){
	char mychar[] ={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P',
					  'Q','R','S','T','U','V','W','X','Y','Z'
				};
	int i=0;
	while(i<26){
		p[i] = mychar[i];
		i++;
	}
}