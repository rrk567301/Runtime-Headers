@class HMFNetService;

@interface __HMFNetServiceMonitor : HMFNetMonitor

@property (readonly) HMFNetService *service;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned long long)reachabilityPath;
- (id)initWithNetAddress:(id)a0;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)initWithNetService:(id)a0;
- (id)netAddress;
- (void)dealloc;

@end
