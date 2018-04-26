#pragma once
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <Arduino.h>
#include "FileUtils.h"
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class LoggerClass
{
  public:

    LoggerClass();

    void write(uint8_t* data,size_t dataLength);

  private:

    SdFile workFile;
    bool openWorkFile();
    void closeWorkFile();

};
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
extern LoggerClass Logger;
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
