@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface BRReachabilityMonitor : NSObject {
    NSHashTable *_reachabilityObservers;
    struct __SCNetworkReachability { } *_reachabilityRef;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) unsigned int reachabilityFlags;
@property (readonly, nonatomic) BOOL isNetworkReachable;

+ (unsigned int)getReachabilityFlagsByCheckingNetwork;
+ (BOOL)isNetworkReachableForFlags:(unsigned int)a0;
+ (id)sharedReachabilityMonitor;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)networkActivitySignal;

@end
