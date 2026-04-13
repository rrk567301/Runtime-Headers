@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface BRReachabilityMonitor : NSObject {
    NSHashTable *_reachabilityObservers;
    struct __SCNetworkReachability { } *_reachabilityRef;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) unsigned int reachabilityFlags;
@property (readonly, nonatomic) BOOL isNetworkReachable;

+ (BOOL)isNetworkReachableForFlags:(unsigned int)a0;
+ (unsigned int)getReachabilityFlagsByCheckingNetwork;
+ (id)sharedReachabilityMonitor;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;

@end
