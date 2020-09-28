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
*git clone *https://github.com/einarsplatacis/RTR-105* Lejupielādē repozitāriju.  

## Augšupielāde Githubā.

git config --global user.email einars431@gmail.com  
git add .  
git commmit -m "nosaukums"  
git push origin master  

## Skriptu rakstīšana.

#!/bin/bash <- skripta izpildītājs  
touch text.txt  
chmod 777 text.txt <- read/write/execute īpašības tiek pievienotas  
echo $PATH jāpapildina ar echo $PATH ~,lai iečekotu skripta lokāciju.

## Skripta izpilde
*Ja ir chmod 777, tad var izpildīt skriptu ar:*
### /bash/text.txt  
*Ja ir chmod 775, tad var izpildīt skriptu ar:*
### ./text.txt
