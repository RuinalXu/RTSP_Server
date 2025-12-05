#ifndef THREAD_H
#define THREAD_H

#include <pthread.h>

class Thread {
private:
    void *mArg;
    bool mIsStart;
    bool mIsDetach;
    pthread_t mThreadId;
public:
    virtual ~Thread();
    
    bool start(void *arg);
    bool detach();
    bool join();
    bool cancel();
    pthread_t getThreadId() const;

protected:
    Thread();

    virtual void run(void *arg) = 0;

private:
    static void *threadRun(void *);
};

#endif
