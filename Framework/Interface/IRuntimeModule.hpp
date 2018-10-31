#ifndef __IRUNTIMEMODULE_H__
#define __IRUNTIMEMODULE_H__
#include "Interface.hpp"

Interface IRuntimeModule{
public:
        virtual ~IRuntimeModule() {};

        virtual int Initialize() = 0;
        virtual void Finalize() = 0;

        virtual void Tick() = 0;
};

#endif //__IRUNTIMEMODULE_H__