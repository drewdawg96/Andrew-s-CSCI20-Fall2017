 // I know I did not do the lab 16. I am still trying to catch up, but I am still having trouble figuring this all out. 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 #include <iostream>
 using namespace std;
 
 struct monster{    // Has to start w/ struct
  string head; Happy 
  string eyes; Spritem
  string ears; Vegitas
  string mouth; Vegitas
  string nose; Wackus
 };
 
 int main()
 {
   monster monsterA;    // This is the object.
   monsterA.head = "Zombus"; // Can't forget . after monsterA.
   monsterA.eyes = "Vegitas";
   monsterA.ears = "Wackus";
   monsterA.nose = "Vegitas";
   monsterA.mouth = "Wackus";
   
   cout<<"Head:"<<monsterA.head<<endl; 
   cout<<"Eyes:"<<monsterA.eyes<<endl;
   cout<<"Ears:"<<monsterA.ears<<endl;
   cout<<"Nose:"<<monsterA.nose<<endl;
   cout<<"Mouth:"<<monsterA.mouth<<endl; // Isn't the object before struct?
   
   monster monsterB;    // This is the object
   monsterB.head = "Franken"; // Variable makes up an object. 
   monsterB.eyes = "Wackus";
   monsterB.ears = "Vegitas";
   monsterB.nose = "Spritem";
   monsterB.mouth = "Wackus";
   
   cout<<"Head:"<<monsterB.head<<endl; 
   cout<<"Eyes:"<<monsterB.eyes<<endl;
   cout<<"Ears:"<<monsterB.ears<<endl;
   cout<<"Nose:"<<monsterB.nose<<endl;
   cout<<"Mouth:"<<monsterB.mouth<<endl; // Isn't the object before struct?
     
 }