#ifndef MACROINTERFACE_H
#define MACROINTERFACE_H
#include <vector>
#include "glog/logging.h"
#include "IZObject.h"
#define   LOG_HREAD "SCRIPT::"

class LuaFunc
{
public:
    //��ʼ��
    static void Init();

    //����ӿ�
    static int l_SetValue(lua_State *L);
    static int l_GetValue(lua_State *L);
    static int l_SendData(lua_State *L);
    static int l_RecvData(lua_State *L);

    //�ַ�����ת��
    static int l_Gbk2Utf(lua_State *L);
    static int l_Utf2Gbk(lua_State *L);

    //��־
    static int l_Log(lua_State *L);

    //�ű����л�
    static int myWriter(lua_State *L, const void *p, size_t sz, void *ud);
    static const char * myReader(lua_State *L, void *ud, size_t *sz);


    static std::vector<ScriptFunc> MFUNC_P;
    static std::vector<std::string> MFUNC_Name;
};

#endif // MACROINTERFACE_H
