@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CWFEAP8021X : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    BOOL _isMonitoringEvents;
}

@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (copy) id /* block */ eventHandler;

- (void)startEventMonitoring;
- (void)__startEventMonitoring;
- (BOOL)isMonitoringEvents;
- (id)init;
- (id)controlMode:(id *)a0;
- (id)initWithInterfaceName:(id)a0;
- (void)stopEventMonitoring;
- (void).cxx_destruct;
- (void)dealloc;
- (id)clientStatus:(id *)a0;
- (id)controlState:(id *)a0;
- (id)supplicantState:(id *)a0;

@end
