#ifndef __BASEAPPLICATION_H__
#define __BASEAPPLICATION_H__

#include "IApplication.hpp"


class BaseApplication : implements IApplication{
public:
    virtual int Initialize();
    virtual void Finalize();

    virtual void Tick();

    virtual bool IsQuit();
protected:

    bool m_bQuit;
}

#endif //__BASEAPPLICATION_H__