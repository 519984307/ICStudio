#ifndef INTERFACE_ALL_HEAD_H
#define INTERFACE_ALL_HEAD_H


/*********************************************************
 *
 * �Զ��幦�ܣ�����ID�ֶ�ͳһ����
 * ����ģ�鶨�幦��ID�ĵط���ȫ��ͳһ����
 */

enum Extend_Func_Id_Type
{
    //����ؼ��༭��ͼ����(0x0-0xFF)
    Extend_View_SwitchScene = 0x0,//�л�����

    //ͨѶģ��(0x100-0x1FF)

    //�ű�ģ��(0x200-0x2FF)
    Extend_Script_Register = 0x200,//void RegisterScriptFunc(ScriptFunc func,std::string name);
    Extend_Script_RunFromName = 0x201,//void RunScriptFromName(const std::string &name,bool isSync)
};

#endif // INTERFACE_ALL_HEAD_H
