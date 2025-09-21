@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDPowerManager : HMFObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    char _networkInterfaceActive;
    unsigned int _powerAssertion;
    struct __SCDynamicStore { } *_scStore;
    void *_scContext;
    char _started;
}

@property (nonatomic, getter=isNetworkAccessRequired) char networkAccessRequired;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)_update;
- (void)stop;
- (int)_ensureNetworkInterfaceMonitorStarted;
- (void)_ensureNetworkInterfaceMonitorStopped;

@end
