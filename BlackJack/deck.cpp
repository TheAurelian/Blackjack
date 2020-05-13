// Deck from C++ in class example for War card game
// Used as refrence only

#include "deck.hpp"

#include <algorithm>
#include <chrono>
#include <random>

Deck::Deck()
{
  this->m_cards = new std::vector<Card *>();

  //Hearts Cards
  this->m_cards->push_back(new Card("Hearts", "Ace", 14));
  this->m_cards->push_back(new Card("Hearts", "Two", 2));
  this->m_cards->push_back(new Card("Hearts", "Three", 3));
  this->m_cards->push_back(new Card("Hearts", "Four", 4));
  this->m_cards->push_back(new Card("Hearts", "Five", 5));
  this->m_cards->push_back(new Card("Hearts", "Six", 6));
  this->m_cards->push_back(new Card("Hearts", "Seven", 7));
  this->m_cards->push_back(new Card("Hearts", "Eight", 8));
  this->m_cards->push_back(new Card("Hearts", "Nine", 9));
  this->m_cards->push_back(new Card("Hearts", "Ten", 10));
  this->m_cards->push_back(new Card("Hearts", "Jack", 11));
  this->m_cards->push_back(new Card("Hearts", "Queen", 12));
  this->m_cards->push_back(new Card("Hearts", "King", 13));

  //Spades
  this->m_cards->push_back(new Card("Spades", "Ace", 14));
  this->m_cards->push_back(new Card("Spades", "Two", 2));
  this->m_cards->push_back(new Card("Spades", "Three", 3));
  this->m_cards->push_back(new Card("Spades", "Four", 4));
  this->m_cards->push_back(new Card("Spades", "Five", 5));
  this->m_cards->push_back(new Card("Spades", "Six", 6));
  this->m_cards->push_back(new Card("Spades", "Seven", 7));
  this->m_cards->push_back(new Card("Spades", "Eight", 8));
  this->m_cards->push_back(new Card("Spades", "Nine", 9));
  this->m_cards->push_back(new Card("Spades", "Ten", 10));
  this->m_cards->push_back(new Card("Spades", "Jack", 11));
  this->m_cards->push_back(new Card("Spades", "Queen", 12));
  this->m_cards->push_back(new Card("Spades", "King", 13));

  //Diamonds
  this->m_cards->push_back(new Card("Diamonds", "Ace", 14));
  this->m_cards->push_back(new Card("Diamonds", "Two", 2));
  this->m_cards->push_back(new Card("Diamonds", "Three", 3));
  this->m_cards->push_back(new Card("Diamonds", "Four", 4));
  this->m_cards->push_back(new Card("Diamonds", "Five", 5));
  this->m_cards->push_back(new Card("Diamonds", "Six", 6));
  this->m_cards->push_back(new Card("Diamonds", "Seven", 7));
  this->m_cards->push_back(new Card("Diamonds", "Eight", 8));
  this->m_cards->push_back(new Card("Diamonds", "Nine", 9));
  this->m_cards->push_back(new Card("Diamonds", "Ten", 10));
  this->m_cards->push_back(new Card("Diamonds", "Jack", 11));
  this->m_cards->push_back(new Card("Diamonds", "Queen", 12));
  this->m_cards->push_back(new Card("Diamonds", "King", 13));

  //Clubs
  this->m_cards->push_back(new Card("Clubs", "Ace", 14));
  this->m_cards->push_back(new Card("Clubs", "Two", 2));
  this->m_cards->push_back(new Card("Clubs", "Three", 3));
  this->m_cards-> push_back(new Card("Clubs", "Four", 4));
  this->m_cards->push_back(new Card("Clubs", "Five", 5));
  this->m_cards->push_back(new Card("Clubs", "Six", 6));
  this->m_cards->push_back(new Card("Clubs", "Seven", 7));
  this->m_cards->push_back(new Card("Clubs", "Eight", 8));
  this->m_cards->push_back(new Card("Clubs", "Nine", 9));
  this->m_cards->push_back(new Card("Clubs", "Ten", 10));
  this->m_cards->push_back(new Card("Clubs", "Jack", 11));
  this->m_cards->push_back(new Card("Clubs", "Queen", 12));
  this->m_cards->push_back(new Card("Clubs", "King", 13));
}

Deck::~Deck()
{
  delete this->m_cards;
}

std::vector<Card *> * Deck::get_cards()
{
  this->shuffle();
  return this->m_cards;
}

void Deck::shuffle()
{
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  std::shuffle(this->m_cards->begin(), this->m_cards->end(), std::default_random_engine(seed));
}