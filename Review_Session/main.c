
#include "struct_info.h"
#include "add.h"
 
void main(){
    int List_Number=2;
    //scanf("%d",&List_Number);
    List=(information *)malloc(List_Number*sizeof(information));
    add_new_contact(information *List,List_Number);
    getchar();
 }
