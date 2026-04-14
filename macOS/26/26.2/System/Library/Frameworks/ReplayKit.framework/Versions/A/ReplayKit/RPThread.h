@class NSString;

@interface RPThread : NSObject {
    void /* function */ *_routine;
    void *_context;
    NSString *_threadName;
    struct OpaqueFigThread { } *_thread;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateMutex;
    BOOL _isRunning;
}

- (BOOL)isRunning;
- (void)stop;
- (void).cxx_destruct;
- (void)setIsRunning:(BOOL)a0;
- (BOOL)start;
- (void)dealloc;
- (id)initWithRoutine:(void /* function */ *)a0 context:(id)a1 threadName:(id)a2;

@end
