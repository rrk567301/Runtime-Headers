@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CWFKernelEventMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_source> *_keventSource;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

+ (id)descriptionForKernelEventCode:(unsigned long long)a0;

- (void)stopEventMonitoring;
- (void)startEventMonitoring;
- (BOOL)isMonitoringEvents;
- (void)dealloc;
- (id)init;
- (unsigned long long)interfaceFlagsWithInterfaceName:(id)a0;
- (void).cxx_destruct;

@end
