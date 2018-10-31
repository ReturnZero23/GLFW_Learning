#ifndef __IAPPLICATION_H__
#define __IAPPLICATION_H__

#include "IRuntimeModule.hpp"

Interface IApplication : implements IRuntimeModule{
public:
    virtual int Initialize() = 0;
    virtual void Finalize() = 0;

    virtual void tick() = 0;

    virtual bool IsQuit() = 0;
};


#endif // __IAPPLICATION_H__