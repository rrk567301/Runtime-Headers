@class NSURL, NSObject;
@protocol SUOSUNetworkReachabilityMonitorDelegate, OS_dispatch_queue;

@interface SUOSUNetworkReachabilityMonitor : NSObject

@property (retain) NSURL *targetURL;
@property struct __SCNetworkReachability { } *target;
@property (weak) id<SUOSUNetworkReachabilityMonitorDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property char active;
@property (readonly) char isReachable;

+ (char)_isReachableWithFlags:(unsigned int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (char)startMonitoring;
- (void)stopMonitoring;
- (char)_sendHTTPHeadRequestToTargetURL;
- (void)_reachabilityChangedWithTarget:(struct __SCNetworkReachability { } *)a0 flags:(unsigned int)a1;
- (id)initWithTargetURL:(id)a0 delegate:(id)a1;

@end
