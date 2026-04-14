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
- (unsigned long long)interfaceFlagsWithInterfaceName:(id)a0;
- (BOOL)isMonitoringEvents;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
