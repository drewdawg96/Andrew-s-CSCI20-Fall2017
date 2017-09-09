// Creator: Andrew Vargas
// Date: 09/08/2017

// Description: This program is a simple output of a sampled mad lib or one
// created by yourself. In this program I chose to use a sampled version, mad lib found on
// their website. 

#include <iostream>
#include <string> // Must use to support 'string' data type 
using namespace std;
    
    
int main() {
    
    string wordLastname;
    string wordExclamation;
    string wordIngverb;
    string wordAwardsname;
    string wordAdjectiveone;
    string wordRandomnoun;
    string wordFamousname;
    string wordNumberone;
    string wordNumbertwo;
    string wordSpecies;
    string wordAnimal;
    string wordAdjectivetwo;
    string wordColor;
    string wordVerb;
    
    cout << "Type in word with no spaces!" << endl; // Allows user to input his/her own words
    
    cout << "Enter a random last name: " << endl; 
    cin >> wordLastname;
    
    cout << "Type in an exclamation: " << endl;
    cin >> wordExclamation;
    
    
    cout << "Type in a word ending in ing: " << endl; // Phrases were entering before user could even input the string, fixed with no spacing!
    cin >> wordIngverb;
    
    
    cout << "Type in the name of your awards, please: " << endl;
    cin >> wordAwardsname;
    
    
    cout << "Type in an adjective: " << endl; 
    cin >> wordAdjectiveone;
    
    
    cout << "Type in a random noun: " << endl;
    cin >> wordRandomnoun;
    
    
    cout << "Type in a famous person's name: " << endl; 
    cin >> wordFamousname;
    
    cout << "Type in a random number: " << endl;
    cin >> wordNumberone;
    
    cout << "Type in another random number: " << endl;
    cin >> wordNumbertwo;
    
    cout << "Type in a random species in plural: " << endl; 
    cin >> wordSpecies;
    
    cout << "Type in a random object: " << endl; 
    cin >> wordAnimal;
    
    cout << "Type in a another random adjective: " << endl; 
    cin >> wordAdjectivetwo;
    
    cout << "Type in a random color: " << endl;
    cin >> wordColor;
    
    cout << "Type in a verb: " << endl; 
    cin >> wordVerb;
    
    
    cout << endl; // The story will then output
    cout << "The 89th Annual " << wordLastname << " Awards!" << endl; // Words that are input by user, output in story
    cout << wordExclamation << " It's the awards show you all have been " << wordIngverb << " for all year: " << endl;
    cout << " the " << wordAwardsname << "!" << endl; 
    cout << "There are a couple" << wordAdjectiveone << " reasons to watch this year's " << wordRandomnoun << "." << endl;
    cout << "- " << wordFamousname << " is hosting so you're guaranteed at least " << wordNumberone << " good laughs." << endl; 
    cout << "- You invested " << wordNumbertwo << "dollars to watch all of the " << wordSpecies << "nominated for Best Picture. That's money you could have spend on a brand new " << wordAnimal << "!" << endl;
    cout << "- To admire all of the " << wordAdjectivetwo << "dresses on the " << wordColor << "carpet and " << wordVerb << "at all the fasion disasters!" << endl;
    
    return 0;
    
}