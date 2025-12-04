#ifndef PERSON_H
#define PERSON_H

#include <QString>

class Person {
protected:
    QString name;
    QString email;

public:
    Person() {}  // default constructor
    Person(QString name, QString email);

    QString getName() const { return name; }
    QString getEmail() const { return email; }
};

#endif
