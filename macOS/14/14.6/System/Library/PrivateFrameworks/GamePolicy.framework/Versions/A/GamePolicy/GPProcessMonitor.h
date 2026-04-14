@class GPProcessInfo, NSXPCConnection, NSObject, NSLock;
@protocol OS_dispatch_queue;

@interface GPProcessMonitor : NSObject {
    id /* block */ _updateHandler;
    NSXPCConnection *_daemonConnection;
    NSObject<OS_dispatch_queue> *_queue;
    struct { unsigned int val[8]; } _auditTokenForCurrentProcess;
    GPProcessInfo *_currentProcessInfo;
    BOOL _invalidated;
    NSLock *_lock;
}

+ (struct { unsigned int x0[8]; })auditTokenForCurrentProcess;
+ (id)monitorForCurrentProcess;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setUpdateHandler:(id /* block */)a0;
- (void)_onqueue_connectToXPCService;
- (void)_onqueue_requestCurrentProcessInfo;

@end
