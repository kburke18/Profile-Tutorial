// Created by Kimberly Burke 2021

#include <vector>
#include <string>

using namespace std;

class Profile {
  // attributes
  private: 
    string name;
    int age;
    string city;
    string country;
    string pronouns;
    vector<string> hobbies;

  public:
    // Constructor
    Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns = "they/them");
    // Deconstructor
    ~Profile();

    // Setter Methods
    void add_hobby(string hobby);
    void change_age(int new_age);
    void change_city(string new_city);
    void change_pronouns(string new_pronouns);
    void change_name(string new_name);

    // Print
    void view_profile();
};
