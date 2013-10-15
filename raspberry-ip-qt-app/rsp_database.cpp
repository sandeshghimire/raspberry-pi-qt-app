#include "rsp_database.h"

bool RspDatabase::openDB()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("my.db.sqlite");
    return db.open();
}
bool RspDatabase::deleteDB()
{
    return QFile::remove("my.db.sqlite");
}

QSqlError RspDatabase::lastError()
{
    return db.lastError();

}
