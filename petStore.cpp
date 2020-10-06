#include <iostream>

using namespace std;

class customer{
    public:
        char *Name;
        int age;
        char *favAnimal, *favColor, *favGender;
}

class animal{
    public:
        char *animalName;
        int age;
        char *color, *gender;
}

class petStore{
    public:
        animal[] listOPets;
        
    animal findPet(customer person){
        if(sizeof(listOPets) > 0){
            int len = sizeof(listOPets)/sizeof(listOPets[0]);
            for(int i = 0; i < len; i++){
                if(person.favAnimal == listOPets[i].animalName &&
                    person.favColor == listOPets[i].color &&
                    person.favGender == listOPets[i].gender){
                        return listOPets[i];
                    }
            }
        }
        return NULL;
    }
}

int main()
{
    cout<<"Hello World";

    return 0;
}
