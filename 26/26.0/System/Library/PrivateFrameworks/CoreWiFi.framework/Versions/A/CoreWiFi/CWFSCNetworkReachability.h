@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkReachability : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCNetworkReachability { } *_reachabilityRef;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (void)stopEventMonitoring;
- (void)startEventMonitoring;
- (BOOL)isMonitoringEvents;
- (void)dealloc;
- (id)init;
- (unsigned int)flags;
- (void).cxx_destruct;

@end
