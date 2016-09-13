
#include <cstdlib>
#include <iostream>  
#define COLONNE 20
#define RIGHE 1000000


int matrice [RIGHE][COLONNE];


void riempieLaRiga(int riga)
{
	int c;
	for ( c=0; c < COLONNE; c++)
	{
		matrice[riga][c]=  (rand() % 100) + 1 ;// genera un numero ca-
												 // suale tra 1 e 100
												 // Visto con google !!
	}
}


void stampaLaRiga(int riga)
{
	int c;
	for ( c=0; c < COLONNE; c++)
	{
		std::cout.width(4);
		std::cout<<matrice[riga][c];
	};
	std::cout<<std::endl;
}

void ordinaLaRiga(int riga)

{	// e' un bubble sort
		
	int ultimoScambiato ;
	
	int n = COLONNE -1 ;
	
	do 
	{
		ultimoScambiato = 0 ;
		
		for ( int i=0; i<= n-1 ; i++)
		{	
			if (matrice[riga][i] > matrice[riga][i + 1]) 
			{	
				int swap= matrice[riga][i]; matrice[riga][i]= matrice[riga][i+1];matrice[riga][i+1]=swap ;
				ultimoScambiato = i ;
			}
		}
		
		n=ultimoScambiato;
		
	}
	while (ultimoScambiato > 0 );
	
	return;

}






int main()
{

	int r ;

	// riempie le righe di numeri interi casuali casuali;
	{
		
		for(r = 0; r < RIGHE; r++)
		{
			riempieLaRiga(r);
		}
	}
	
	//stampa le righe 
	{
		//for(r = 0; r < RIGHE; r++)
		//{
			//stampaLaRiga(r);
		//}
	}
	
	//ordina le righe  
	{	
		
		for(r = 0; r < RIGHE; r++)
		{
			ordinaLaRiga(r);
		}
	}

	//stampa le righe 
	{	
		//std::cout<<std::endl;
		//for(r = 0; r < RIGHE; r++)
		//{
			//stampaLaRiga(r);
		//}
	}

return 0;
}

