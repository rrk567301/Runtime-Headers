@interface HealthDaemon.HDSwimmingEventCollector : HDWorkoutEventCollector <HealthDaemon.HDSwimmingObserver>

+ (BOOL)isAvailableInCurrentHardware;
+ (BOOL)supportsWorkoutActivityType:(unsigned long long)a0;

- (void)stop;
- (id)init;
- (void)historicalSwimmingDataDidUpdate:(id)a0 reference:(id)a1;
- (id)initWithProfile:(id)a0 delegate:(id)a1;
- (void)onDemandSwimmingDataDidUpdate:(id)a0;
- (void)startWithSessionId:(id)a0;

@end
