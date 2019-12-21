// Copyright 2019 SMS
// License(Apache-2.0)
// 本地化

#include "localization.h"



#ifdef LANG_EN
const char* LOC_WARN_DEBUG             = "This version is built in development for debugging only";
const char* LOC_ERROR_UNKNOWN_COMMAND  = "Unknown command";
const char* LOC_ERROR_COMMAND_TOO_LONG = "Command too long";
#endif

#ifdef LANG_ZH_CN
const char* LOC_WARN_DEBUG             = "该版本于开发中构建, 仅供调试用";
const char* LOC_ERROR_UNKNOWN_COMMAND  = "未知命令";
const char* LOC_ERROR_COMMAND_TOO_LONG = "命令过长";
const char* LOC_ERROR_INVALID_ARGUMENT = "无效参数";
#endif

#ifdef LANG_ZH_TW
const char* LOC_WARN_DEBUG             = "該版本於開發中構建, 僅供調試用";
const char* LOC_ERROR_UNKNOWN_COMMAND  = "未知命令";
const char* LOC_ERROR_COMMAND_TOO_LONG = "命令過長";
#endif


