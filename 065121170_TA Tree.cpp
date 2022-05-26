/*
	===Latief Ali Firdaus_065121170_TREE===
*/
#include <iostream>
using namespace std;
struct node{
 char data;
 node *kiri;
 node *kanan;
};

node *akar=NULL;
addNode(node **akar, char isi) {
 if((*akar)==NULL){
 node *baru;
 baru= new node;
 baru->data = isi;
 baru->kiri = NULL;
 baru->kanan = NULL;
 (*akar)=baru;
 }
}

preOrder(node *akar) {
 if(akar !=NULL) {
 printf("%c ", akar->data);
 preOrder(akar->kiri);
 preOrder(akar->kanan);
 }
}

inOrder(node *akar) {
 if(akar !=NULL) {
 inOrder(akar->kiri);
 printf("%c ", akar->data);
 inOrder(akar->kanan);
 }
}

postOrder(node *akar) {
 if(akar !=NULL) {
 postOrder(akar->kiri);
 postOrder(akar->kanan);
 printf("%c ", akar->data);
 }
}

main(){
char abjad;
printf("========Struktur Jabatan PT Hiraisin========");
printf("\n\n\tPosisi Awal Tree:\n\n");
printf("\t       Direktur H06\n\t      / \\\n\t     Manager H05  Supervisor H01\n\t    /\n\t   Superintendent H04\n\t  / \\\n\t Formen H03  Operator H02\n\n");
addNode(&akar,abjad='Direktur H06');
addNode(&akar->kiri,abjad='Manager H05');
addNode(&akar->kanan,abjad='Supervisor H01');
addNode(&akar->kiri->kiri,abjad='Superintendent H04');
addNode(&akar->kiri->kiri->kiri,abjad='Formen H03');
addNode(&akar->kiri->kiri->kanan,abjad='Operator H02');
 printf("Tampilan PreOrder  : ");
 preOrder(akar);
 printf("\nTampilan InOrder   : ");
 inOrder(akar);
 printf("\nTampilan PostOrder : ");
 postOrder(akar);
}
