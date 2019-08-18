#include "dirfileop.h"

QFileInfoList &getDirListOnly(const QString &pFilePath, QFileInfoList &pDirList){
    QDir *firstDirPath = new QDir(pFilePath);
    firstDirPath->setFilter(
                QDir::Dirs |
                QDir::Drives |
                QDir::NoDotAndDotDot |
                QDir::AllDirs);
    pDirList = firstDirPath->entryInfoList();
    return pDirList;
}

QFileInfoList &getFileListOnly(const QString &pFilePath, QFileInfoList &pFileList){
    QDir *firstDirPath = new QDir(pFilePath);
    firstDirPath->setFilter(
                QDir::Files |
                QDir::NoDotAndDotDot
                );
    pFileList =  firstDirPath->entryInfoList();
    return pFileList;
}
