//
// SOMARAKIS GIANNIS    | CSD4302
// DIALEKTAKIS ANTONIS  | dialektakis kalimeraaa
//
#ifndef HY352_JSONLANG_H
#define HY352_JSONLANG_H

#include <iostream>
#include <fstream>
#include <string>
#include <typeinfo>
#include <vector>
#include <map>

using namespace std;

#define PROGRAM_BEGIN \
        int main() { \
        cout << "PROGRAM_BEGIN" << endl;
#define PROGRAM_END \
        ;cout << "PROGRAM_END"; \
        return 0;}
#define JSON(var) \
        ;ObjectType var
#define KEY(name) \
        ObjectType(#name) = 0?0
#define STRING(name) \
        ObjectType(name)
#define NUMBER(name) \
        ObjectType(name)
#define OBJECT \
        *new ObjectType
#define ARRAY \
        ObjectType("TEST")


struct ObjectType {
public:
    //EMPTY DEFAULT CONSTRUCTOR
    ObjectType() : ObjectType_("EMPTY") {
        cout << "EMPTY CONSTRUCTOR" << endl;
    };

    //ARRAY CONSTRUCTOR
    ObjectType(string Str) : name(Str), ObjectType_("ARRAY") {
        cout << "EMPTY ARRAY" << endl;
    };

    //INT CONSTRUCTOR
    ObjectType(const int Int) : number(Int), ObjectType_("INT") {
        cout << "INT" << endl;
    };

    //DOUBLE CONSTRUCTOR
    ObjectType(const double Int) : number(Int), ObjectType_("INT") {
        cout << "INT" << endl;
    }

    ObjectType(ObjectType type, ObjectType type1, ObjectType type2) {

    }

    ObjectType(ObjectType type, ObjectType type1, ObjectType type2, ObjectType type3) {

    }

    const string &getObjectType() const {
        return ObjectType_;
    }

    void setObjectType(const string &objectType) {
        ObjectType_ = objectType;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name_) {
        ObjectType::name = name_;
    }

    int getNumber() const {
        return number;
    }

    void setNumber(int number_) {
        ObjectType::number = number_;
    }

    ObjectType &operator[](int what){
        return *this;
    }

    ObjectType &operator[](const char* what){
        return *this;
    }

    ObjectType operator[](ObjectType Head){return Head;};
    ObjectType operator[](ObjectType *Head){return *Head;};

private:
    string ObjectType_;
    string name;

    int number;
};

#endif //HY352_JSONLANG_H
