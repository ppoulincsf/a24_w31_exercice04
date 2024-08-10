#pragma once
/**
 * @class TableauDynamique
 * @brief Classe représentant un tableau dynamique d'entiers.
 *
 * Cette classe permet de créer, manipuler et gérer un tableau dynamique d'entiers.
 */
class TableauDynamique
{
public:
  /**
   * @brief Constructeur qui initialise le tableau avec une dimension donnée.
   * @param dimension La dimension initiale du tableau.
   */
  TableauDynamique(int dimension);

  /**
   * @brief Constructeur qui initialise le tableau avec une dimension donnée et une valeur initiale pour chaque élément.
   * @param dimension La dimension initiale du tableau.
   * @param valeur La valeur initiale de chaque élément du tableau.
   */
  TableauDynamique(int dimension, int valeur);

  /**
   * @brief Destructeur de la classe TableauDynamique.
   * Libère la mémoire allouée pour le tableau dynamique.
   */
  ~TableauDynamique();

  /**
   * @brief Récupère l'élément à la position spécifiée.
   * @param position La position de l'élément à récupérer.
   * @return La valeur de l'élément à la position donnée.
   */
  int getElement(int position) const;

  /**
   * @brief Définit la valeur d'un élément à une position spécifiée.
   * @param position La position de l'élément à définir.
   * @param valeur La nouvelle valeur de l'élément.
   */
  void setElement(int position, int valeur);

  /**
   * @brief Ajoute un élément à la fin du tableau.
   * @param valeur La valeur de l'élément à ajouter.
   */
  void ajouterElement(int valeur);

  /**
   * @brief Insère un élément à une position spécifiée dans le tableau.
   * @param position La position où insérer l'élément.
   * @param valeur La valeur de l'élément à insérer.
   */
  void insererElement(int position, int valeur);

  /**
   * @brief Retire un élément à une position spécifiée du tableau.
   * @param position La position de l'élément à retirer.
   */
  void retirerElement(int position);

  /**
   * @brief Affiche le contenu du tableau.
   */
  void afficherTableau() const;

  /**
   * @brief Concatène un autre tableau dynamique à la fin de ce tableau.
   * @param tab Le tableau dynamique à concaténer.
   */
  void concatenerTableau(const TableauDynamique& tab);

private:
  int* pTab; ///< Pointeur vers le tableau dynamique d'entiers.
  int nbElement; ///< Nombre d'éléments actuellement dans le tableau.
};
