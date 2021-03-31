// Created by Kimberly Burke 2021

#include <iostream>
#include "profile.hpp"

int main() {
  Profile sam("Sam Drakkila", 18, "Texas", "USA");
  sam.add_hobby("Drawing");
  sam.add_hobby("Writing");
  sam.view_profile();
}
