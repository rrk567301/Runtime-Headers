@interface TVISReachabilityMonitor : NSObject {
    id /* block */ _reachableStateBlock;
    struct __SCNetworkReachability { } *_reachabilityRef;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)stop;
- (char)isReachable;
- (void)updateReachability;
- (char)startOnQueue:(id)a0 withBlock:(id /* block */)a1;

@end
