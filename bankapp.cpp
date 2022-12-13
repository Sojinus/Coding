#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int pin1 = 1234;
int pin2 = 5678;
int pin3 = 9999;
int login;
int ucet1 = 500;
int ucet2 = 300;
int ucet3 = 2000;
int akce;
int castka;
int poslat;
int cil;




int main() {

    zacatek:

    cout << "   Welcome! \n" "   Please login: ";

    cin >> login;

if (login == pin1){ a:
            system("CLS");
            cout << "   Welcome Pepa! \n";

            pepa:
            cout << "   Choose action: \n    1 = Check balance \n    2 = Withdraw \n    3 = Send money \n    4 = EXIT \n \n";
            cin >> akce;
if (akce == 1 || akce == 2 || akce == 3 || akce == 4){
  switch (akce) {
  case 1:


    system("CLS");
    cout << "Na uctu zbyva: ";
    cout << ucet1;
    cout << " Kc \n";
    cin >> akce;
    system("CLS");
    goto pepa;
    break;

  case 2:
    cstk:
    system("CLS");
    cout << "Zadejte castku:";
    cin >> castka;
    if (castka > ucet1){
            cout << "Insufficient funds. \n";
            Sleep(1000);
            goto cstk;
        } else { system("CLS");
             cout << "Here's your ";
             cout << castka;
             cout << "Kc \n" "Na uctu zbyva: ";
             ucet1 = ucet1 - castka;
             cout << ucet1;
             cout << " Kc \n \n \n \n";
             goto pepa;
             }
    break;
  case 3:
      send:
      system("cls");
   cout << "Zadejte castku: \n  ";
   cin >> poslat;
   if (poslat > ucet1) {
    cout << "Insufficient funds";
    Sleep(1000);
    goto send;
   } else {
       transakce:
       cout << "Vyberte cil transakce: \n   1 = Izak \n   2 = Spryngl     \n \n";
       cin >> cil;
   if (cil == (1 || 2)){
     switch(cil){

        case 2:
           system("cls");
          cout << "Spryngl ma nyni na uctu: ";
          ucet3 = ucet3 + poslat;
          cout << ucet3;
          cout << " Kc";
          cout << " \n \n Na vasem uctu zbyva: ";
          ucet1 = ucet1 - poslat;
          cout << ucet1;
          cout << " Kc \n \n \n \n";
          goto pepa;
          break;
}

      case 1:
          system("cls");
          cout << "Izak ma nyni na uctu: ";
          ucet2 = ucet2 + poslat;
          cout << ucet2;
          cout << " Kc";
          cout << " \n \n Na vasem uctu zbyva: ";
          ucet1 = ucet1 - poslat;
          cout << ucet1;
          cout << " Kc \n \n \n \n";
          goto pepa;
          break;


    } else {system("cls");
             cout << "Zadali jste neplatny cil";
             Sleep(1000);
             system("cls");
             goto transakce;
            }

   }
    break;
  case 4:
    system("CLS");
    goto zacatek;
    break;
  }}else{cout << "Incorrect action, please try again.";
  Sleep(1500);
  goto a;}








    } else if (login == pin2) { b:
            system("CLS");
                cout << "Welcome Izak!";


            izak:
            cout << "   Choose action: \n    1 = Check balance \n    2 = Withdraw \n    3 = Send money \n    4 = EXIT \n \n";
            cin >> akce;
if (akce == 1 || akce == 2 || akce == 3 || akce == 4){
  switch (akce) {
  case 1:


    system("CLS");
    cout << "Na uctu zbyva: ";
    cout << ucet2;
    cout << " Kc \n";
    cin >> akce;
    system("CLS");
    goto izak;
    break;

  case 2:
    cstk1:
    system("CLS");
    cout << "Zadejte castku:";
    cin >> castka;
    if (castka > ucet2){
            cout << "Insufficient funds. \n";
            Sleep(1000);
            goto cstk1;
        } else { system("CLS");
             cout << "Here's your ";
             cout << castka;
             cout << "Kc \n" "Na uctu zbyva: ";
             ucet2 = ucet2 - castka;
             cout << ucet2;
             cout << " Kc \n \n \n \n \n";
             goto izak;
             }
    break;
  case 3:
      send1:
      system("cls");
   cout << "Zadejte castku: \n  ";
   cin >> poslat;
   if (poslat > ucet2) {
    cout << "Insufficient funds";
    Sleep(1000);
    goto send1;
   } else {
       transakce1:
       cout << "Vyberte cil transakce: \n   1 = Pepa \n   2 = Spryngl     \n \n";
       cin >> cil;
    if (cil == (2 || 1)){
     switch(cil){
      case 1:
          system("cls");
          cout << "Pepa ma nyni na uctu: ";
          ucet1 = ucet1 + poslat;
          cout << ucet1;
          cout << " Kc";
          cout << " \n \n Na vasem uctu zbyva: ";
          ucet2 = ucet2 - poslat;
          cout << ucet2;
          cout << " Kc \n \n \n \n \n";
          goto izak;
          break;

      case 2:
           system("cls");
          cout << "Spryngl ma nyni na uctu: ";
          ucet3 = ucet3 + poslat;
          cout << ucet3;
          cout << " Kc";
          cout << " \n \n Na vasem uctu zbyva: ";
          ucet2 = ucet2 - poslat;
          cout << ucet2;
          cout << " Kc \n \n \n \n \n";
          goto izak;
          break;
     }
}else {system("cls");
             cout << "Zadali jste neplatny cil";
             Sleep(1000);
             system("cls");
             goto transakce1;
            }

   }
    break;
  case 4:
    system("CLS");
    goto zacatek;
    break;

  }}else{cout << "Incorrect action, please try again.";
    Sleep(1500);
   goto b;}






                } else if (login == pin3) { c:
                  {system("CLS");
                    cout << "Welcome Spryngl!";


            spryngl:
            cout << "   Choose action: \n    1 = Check balance \n    2 = Withdraw \n    3 = Send money \n    4 = EXIT \n \n";
            cin >> akce;
if (akce == 1 || akce == 2 || akce == 3 || akce == 4){
  switch (akce) {
  case 1:


    system("CLS");
    cout << "Na uctu zbyva: ";
    cout << ucet3;
    cout << " Kc \n";
    cin >> akce;
    system("CLS");
    goto spryngl;
    break;

  case 2:
    cstk2:
    system("CLS");
    cout << "Zadejte castku:";
    cin >> castka;
    if (castka > ucet3){
            cout << "Insufficient funds. \n";
            Sleep(1000);
            goto cstk2;
        } else { system("CLS");
             cout << "Here's your ";
             cout << castka;
             cout << "Kc \n" "Na uctu zbyva: ";
             ucet3 = ucet3 - castka;
             cout << ucet3;
             cout << " Kc \n \n \n \n \n";
             goto spryngl;
             }
    break;
  case 3:
      send2:
      system("cls");
   cout << "Zadejte castku: \n  ";
   cin >> poslat;
   if (poslat > ucet3) {
    cout << "Insufficient funds";
    Sleep(1000);
    goto send2;
   } else {
       transakce2:
       cout << "Vyberte cil transakce: \n   1 = Pepa \n   2 = Izak     \n \n";
       cin >> cil;
    if (cil == (2 || 1)){
     switch(cil){
      case 1:
          system("cls");
          cout << "Pepa ma nyni na uctu: ";
          ucet1 = ucet1 + poslat;
          cout << ucet1;
          cout << " Kc";
          cout << " \n \n Na vasem uctu zbyva: ";
          ucet3 = ucet3 - poslat;
          cout << ucet3;
          cout << " Kc \n \n \n \n \n";
          goto spryngl;
          break;

      case 2:
           system("cls");
          cout << "Izak ma nyni na uctu: ";
          ucet2 = ucet2 + poslat;
          cout << ucet2;
          cout << " Kc";
          cout << " \n \n Na vasem uctu zbyva: ";
          ucet3 = ucet3 - poslat;
          cout << ucet3;
          cout << " Kc \n \n \n \n \n";
          goto spryngl;
          break;
     }}else {system("cls");
             cout << "Zadali jste neplatny cil";
             Sleep(1000);
             system("cls");
             goto transakce2;
            }


    break;
  case 4:
    system("CLS");
    goto zacatek;
    break;
  }}}else{cout << "Incorrect action, please try again.";
    Sleep(1500);
    goto c;}




  }



                  }   else{
                         cout << "Incorrect PIN";
                         Sleep(1000);
                         system("CLS");
                         goto zacatek;
                        }





}









