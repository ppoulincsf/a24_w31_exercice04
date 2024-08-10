#include "stdafx.h"
#include "TableauDynamique.h"
#include <iostream>

TableauDynamique::TableauDynamique(int dimension) 
{
	// A COMPLETER
}

TableauDynamique::TableauDynamique(int dimension, int valeur) 
{
	// A COMPLETER

}

TableauDynamique::~TableauDynamique()
{
	// A COMPLETER

}

int TableauDynamique::getElement(int position) const
{
  if (position < 0 || position >= nbElement)
	{
    throw std::out_of_range("Position invalide");
  }

	// A COMPLETER
}

void TableauDynamique::setElement(int position, int valeur)
{
	if (position < 0 || position > nbElement)
	{
		throw std::out_of_range("Position invalide");
	}
	// A COMPLETER

}

void TableauDynamique::ajouterElement(int valeur)
{
	// A COMPLETER

}

void TableauDynamique::insererElement(int position, int valeur)
{
	if (position < 0 || position > nbElement+1)
	{
		throw std::out_of_range("Position invalide");
	}
	// A COMPLETER

}

void TableauDynamique::concatenerTableau(const TableauDynamique& tab)
{
	// A COMPLETER

}

void TableauDynamique::retirerElement(int position)
{
	if (position < 0 || position >= nbElement)
	{
		throw std::out_of_range("Position invalide");
	}
	// A COMPLETER
}


void TableauDynamique::afficherTableau() const
{
	// A COMPLETER
}