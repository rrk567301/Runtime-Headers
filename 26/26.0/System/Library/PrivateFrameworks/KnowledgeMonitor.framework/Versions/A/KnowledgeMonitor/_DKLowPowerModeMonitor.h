@class NSNumber, BMSource;

@interface _DKLowPowerModeMonitor : _DKMonitor {
    BMSource *_source;
}

@property (retain, nonatomic) NSNumber *lowPowerModeStatus;

+ (BOOL)shouldMergeUnchangedEvents;
+ (id)eventStream;
+ (void)setLowPowerMode:(BOOL)a0;
+ (id)_BMEventWithLowPowerModeState:(BOOL)a0;
+ (id)_eventWithLowPowerModeState:(BOOL)a0;

- (void)synchronouslyReflectCurrentValue;
- (void)updateLowPowerMode;
- (void)start;
- (void)stop;
- (void)lowPowerModeStateChanged:(id)a0;
- (void).cxx_destruct;

@end
