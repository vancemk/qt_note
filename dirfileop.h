#ifndef DIRFILEOP_H
#define DIRFILEOP_H

#include <QFileInfo>
#include <QDir>
#include <QFileInfoList>
#include <iostream>
#include <string>

QFileInfoList &getDirListOnly(const QString &pFilePath, QFileInfoList &pDirList);

QFileInfoList &getFileListOnly(const QString &pFilePath, QFileInfoList &pFileList);

#endif // DIRFILEOP_H
