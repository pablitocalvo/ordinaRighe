

#include <iostream>  
#define COLONNE 10
#define RIGHE 20000


int matrice [RIGHE][COLONNE];


void riempieLaMatrice()
{
	int r,c;
	for ( r=0; r < RIGHE; r++)
	{
		
		for ( c=0 ; c< COLONNE ; c++ )
		{
			matrice[r][c]=  (rand() % 1000) + 1 ;// genera un numero ca-
		}										 // suale tra 1 e 100
												 // Visto con google !!
	}
}

void stampaLaMatrice()
{
	int r,c;
	for ( r=0; r < RIGHE; r++)
	{
		for ( c=0 ; c < COLONNE ; c++)
		{ 
			std::cout.width(5);
			std::cout<<matrice[r][c];
		};
		std::cout<<std::endl;
	}
	std::cout<<std::endl;
}


void ordinaLaColonna(int colonna)

{	// e' un bubble sort
		
	int ultimoScambiato ;
	
	int n = RIGHE -1 ;
	
	do 
	{
		ultimoScambiato = 0 ;
		
		for ( int i=0; i<= n-1 ; i++)
		{	
			if (matrice[i][colonna] > matrice[i + 1][colonna]) 
			{	
				int swap= matrice[i][colonna]; 
				matrice[i][colonna]= matrice[i + 1][colonna];
				matrice[i + 1][colonna]=swap ;
				
				ultimoScambiato = i ;
			}
		}
		
		n=ultimoScambiato;
		
	} while (ultimoScambiato > 0 );
	
	return;

}






int main()
{
	riempieLaMatrice();
	
	stampaLaMatrice();
	
	//ordina le colonne  
	{	
		
		for(int c = 0; c < COLONNE; c++)
		{
			ordinaLaColonna(c);
		}
	}

	stampaLaMatrice();

return 0;
}

