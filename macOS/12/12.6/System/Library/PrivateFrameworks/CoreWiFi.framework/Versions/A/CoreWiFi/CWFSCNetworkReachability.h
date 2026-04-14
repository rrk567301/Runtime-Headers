@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkReachability : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCNetworkReachability { } *_reachabilityRef;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (unsigned int)flags;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;
- (BOOL)isMonitoringEvents;

@end
