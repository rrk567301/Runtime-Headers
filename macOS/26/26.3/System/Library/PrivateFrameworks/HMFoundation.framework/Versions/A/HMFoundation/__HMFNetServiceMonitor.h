@class HMFNetService;

@interface __HMFNetServiceMonitor : HMFNetMonitor

@property (readonly) HMFNetService *service;

- (id)netAddress;
- (id)initWithNetService:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned long long)reachabilityPath;
- (id)logIdentifier;
- (id)initWithNetAddress:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
