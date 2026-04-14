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

- (void)start;
- (void)stop;
- (void)updateLowPowerMode;
- (void)synchronouslyReflectCurrentValue;
- (void).cxx_destruct;
- (void)lowPowerModeStateChanged:(id)a0;

@end
