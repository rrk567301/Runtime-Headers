@class NSNumber;

@interface _DKLowPowerModeMonitor : _DKMonitor

@property (retain, nonatomic) NSNumber *lowPowerModeStatus;

+ (id)eventStream;
+ (void)setLowPowerMode:(BOOL)a0;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)_eventWithLowPowerModeState:(BOOL)a0;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)lowPowerModeStateChanged:(id)a0;
- (void)updateLowPowerMode;

@end
