

#include "add.h"
#include "struct_info.h"


void insert_Name(information *List){
    gets_s(List->Name,39);
}

void insert_phone(information *List){
    double temp;
    scanf("%f",List->Number_phone);
}

void insert_mail(information *List){
    gets_s(List->mail,49);
}

void add_new_contact(information *List[], int List_number){
    for (int i=0; i<List_number ; i++){
        insert_Name(List[i]);
        insert_phone(List[i]);
        insert_mail(List[i]);
    }
}