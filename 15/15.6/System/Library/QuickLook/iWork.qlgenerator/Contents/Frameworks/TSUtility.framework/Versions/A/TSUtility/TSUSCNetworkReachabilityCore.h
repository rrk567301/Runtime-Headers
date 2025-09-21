@class NSString;

@interface TSUSCNetworkReachabilityCore : NSObject <TSUNetworkReachabilityCore> {
    struct __SCNetworkReachability { } *_reachabilityRef;
    id /* block */ _notifyBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability { } *)a0;
- (char)getReachabilityFlags:(out unsigned int *)a0;
- (char)startNotifyingWithQueue:(id)a0 block:(id /* block */)a1;
- (void)stopNotifying;

@end
