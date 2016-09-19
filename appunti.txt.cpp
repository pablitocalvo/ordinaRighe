F.A.M.Q:

D) sono un programmatore C o C++ ?
{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
R) per capirlo leggi qui: 
	http://www.relisoft.com/book/intro.html
	
	vedi il sorgente:
	C_Ghetto_Hello_World.cpp




	

	
D) se programmo in C o C++ sono un programmatore C, C90, C98, C11, C++, 
   c++98, C++03  o  C++11 ?
{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

R) Sono tutti standard .
   Dipende da quanto approfondita è la tua conoscenza ....
	Vedi qui ad esempio : 
		https://en.wikipedia.org/wiki/C%2B%2B11
	
    ma anche qui :
	https://msdn.microsoft.com/en-us/library/hh279654.aspx

	e C++17 ?










D) se programmo in C/C++ sono un programmatore Windows o LINUX?
{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
R)	Finche usi solo le librerie standard non sei né uno né l altro.
	Sei standard! 
	Windows LInux ti supportano.
	Ma pensi di poter fare un programma con finestre e bottoni con il
	C/C++ standard? 




	


D) Se uso la libreria <pthread.h>  sono un programmatore C o C++ ?
{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
R) pthread è scritta in C, ma può essere inserita in un sorgente C++ e
compilata da un compilatore che la supporta.

	 vedi C_Ghetto_Thread.cpp



D) I Thread li ha  Windows o Linux ?
{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
R) li hanno entrambi, e che cavolo ! 


D) Se uso la libreria <pthread.h>  sono un programmatore Windows o linux?
{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
R) POSIX !! *NIX, cioè UNIX LIKE, che comprende Linux ....
   Windows ha la sua libreria per i Thread quale ?? COMPITO PER CASA
   wikipedia posix e unix-like
  
  
   
   
D) ma allora perchè lo scorso anno abbiamo programmato sotto windows?
{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
R) e cygwin a che serve?

D) già, a che serve ?
{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
R) lo avete usato voi mica io !!
   vedete qui : https://www.cygwin.com/
   
   
D) Se ho ben capito, posso compilare sorgenti c/c++ linux ed ottenere un 
eseguibile windows grazie a cygwin ?
{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
R) SI

  
D) Ma i sistemi multitasking non sono certamente una novità, possibile 
che non hanno creato una libreria standard per questo?
{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

R) 	NO, infatti l hanno creata : è una feaure del C++11;

	vedi :https://en.wikipedia.org/wiki/C%2B%2B11#Threading_facilities
	
	vedi C++_Thread_Hello_World.cpp
	
	Quanti compilatori hanno il pieno supporto a C++11?
	GNU gcc SI  vedi : https://gcc.gnu.org/gcc-4.8/cxx0x_status.html
	Microsoft visual C++ : SI https://msdn.microsoft.com/it-it/library/hh567368.aspx#concurrencytable
	

D) Allora potrei scrivere un sorgente in C++ e 
   senza modifiche compilarlo sotto linux e sotto windows senza la 
   necessità di cygwin ?
 {
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}   
R) SI , si chiama portabilità 
   ( che signignica ricompilare sotto 
     un altro sistema senza mettere mano al sorgente)
   
   ma per compilarlo sotto windows devi avere un compilatore microsoft:
   Visual Studio ad esempio ...
   €€€ o community edition (suppporta tutte le feaure  c++11 ?) COMPITO PER CASA
   
   
   
D) E questa libreria "openMP" è supportata da windows?
{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
R) NON SOLO ...
	vedi http://openmp.org/wp/openmp-compilers/
	Uno spunto per la tesina ?
	

