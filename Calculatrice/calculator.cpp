#include "algoheader.h"


// example de " simple calculator "


debut
  
  
  reel a,b,S;   // declarations des variables
  entier c;
  
repeter         // boucle repeter
  
   ecrire("-1- pour +  \n");        // menue
   ecrire("-2- pour -  \n");
   ecrire("-3- pour X  \n");
   ecrire("-4- pour /  \n");
   ecrire("-5- pour racine  \n");
   ecrire("-6- pour puis  \n");
   ecrire("-7- pour quiter  \n");
   ecrire("\nDonner votre choix : ");
             
   lire("%d",de c);  
  
  si (c egale 1 )fair                // si - sinonsi
  ecrire("donner 2 nombres : ");
  lire("%f%f",de a , de b);
  S = a + b;
  ecrire("\nS = %f\n\n", S);
  finsi
  
    sinonsi (c egale 2 )fair
  ecrire("donner 2 nombre : ");
  lire("%f%f",de a , de b);
  S = a - b;
  ecrire("\nS = %f\n\n", S);
  finsi
  
    sinonsi (c egale 3 )fair
  ecrire("donner 2 nombre : ");
  lire("%f%f",de a , de b);
  S = a * b;
  ecrire("\nS = %f\n\n", S);
  finsi
  
    sinonsi (c egale 4 )fair
  ecrire("donner 2 nombre : ");
  lire("%f%f",de a , de b);
  S = a / b;
  ecrire("\nS = %f\n\n", S);
  finsi 
        sinonsi (c egale 5 )fair
  ecrire("donner 1 nombre : ");
  lire("%f",de a);
  S = racine(a);
  ecrire("\nS = %f\n\n", S);
  finsi    
      
      sinonsi (c egale 6 )fair
  ecrire("donner 2 nombre : ");
  lire("%f%f",de a , de b);
  S = puis(a,b);
  ecrire("\nS = %f\n\n", S);
  finsi 

      sinonsi (c egale 7 )
      briser;
      

  
  sinon 
  ecrire("\n\nchoix introuvable !!\n\n");
  
finboucle jusqua(1);          // fin boucle




fin       // fin 
