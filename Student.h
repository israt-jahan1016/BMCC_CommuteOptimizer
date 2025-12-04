#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <vector>

class Student : public Person
{
private:
    QString cunyID;

public:
    struct ClassInfo {
        QString className;
        QString classTime;
        QString professor;
        QString profEmail;
    };

    std::vector<ClassInfo> classes;

    Student() {}  // default is needed

    Student(QString name, QString email, QString id)
        : Person(name, email), cunyID(id) {}

    QString getID() const { return cunyID; }
};

#endif // STUDENT_H

