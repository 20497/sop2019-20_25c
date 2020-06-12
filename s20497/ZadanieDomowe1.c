#include <stdio.h>
#include <stdlib.h>
struct elementListy{
	int liczba;
	struct elementListy *nastepny;
};

void Dodaj(struct elementListy **lista, int wartosc){
	struct elementListy *nowy=malloc(sizeof(struct elementListy));
	nowy->liczba=wartosc;
	nowy->nastepny=NULL;
	while(*lista!=NULL){
		lista=lista->nastepny;	
	}
	*lista=nowy;
}

void Wypisz(struct elementListy *lista){
	while(lista!=NULL){
		printf("%d ",lista->liczba);
		lista=lista->nastepny;
	}
}

void main(){
	int i;
	struct elementListy *lista=NULL;

	for(i=0; i<6; i++){
		Dodaj(&lista, i);	
	}
	Wypisz(lista);
}

