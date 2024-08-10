#pragma once
/**
 * @class TableauDynamique
 * @brief Classe repr�sentant un tableau dynamique d'entiers.
 *
 * Cette classe permet de cr�er, manipuler et g�rer un tableau dynamique d'entiers.
 */
class TableauDynamique
{
public:
  /**
   * @brief Constructeur qui initialise le tableau avec une dimension donn�e.
   * @param dimension La dimension initiale du tableau.
   */
  TableauDynamique(int dimension);

  /**
   * @brief Constructeur qui initialise le tableau avec une dimension donn�e et une valeur initiale pour chaque �l�ment.
   * @param dimension La dimension initiale du tableau.
   * @param valeur La valeur initiale de chaque �l�ment du tableau.
   */
  TableauDynamique(int dimension, int valeur);

  /**
   * @brief Destructeur de la classe TableauDynamique.
   * Lib�re la m�moire allou�e pour le tableau dynamique.
   */
  ~TableauDynamique();

  /**
   * @brief R�cup�re l'�l�ment � la position sp�cifi�e.
   * @param position La position de l'�l�ment � r�cup�rer.
   * @return La valeur de l'�l�ment � la position donn�e.
   */
  int getElement(int position) const;

  /**
   * @brief D�finit la valeur d'un �l�ment � une position sp�cifi�e.
   * @param position La position de l'�l�ment � d�finir.
   * @param valeur La nouvelle valeur de l'�l�ment.
   */
  void setElement(int position, int valeur);

  /**
   * @brief Ajoute un �l�ment � la fin du tableau.
   * @param valeur La valeur de l'�l�ment � ajouter.
   */
  void ajouterElement(int valeur);

  /**
   * @brief Ins�re un �l�ment � une position sp�cifi�e dans le tableau.
   * @param position La position o� ins�rer l'�l�ment.
   * @param valeur La valeur de l'�l�ment � ins�rer.
   */
  void insererElement(int position, int valeur);

  /**
   * @brief Retire un �l�ment � une position sp�cifi�e du tableau.
   * @param position La position de l'�l�ment � retirer.
   */
  void retirerElement(int position);

  /**
   * @brief Affiche le contenu du tableau.
   */
  void afficherTableau() const;

  /**
   * @brief Concat�ne un autre tableau dynamique � la fin de ce tableau.
   * @param tab Le tableau dynamique � concat�ner.
   */
  void concatenerTableau(const TableauDynamique& tab);

private:
  int* pTab; ///< Pointeur vers le tableau dynamique d'entiers.
  int nbElement; ///< Nombre d'�l�ments actuellement dans le tableau.
};
