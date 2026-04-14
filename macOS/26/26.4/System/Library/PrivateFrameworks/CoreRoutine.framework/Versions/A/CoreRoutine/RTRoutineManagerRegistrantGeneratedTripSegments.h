@interface RTRoutineManagerRegistrantGeneratedTripSegments : RTRoutineManagerRegistrant

@property (copy, nonatomic) id /* block */ clientCallback;
@property (readonly, nonatomic, getter=isRegistered) BOOL registered;

- (id)startMonitoringWithCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (void)onGeneratedTripSegment:(id)a0 andError:(id)a1;

@end
