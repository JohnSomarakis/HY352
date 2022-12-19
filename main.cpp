#include "JSONlang.h"

PROGRAM_BEGIN

    //define emptyObj json with empty object
    JSON(emptyObj) = OBJECT {}
    //define emptyArray json with empty array
    JSON(emptyArray) = ARRAY
    //define book json with an object containing data for a book
    JSON(book) = OBJECT {
            KEY(title) : STRING("Gone Girl"),
            KEY(published) : NUMBER(2012),
            KEY(type) : STRING("Thriller"),
            KEY(author) : OBJECT{
                KEY(firstname) : STRING("GILLIAN"),
                KEY(surname) : STRING("FLYNN"),
                KEY(age) : NUMBER(45)
            }
    }

    //define week_temperatures json with an array of numbers
    JSON(week_temperatures) = ARRAY [
            NUMBER(20),NUMBER(19.5),NUMBER(19),NUMBER(20),
            NUMBER(19),NUMBER(18.5),NUMBER(19)
    ]

PROGRAM_END
