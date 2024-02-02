# Datormācības elektroniskā klade
## Linux termināla komandas

*uname*  Parāda, kāda operētājsistēma ir datorā.  
*uname -a*  Precīzāk parāda informāciju par operētajsistēmu.  
*history*  Parāda iepriekš izmantotātās komandas lietošanas laikā.  
*sh un bash*  Var nomainīt Linuxa shell valodas tipu uz sh va.i bash  
*pwd*  Parāda lokāciju, kur lietotājs atrodas sistēmā.  
*man*  Sniedz skaidrojumu komandām.  
*ls*  Parāda, kādi faili eksistē sistēmā.  
*ls -l*  Sniedz precīzaku informāciju par failiem.  
*sudo*  Ļauj piekļūt programmai ar galvenā lietotāja lietotāja profilu ("Run as administrator Windowsā).  
*apt-get* Komanda, kas ļauj instalēt, atjaunināt vai dzēst pakotnes.  
*apt-get install* Ļauj instalēt jaunas pakotnes.  
*apt-get update* Ļauj atjaunināt pakotnes.  
*apt-get remove* Izdzēš pakotni.  
*init 0* Izslēdz datoru.  
*mkdir* Izveido mapi.  
*rmdir* Izdzēš mapi.  
*rm* Izdzēšu failu.  
*nano* Atver primitīvu rakstīšanas lietotni.  
*cd* Pārvieto lietotāju citā lokācijā, kurā vēlas darboties.  
*head* Var nolasīt no teksta faila pirmo rindu.  
*tail* Var nolasīt no teksta faila pēdējo rindu.  
*mv* Var pārvietot failu (arī pārsaukt).    
*find* Var atrast failu kaut kādā dotā lokācijā.  
*clear* Notīra termināli.  
*echo* Izvada teikumu.  
*cat* Izvada failā esošo tekstu.  
*wc* Var saskaitīt dažādas lietas teksta failā.  
*uniq* Izdrukā atkārtotas detaļas teksta failā.  
*exit* Iziet arā no faila.  
*touch* Izveido jebkāda tipa failu.  
*rm -rf* Izdzēš pilnīgi visus failus dotajā lokācijā.  
*figlet* Ar milzīgiem burtiem var izvadīt tekstu terminālī.  
*sl* Vilciens cauri terminālim.  
*xeyes* Acis.  
*xdg-open* Atver failus.  
*alias* Pārsauc komandas citādāk.  
*whereis* Atrod komandas failu lokāciju.  
*echo $PATH* Parāda lokācijas, kuras OS ielūkojas komandas izpildei.  
*echo $?* Parāda rezultātu pēc pēdējās komandas.  
*seq* Izprintē skaitļus konkrētajā diapazonā.  


## Augšupielāde Githubā.

*git clone *https://github.com/einarsplatacis/RTR-105* Lejupielādē repozitāriju.  
git config --global user.email einars431@gmail.com  
git add .  
git commmit -m "nosaukums"  
git push origin master  

## Skriptu rakstīšana.

*#!/bin/bash* <- skripta izpildītājs  
*touch text.txt*  
*chmod 777 text.txt* <- read/write/execute īpašības tiek pievienotas  
*echo $PATH jāpapildina ar echo $PATH ~*,lai iečekotu skripta lokāciju.  
*echo "..." $@* parāda input ievadīto tekstu pēc stringa.  
*read userInput* + *echo "..." ${userInput}* Ievada tekstu, izmet ievadīto tekstu ar stringu.  
### If statement  
*if [...];then*   
    *echo "..."*  
*else*  
    *echo "..."*  
*fi*  
  
*-d* Patiess, ja fails eksistē un ir mape.  
*-a* Patiess, ja fails eksistē.  
### For cikls  
*for i in $(...)*  
*do*  
   *echo $i*  
*done*  

*$((...))* izpilda matemātiskās darbības.
*-eq* ir vienāds.   
*-ne* nav vienāds.  
*-lt* mazāks par.
*-le* mazāks vai vienāds par.  
*-gt* lielāks par.  
*-ge* lielāks vai vienāds par.  

## Skripta izpilde
*Ja ir chmod 777, tad var izpildīt skriptu ar:*
### /bash/text.txt  
*Ja ir chmod 775, tad var izpildīt skriptu ar:*
### ./text.txt

## C valodas faila kompilēšana
1. Nepieciesams ievadit *sudo apt-get install build-essential*
2. Izveido failu ar *nano text.c*
3. *gcc* kompilē gatavo C failu.  
4. *./a.out* Izpilda kompilējamo failu. Default nosaukums kompilējamam failam ir *a.out.*  

## C valodas komandas  
### Mainīgie  
*char vards[] = "John";* teksta mainigais.  
*int characterAge = 35;* integer mainigais.    
int *cipars = &cipars; pointer mainīgais (uztur kkāda mainīgā atrašanās vietu).  
*printf("%s\n", vards);* teksta mainigais stringā.  
*printf("%d\n", characterAge)* integer mainigais stringā.  
*printf("%c\n", char)* simbola mainīgais stringā.  
*printf("%f\n", float)* reālais skaitlis stringā.    

*a << b* Bīda ciparu pa bitiem (5<<1 => 0000 0101 => 0000 1010 => 10).    
 
### Datu tipi  
*int* Integer.  
*double* Decimālskaitlis.  
*char = ''* Simboli.  
*char[] = ""* Strings.  
*#define A 11* = definē konstanti A ar vērtību 11.  
*float* Reālais skaitlis.  
*Salīdzināšanas operācijas: <=;>=;==;=! (Rezultāts ir 0 vai 1).*  
*Loģiskās operācijas pa bitiem: &; |* 0000 0101 & 1111 0011 => 0000 0101 ; 0000 1111 | 1111 0000 => 1111 1111.  


Informācijas vienība, ar kuru operē dators - bits (0/1).  
Informācijas vienība ar adresi (datorā) - baits.  
1 byte = 8 biti.  
ASCII tabula - 1 simbols == 1 baits.  
1 bits - 0,1 kombinācijas.  
2 biti - 00,01,10,11 kombinācijas.  
3 biti - 000,001,010,011,100,101,110,111 kombinācijas.  
x biti - stāvokļu skaits*biti == 2^x.  
1 baitā ir 8 biti => 256 kombinācijas.  
ASCII tabulā 256 unikāli baiti => 256 unikāli simboli.    

Skaitļi: veseli skaitļi, reālie skaitļi, kompleksie skaitļi (divas daļas: Re
un I)
  
### Funkcijas    

*sizeof()* Izskaita baitus mainīgajam.  
*printf* Printē.  
*scanf*  Ļauj ievadīt.  
*fgets* Tas pats scanf, bet uztver visu, par ar spaciem.  
*print("...0x%x")* Printē ciparus heksidecimālajā formātā.  
*print("...%o")* Printē ciparus oktālajā formātā.  
*print("...%d")* Printē ciparus decimālajā formātā.  
*void vai in* Funkcijas dibināšana.  
*clock* Hronometrs.(Vajag time.h library)  
*switch* Gadījumi. Gandrīz tas pats, kas If.  
*struct* Izveido modeli (šablonu).  
*while* Ciklē operācijas, kamēr ievadītais apgalvojums ir patiess.  
*fopen* Atver failu.  
*fprintf* Izdrukā failā tekstu.  
*return* Atgriež funkcijas vērtību citā funkcijā.  
*sscanf, atoi vai (int)* Pārveido no char to int mainīgo.  
*perror* gluži kā printf, var printēt stringu.  
*fputs("hehe", hehe.txt)* Var uzrakstīt tekstu iekšā failā.  
*puts("Please enter your name:")* Pilda funkciju kā printf.  
*gets(name)* Nosūta puts ievadīto info uz mainīgo.  
