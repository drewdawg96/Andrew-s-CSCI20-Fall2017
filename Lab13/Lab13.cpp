 #include <iostream> // preprocessor directives
 using namespace std; // preprocessor directives
 
 int main() {
 
 int numBirth = 0; 
 int numDeath = 0;
 int numIntmig = 0;
 int numNetgain = 0;
 int numYear = 0;
 int numPopulation = 0;
 int numSecperyear = 3155760;
 int numFuturepopulation = 0;
 
 cout << "How many seconds will pass for every birth ";
 cin >> numBirth ;
 cout << "How many seconds will pass for every death " ;
 cin >> numDeath ;
 cout << "How many seconds will pass for every international migrant " ;
 cin >> numIntmig ;
 cout << "How many seconds will pass for every one person gained " ;
 cin >> numNetgain ;
 cout << "What is the current population " ;
 cin >> numPopulation ;
 cout << "What is the current year " ;
 cin >> numYear ; 
 numFuturepopulation = numPopulation + (numYear * ( (numSecperyear / numBirth) - (numSecperyear / numDeath) + (numSecperyear / numIntmig) ) ) ;
 cout << "In the year " << numYear << " the population will be " << numPopulation << " in the United States." << endl;
 
 
 }