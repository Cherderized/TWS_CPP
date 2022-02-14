#include <assert.h>
#include <stdio.h>
#include <iostream>

int main(int aCount, const char ** aVector)
{
	if (2 > aCount)
	{
		std::cerr << "Erreur d'utilisation, veuillez donner un nom de fichier C\n";
		return 1;
	}
	FILE* lFile;
	int lRet = fopen_s(&lFile, aVector[1], "r");
	if (lRet != 0)
	{
		std::cerr << "Impossible d'ouvrir le fichier\n";
		return 2;
	}
	unsigned int lCptCommentaire = 0;
	unsigned int lCptVide = 0;
	unsigned int lCptLigne = 0;
	unsigned int lCptInstructionProcesseur = 0;
	char lLine[1024];
}