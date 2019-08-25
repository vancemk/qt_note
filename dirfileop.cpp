#include "dirfileop.h"

/**
*/
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

/**
 * @brief 创建文件夹
 */
bool createFolder(const QString &pFilePath){
    QString dir_str = WORKDIR1 + pFilePath;

    // 检查目录是否存在，若不存在则新建
    QDir dir;
    if (!dir.exists(dir_str))
    {
        bool res = dir.mkpath(dir_str);
        //qDebug() << "新建目录是否成功" << res;
        return res;
    }
    else
    {
        return false;
    }
}
