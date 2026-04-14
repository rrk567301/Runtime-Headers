@class HMFNetService;

@interface __HMFNetServiceMonitor : HMFNetMonitor

@property (readonly) HMFNetService *service;

- (unsigned long long)reachabilityPath;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNetService:(id)a0;
- (id)initWithNetAddress:(id)a0;
- (void)dealloc;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)netAddress;

@end
