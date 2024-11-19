#include<iostream>
#include <cmath>


int main()
{
	int choix1, choix2, choix3;
	int a,b;
	double c,s,t;
	float X,Y;
	
	
	std::cout<<"Bonjour, veillez entrer un chiffre selon le calcul que vous voulez effectuer : "<<std::endl;
	std:: cout<<"  -1 pour l'addition"<< std::endl<<"  -2 pour une soustraction"<<std::endl<<"  -3 pour la multiplication "<<std::endl<<"  -4 pour une division.\n";
	std:: cout<<"Entrez 5 pour un autre calcul."<<std::endl;
	
	std:: cin>> choix1;
	
	if(choix1==1)
	{
		std:: cout<<"Vous avez choisi l'addition, entrez la premiere valeur pour le calcul."<<std::endl;
		std:: cin>>X;
		
		std:: cout<<"Entrez la deuxieme valeur pour le calcul."<<std::endl;
		std:: cin>>Y;
	
	float addition=X+Y;	
		std:: cout<<" Le resultat de l'addition entre "<<X<<" et "<<Y<<" est "<<addition<<std::endl;
		
	}
	
		if(choix1==2)
	{
		std:: cout<<"Vous avez choisi la soustraction, entrez la premiere valeur pour le calcul."<<std::endl;
		std:: cin>>X;
		
		std:: cout<<"Entrez la deuxieme valeur pour le calcul."<<std::endl;
		std:: cin>>Y;
	
	float soustraction=X-Y;	
		std:: cout<<" Le resultat de la soustraction entre "<<X<<" et "<<Y<<" est "<<soustraction<<std::endl;
		
	}
	
		if(choix1==3)
	{
		std:: cout<<"Vous avez choisi la multiplication, entrez la premiere valeur pour le calcul."<<std::endl;
		std:: cin>>X;
		
		std:: cout<<"Entrez la deuxieme valeur pour le calcul."<<std::endl;
		std:: cin>>Y;
		
	float multiplication=X*Y;	
		std:: cout<<" Le resultat de la multiplication de "<<X<<" par "<<Y<<" est "<<multiplication<<std::endl;
		
	}
	
	else if(choix1==4)
	{
		std:: cout<<"Vous avez choisi la division, entrez la valeur du dividande(numerateur) pour le calcul."<<std::endl;
		std:: cin>>X;
		
		std:: cout<<"Entrez la valeur du diviseur(denominateur) pour le calcul."<<std::endl;
		std:: cin>>Y;
		
	float division=X/Y;	
		std:: cout<<" Le resultat de la division de "<<X<<" par "<<Y<<" est "<<division<<std::endl;
		
	}
	else
	{
		std::cout<<"Choisissez votre calcul :"<<std::endl;
		std::cout<<"  -Pour la racine carree tapez 1"<<std::endl<<"  -Pour le logarithme tapez 2"<<std::endl<<"  -Pour la puissance tappez 3"<<std::endl;
		std::cout<<"Tapez 4 pour un calcul trigonometrique."<<std::endl;
		
		std::cin>>choix2;
		
			if(choix2==1)
	   {
		std:: cout<<"Vous avez choisi le calcul de la racine carree, entrez votre valeur pour le calcul."<<std::endl;
		std:: cin>>a;
		
    	int racine_carree=sqrt(a);
	
		std:: cout<<" La racine carree de "<<a<<" est "<<racine_carree<<std::endl;
		
    	}
	
			if(choix2==2)
	   {
		std:: cout<<"Vous avez choisi le calcul du logarithme, veillez saisir une valeur POSITIVE et NON NULLE pour le calcul."<<std::endl;
		std:: cin>>a;
		
    	int logarithme=log(a);
	
		std:: cout<<" Le logarithme de "<<a<<" est "<<logarithme<<std::endl;
		
	   }
	
			if(choix2==3)
	   {
		std:: cout<<"Vous avez choisi le calcul de la puissance, entrez la valeur dont voud voulez trouver la puissance pour le calcul."<<std::endl;
		std:: cin>>a;
		
	    int puissance=pow(a,b);
	
		std:: cout<<" La resultat de "<<a<<" a la puissance "<<b<<" est "<<puissance<<std::endl;
		
	    }
	    
	}
	
	if(choix2==4)
	{
	
	
		std::cout<<"Vous souhaitez effectuer un calcul trigonometrique ?"<<std::endl;
		std::cout<<"  -Cosinus ? Entrez 1"<<std::endl<<"  -Sinus ? Entrez 2"<<std::endl<<"  -Tangente ? Entrez 3"<<std::endl;
		
		std::cin>>choix3;
	}
	
	
	if(choix3==1)
	{
		std::cout<<"Entrez votre angle en degres."<<std::endl;
		
		std::cin>>c;
		
	    float cosinus=cos(c);
	    
	    std::cout<<"Le cosinus de "<<c<<" est "<<cosinus<<std::endl;
	
		
	}
	
	if (choix3==2)
	{
	
		std::cout<<"Entrez votre angle en degres."<<std::endl;
		
		std::cin>>s;
		
		double s_radian=s*(M_PI/180.0);
	    double sinus=sin(s_radian);
	    
	    std::cout<<"Le sinus de "<<s<<" est "<<sinus<<std::endl;
	}
	
		if (choix3==3)
	{
	
		std::cout<<"Entrez votre angle en degres."<<std::endl;
		
		std::cin>>t;
		
	    float tangente=tan(t);
	    
	    std::cout<<"La tangente de "<<t<<" est "<<tangente<<std::endl;
	}
		
		
		
	return 0;
	
	
}

