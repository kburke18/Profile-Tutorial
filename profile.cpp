// Created by Kimberly Burke 2021

#include <string>
#include <vector>
#include <iostream>
#include "profile.hpp"

using namespace std;

// Constructor
Profile::Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns) {
  name = new_name;
  age = new_age;
  city = new_city;
  country = new_country;
  pronouns = new_pronouns;
}

// Deconstruct
Profile::~Profile() {
  cout << "Goodbye, " << name << "!\n";
}

// Setters
void Profile::add_hobby(string hobby) {
  hobbies.push_back(hobby);
}

void Profile::change_age(int new_age) {
  age = new_age;
}

void Profile::change_city(string new_city) {
  city = new_city;
}

void Profile::change_pronouns(string new_pronouns) {
  pronouns = new_pronouns;
}

void Profile::change_name(string new_name) {
  name = new_name;
}

// Print profile
void Profile::view_profile() {
  cout << "Name: " << name << "\n";
  cout << "Age: " << age << "\n";
  cout << "Pronouns: " << pronouns << "\n\n";
  cout << "Location: " << city << <<", " << country << "\n";
  cout << "Hobbies: \n";
  for (int i = 0; i < hobbies.size(); i++) {
    cout << "- " << hobbies[i] << "\n";
  }
}

