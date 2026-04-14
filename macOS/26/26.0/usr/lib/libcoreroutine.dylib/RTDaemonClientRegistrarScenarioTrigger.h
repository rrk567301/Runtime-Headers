@class RTInvocationDispatcher, NSMutableDictionary, RTScenarioTriggerManager, NSString, NSObject;
@protocol OS_dispatch_queue, RTDaemonClientRegistrarScenarioTriggerProtocol;

@interface RTDaemonClientRegistrarScenarioTrigger : RTDaemonClientRegistrar <NSSecureCoding, RTDaemonClientRegistrarProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *pendingScenarioInvocations;
@property (retain, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager;
@property (retain, nonatomic) RTInvocationDispatcher *dispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) unsigned long long monitoredScenarioTriggerTypes;
@property (weak, nonatomic) id<RTDaemonClientRegistrarScenarioTriggerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScenarioTriggerManager:(id)a0 queue:(id)a1;
- (void)onScenarioTriggerManagerNotification:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_onScenarioTriggerManagerNotification:(id)a0;
- (long long)countOfPendingInvocations;
- (id)init;
- (void)_logMonitoredScenarioTriggers:(unsigned long long)a0;
- (void)addPendingScenarioTriggerBlock:(id /* block */)a0 failBlock:(id /* block */)a1 description:(id)a2;
- (void)startMonitoringForScenarioTriggerType:(unsigned long long)a0;
- (BOOL)invocationsPending;
- (id)initWithCoder:(id)a0;
- (BOOL)registered;
- (void)stopMonitoringForScenarioTriggerType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
