@class GPProcessInfo, GPAutoEDRParameters, NSObject, NSLock;
@protocol OS_dispatch_queue;

@interface GPProcessMonitor : NSObject <GamePolicy.GamePolicyAppClient> {
    id /* block */ _updateHandler;
    id /* block */ _transientUpdateHandler;
    NSObject<OS_dispatch_queue> *_queue;
    struct { unsigned int val[8]; } _auditTokenForCurrentProcess;
    GPProcessInfo *_currentProcessInfo;
    GPAutoEDRParameters *_autoEDRParameters;
    char _invalidated;
    NSLock *_lock;
}

+ (struct { unsigned int x0[8]; })auditTokenForCurrentProcess;
+ (id)monitorForCurrentProcess;

- (id)init;
- (void).cxx_destruct;
- (void)setUpdateHandler:(id /* block */)a0;
- (void)_onqueue_monitorCurrentProcessTransientState;
- (void)_onqueue_requestCurrentProcessInfo;
- (void)setTransientUpdateHandler:(id /* block */)a0;
- (void)transientStateWasUpdated:(id)a0;

@end
