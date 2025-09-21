@class NSMutableDictionary;

@interface RTRoutineManagerRegistrantScenarioTrigger : RTRoutineManagerRegistrant

@property (readonly, nonatomic) unsigned long long monitoredScenarioTriggerTypes;
@property (readonly, copy, nonatomic) NSMutableDictionary *scenarioTriggerHandlers;
@property (readonly, nonatomic) char registered;

- (id)init;
- (void).cxx_destruct;
- (void)onScenarioTriggers:(id)a0 error:(id)a1;
- (id)startMonitoringForScenarioTriggerTypes:(unsigned long long)a0 handler:(id /* block */)a1;
- (id)stopMonitoringForScenarioTriggerTypes:(unsigned long long)a0;

@end
