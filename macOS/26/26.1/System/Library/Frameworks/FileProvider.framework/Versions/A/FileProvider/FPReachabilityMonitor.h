@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface FPReachabilityMonitor : NSObject {
    NSHashTable *_reachabilityObservers;
    struct __SCNetworkReachability { } *_reachabilityRef;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) unsigned int reachabilityFlags;

+ (id)sharedReachabilityMonitor;
+ (unsigned int)getReachabilityFlagsByCheckingNetwork;
+ (BOOL)isNetworkReachableForFlags:(unsigned int)a0;

- (void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (BOOL)isNetworkReachableForBundle:(id)a0;

@end
