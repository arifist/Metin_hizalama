#include <stdio.h>
#include <string.h>
int main(){
	//sagahizala();
	//solahizala();
	ortayahizala();
	return 0;
}
int sagahizala(){
	enum {MAX_LINE_LEN=50};
	char fazlabosluk;
	int i;
	char satir[MAX_LINE_LEN]="benim adim arif kalayci";
	char dizi[MAX_LINE_LEN];
	fazlabosluk=MAX_LINE_LEN-strlen(satir);
	for(i=0;i<fazlabosluk;i++){
		dizi[i]=' ';
	}
	strcat(dizi,satir);
	
	for(i=0;i<MAX_LINE_LEN;i++){
		printf("%c",dizi[i]);
	}
}
int solahizala(){
	enum {MAX_LINE_LEN=50};
	char fazlabosluk;
	int i;
	char satir[MAX_LINE_LEN]="benim adim arif kalayci";
	char dizi[MAX_LINE_LEN];
	fazlabosluk=MAX_LINE_LEN-strlen(satir);
	for(i=0;i<fazlabosluk;i++){
		dizi[i]=' ';
	}
	strcat(satir,dizi);
	
	for(i=0;i<MAX_LINE_LEN;i++){
		printf("%c",satir[i]);
	}
}
int ortayahizala(){
	enum {MAX_LINE_LEN=50};
	char fazlabosluk;	
	int sonuc,j,k,i;
	int kelimesayisi=1;
	char satir[MAX_LINE_LEN]="benim adim arif kalayci";
	for(k=0;k<strlen(satir);k++){
		if(satir[k]==' '){
			kelimesayisi++;
		}
	}
	fazlabosluk=MAX_LINE_LEN-strlen(satir);
	for(i=0;i<fazlabosluk;i++){
		if(satir[i]!=' '){
			putchar(satir[i]);
		}
		else{
			sonuc=fazlabosluk/kelimesayisi-1;
			for(j=0;j<sonuc;j++){
				putchar(' ');
				
			}
				
			}
		}
		
	}
	

