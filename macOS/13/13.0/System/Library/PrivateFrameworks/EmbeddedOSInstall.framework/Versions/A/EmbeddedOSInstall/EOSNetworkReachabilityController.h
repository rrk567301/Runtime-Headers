@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface EOSNetworkReachabilityController : NSObject

@property (retain) NSString *host;
@property struct __SCNetworkReachability { } *target;
@property (retain) NSObject<OS_dispatch_queue> *reachabilityCallbacksQueue;
@property (retain) NSObject<OS_dispatch_semaphore> *hostBecameReachable;
@property BOOL reachable;

+ (BOOL)networkReachable;
+ (BOOL)_isReachableWithFlags:(unsigned int)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTargetURL:(id)a0;
- (void)_reachabilityChangedWithTarget:(struct __SCNetworkReachability { } *)a0 flags:(unsigned int)a1;
- (BOOL)waitForNetworkReachabilityWithTimeout:(double)a0;

@end
