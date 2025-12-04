#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Student.h"

#include <QMainWindow>
#include <QString>
#include <QStringList>
#include <QCompleter>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include <QDebug>
#include <vector>



QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

struct Station {
    QString name;
    std::vector<QString> lines;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    std::vector<Station> stationList;
    void loadStations();

    void loadStudents();
    Student* findStudentByID(const QString &id);
    std::vector<Student> studentList;
    Student currentStudent;
    void loginValidation();

    void loadClassesForStudent();

    QString selectedStation;
    QString selectedClassText;
    QTime classStartTime;
    QString mainLine;

    int baseTravelMinutes = 0;
    int delayPenalty = 0;
    int finalTravelMinutes = 0;

    QTime arrivalTime;
    int minutesLateOrEarly = 0;
    bool willBeLate = false;

    QStringList alternativeLines;
    QList<QPair<QString, int>> alternativeLineResults;

    QString emailBodyText;

    void on_continueButton_clicked(); // homePage to resultPage (also all the calculation for the resultPage)

    //for calculation travel time
    class TravelTime {
    public:
        QString stationName;
        QString lineName;
        int minutes;
    };

    std::vector<TravelTime> travelTimes;

    void loadTravelTimes();

    class ServiceAlert {
    public:
        QString lineName;
        QString status;
    };

    std::vector<ServiceAlert> serviceAlertsList;
    void loadServiceAlerts();

    class StationLines {
    public:
        QString stationName;
        std::vector<QString> lines;
    };

    std::vector<StationLines> stationToLinesList;
    void loadStationToLines();

    void on_sendEmailButton_clicked();

    QString profEmail;



};


#endif // MAINWINDOW_H
