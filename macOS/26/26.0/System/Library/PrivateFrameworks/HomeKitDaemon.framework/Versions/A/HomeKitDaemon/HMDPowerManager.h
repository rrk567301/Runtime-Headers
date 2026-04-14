@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDPowerManager : HMFObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _networkInterfaceActive;
    unsigned int _powerAssertion;
    struct __SCDynamicStore { } *_scStore;
    void *_scContext;
    BOOL _started;
}

@property (nonatomic, getter=isNetworkAccessRequired) BOOL networkAccessRequired;

- (void)_update;
- (void)start;
- (void)dealloc;
- (void)stop;
- (void)_ensureNetworkInterfaceMonitorStopped;
- (id)init;
- (int)_ensureNetworkInterfaceMonitorStarted;
- (void).cxx_destruct;

@end
