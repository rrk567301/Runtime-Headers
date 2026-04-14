@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CWFKernelEventMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_source> *_keventSource;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;
- (BOOL)isMonitoringEvents;
- (id)__descriptionForKernelEventCode:(unsigned long long)a0;
- (unsigned long long)interfaceFlagsWithInterfaceName:(id)a0;

@end
