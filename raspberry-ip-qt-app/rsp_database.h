#ifndef RSP_DATABASE_H
#define RSP_DATABASE_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlError>
#include <QObject>
#include <QFile>


class RspDatabase : public QObject
{

public:
    RspDatabase(QObject *parent = 0);
    ~RspDatabase();
public:
    bool openDB();
    bool deleteDB();
    QSqlError lastError();


private:
    QSqlDatabase db;

};

#endif // RSP_DATABASE_H
