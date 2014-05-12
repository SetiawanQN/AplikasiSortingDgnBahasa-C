#include<stdio.h>
#include<conio.h>

typedef int cemungut;
typedef struct{
cemungut isi[100];
} tabel;
void milih(tabel T, cemungut pjg);
tabel buble(tabel T, cemungut pjg);
tabel insertion(tabel T, cemungut pjg);
tabel shell(tabel T, cemungut pjg);
tabel selection(tabel T, cemungut pjg);
tabel exchange(tabel T, cemungut pjg);
cemungut pilihan();
void utama();

main()
{
    utama();
    getch();
}

void utama()
{
    cemungut jml,i;
    tabel nama;
    printf("\t\t\t||---------------------------||\n");
    printf("\t\t\t\tPROGRAM SORTING \n");
    printf("\t\t\t||---------------------------||\n\n\n");
    printf(">> Masukkan jumlah bilangan yang ingin di inputkan : ");
    scanf("%d",&jml);
    printf("\n");
    // mengimputkan data
    for (i=0;i<jml;i++)
    {
        printf(" ~ Bilangan ke %d berapa ? :",i+1); scanf("%d",&nama.isi[i]);
    }
    milih(nama, jml);
    printf("\nSilahkan Tekan Enter...\n");
    getch();
    pilihan();
}
cemungut pilihan()
{
    cemungut jawab;
    system("cls");
    printf("\n>> Mau melakukan sorting lagi ? \n   [1 = ya]  \n   [0 = tidak] \n= ");
    scanf("%d",&jawab);

    if(jawab==1)
    {
        system("cls");
        utama();
    }
    else
    {
        system("cls");
        printf("\n>> Terima kasih... :) \n   Silahkan tekan enter untuk keluar...\n\n");
        return 0;
    }
}

void milih(tabel T, cemungut pjg)
{
    cemungut i,kode;
    printf("\n>> Kode tipe metode sorting : \n\n");
    printf(" (1) --> Metode Bubble Sort\n");
    printf(" (2) --> Metode Insertion Sort\n");
    printf(" (3) --> Metode Shellsort Sort\n");
    printf(" (4) --> Metode Selection Sort\n");
    printf(" (5) --> Metode Exchange Sort\n");
    printf("\n>> Pilih metode sorting yang mau dipakai [ masukkan kode tipenya ]: ");scanf("%d", &kode);

    if(kode==1)
    {
        buble(T, pjg);
    }
    else if(kode==2)
    {
        insertion(T, pjg);
    }
    if(kode==3)
    {
        shell(T, pjg);
    }
    else if(kode==4)
    {
        selection(T, pjg);
    }
    else
    {
        exchange(T, pjg);
    }
}

tabel buble(tabel T, cemungut pjg)
{
cemungut temp,i,j;
for (i=1;i<=pjg-1;i++)
    {
   for (j=i;j<pjg;j++)
        {
               if (T.isi[i-1]>T.isi[j])
               {
                    temp = T.isi[i-1];
                    T.isi[i-1] = T.isi[j];
                        T.isi[j] = temp;
               }
        }
    }
    printf(">> Hasil dari sorting adalah : [ ");
    for (i=0;i<pjg;i++)
    {
        printf("%d ", T.isi[i]);
    }
    printf("]");
}
tabel insertion(tabel T, cemungut pjg)
{
    int i,j,x,k;
    for(i=1;i<=pjg-1;i++)
    {
        j=i;
        x=T.isi[i];
        while(T.isi[j-1]>x && j>0)
        {
            T.isi[j]=T.isi[j-1];
            j=j-1;
        }
        T.isi[j]=x;

    }
    printf(">> Hasil dari sorting adalah : [ ");
    for (i=0;i<pjg;i++)
    {
        printf("%d ", T.isi[i]);
    }
    printf("]");
}
tabel shell(tabel T, cemungut pjg)
{
    cemungut j,i,k,m,tengah;
    for(m = pjg/2;m>0;m/=2)
    {
    for(j = m;j< pjg;j++)
    {
        for(i=j-m;i>=0;i-=m)
        {
            if(T.isi[i+m]>=T.isi[i])
            break;
            else
            {
            tengah = T.isi[i];
            T.isi[i] = T.isi[i+m];
            T.isi[i+m] = tengah;
            }
        }
    }
    }
    printf("\n>> Hasil dari sorting adalah : [ ");
    for (i=0;i<pjg;i++)
    {
        printf("%d ", T.isi[i]);
    }
    printf("]");
}
tabel selection(tabel T, cemungut pjg)
{
        cemungut i,j,temp;
        for (i=0;i<pjg;i++)
        {
            for (j=0;j<pjg-1;j++)
            {
                if (T.isi[i]<T.isi[j])
                {
                    temp = T.isi[i];
                    T.isi[i] = T.isi[j];
                    T.isi[j] = temp;
                }
            }
        }
    printf("\n>> Hasil dari sorting adalah : [ ");
    for (i=0;i<pjg;i++)
    {
        printf("%d ", T.isi[i]);
    }
    printf("]");
}
tabel exchange(tabel T, cemungut pjg)
{
    cemungut i,j,temp;
        for(i=0;i<pjg-1;i++)
        {
            for(j=i+1;j<pjg;j++)
            {
                if(T.isi[j]<T.isi[i])
                {
                    temp = T.isi[i];
                    T.isi[i] = T.isi[j];
                    T.isi[j] = temp;
                }
            }
        }
    printf("\n>> Hasil dari sorting adalah : [ ");
    for (i=0;i<pjg;i++)
    {
        printf("%d ", T.isi[i]);
    }
    printf("]");
}
