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

- (void)stopEventMonitoring;
- (void)startEventMonitoring;
- (BOOL)isMonitoringEvents;
- (id)supplicantState:(id *)a0;
- (void)__startEventMonitoring;
- (id)initWithInterfaceName:(id)a0;
- (id)clientStatus:(id *)a0;
- (id)controlMode:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)controlState:(id *)a0;
- (void)dealloc;

@end
