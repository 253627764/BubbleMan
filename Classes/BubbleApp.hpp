//
//  BubbleApp.h
//  T4
//
//  Created by zhuoyikang on 15-3-29.
//
//

#ifndef __T4__BubbleApp__
#define __T4__BubbleApp__

#include <stdio.h>
#include "SockNet.hpp"
#include "MsgQueue.hpp"

class BubbleApp:public SockApp
{
public:
    BubbleApp();
    void Dispatch(int t, unsigned char *buff, int);
    void Run();

    //LoopMq。
    void Loop();

private:
    MsgQueue mq;
};

#endif /* defined(__T4__BubbleApp__) */
