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
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (BOOL)isNetworkReachableForBundle:(id)a0;

@end
