
int main(void)
{
    int *ip,id;
    ip = (int *)malloc(5*sizeof(int));
    for(id=0;id<5;id++){
        *(ip+id) = id+1;
        printf("%p adresindeki deger: %d\n",(ip+id),*(ip+id));
    }
    ip = (int *)realloc(ip,10*sizeof(int));
    printf("Genisletilmis bellek degerleri \n");
    for(;id<10;id++) { //burada id degisken degeri 5 olarak baslar
        *(ip+id) = id+1;
        printf("%p adresindeki deger: %d\n",(ip+id),*(ip+id));
    }      
    free(ip);
    return 0;
}