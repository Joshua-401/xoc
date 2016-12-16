/*@
Copyright (c) 2013-2014, Su Zhenyu steven.known@gmail.com

All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the Su Zhenyu nor the names of its contributors
      may be used to endorse or promote products derived from this software
      without specific prior written permission.

THIS SOFTWARE IS PROVIDED "AS IS" AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
@*/
#ifndef __TARG_INFO_H__
#define __TARG_INFO_H__

//This class represents interfaces to target machine/platform.
//Passes use these interfaces to perform transformations.

namespace xoc {

class TargInfo {
public:
    TargInfo() {}
    COPY_CONSTRUCTOR(TargInfo);
    virtual ~TargInfo() {}

    virtual UINT getNumOfAllocableIntegerRegister()
    {
        ASSERT(0, ("Target Dependent Code"));
        return 0;
    }

    virtual UINT getNumOfAllocableFloatRegister()
    {
        ASSERT(0, ("Target Dependent Code"));
        return 0;
    }

    //Return byte size of data cache.
    virtual UINT getDCacheSize()
    {
        ASSERT(0, ("Target Dependent Code"));
        return 0;
    }

    //Return byte size of instruction cache.
    virtual UINT getICacheSize()
    {
        ASSERT(0, ("Target Dependent Code"));
        return 0;
    }

    //Return byte size of cache line.
    virtual UINT getCacheLineSize()
    {
        ASSERT(0, ("Target Dependent Code"));
        return 0;
    }

    //Return byte size of TLB if any.
    virtual UINT getTLBSize()
    {
        ASSERT(0, ("Target Dependent Code"));
        return 0;
    }

    //Approximate the cycles to execute ir operation.
    virtual UINT estimateNumOfCycles(IR const* ir)
    {
        ASSERT(0, ("Target Dependent Code"));
        UNUSED(ir);
        return 0;
    }
};

} //namespace xoc
#endif
