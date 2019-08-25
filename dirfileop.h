#ifndef DIRFILEOP_H
#define DIRFILEOP_H

#include "publicheads.h"
#include "note_global.h"


/**
 * @brief 获取 pFilePath 路径下所有文件夹
 * @param pFilePath 指定路径
 * @param pDirList 返回引用的文件夹
 */
QFileInfoList &getDirListOnly(const QString &pFilePath, QFileInfoList &pDirList);

/**
 * @brief 获取 pFilePath 下所有文件夹
 * @param pFilePath 指定路径
 * @param pFileList 返回的引用文件列表
 */
QFileInfoList &getFileListOnly(const QString &pFilePath, QFileInfoList &pFileList);

bool createFolder(const QString &pFilePath);
#endif // DIRFILEOP_H
