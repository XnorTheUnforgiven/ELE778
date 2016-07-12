/*
*	Name: GraphTools.h
*	
*	Written by: Tomy Aumont
*	
*	Descritpion:	Liste les constantes et les fonctions utilis� dans l'affichage sur le terminal
*/
#ifndef __GRAPHTOOLS_H_INCLUDED__
#define __GRAPHTOOLS_H_INCLUDED__

#include <iostream>
#include <string>

#define SUCCESS "\nSucces!!!! :D"	// Message pour soulign� si l'application s'est bien termin�e
#define FAILURE "\tEchec!!!! :'("	// Message pour soulign� si l'application s'est bien termin�e
#define DBG_MSG_COMPLETE "\tTerminee"	// Message pour soulign� la compl�tion de chaue �tape

void PrintDashLine( void );
void PrintDebugMessage( std::string );
void PrintIntroHeader();

#endif