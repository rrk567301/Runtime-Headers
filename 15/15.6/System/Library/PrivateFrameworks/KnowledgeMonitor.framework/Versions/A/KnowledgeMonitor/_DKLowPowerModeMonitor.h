@class NSNumber, BMSource;

@interface _DKLowPowerModeMonitor : _DKMonitor {
    BMSource *_source;
}

@property (retain, nonatomic) NSNumber *lowPowerModeStatus;

+ (id)eventStream;
+ (void)setLowPowerMode:(char)a0;
+ (id)_BMEventWithLowPowerModeState:(char)a0;
+ (id)_eventWithLowPowerModeState:(char)a0;
+ (char)shouldMergeUnchangedEvents;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)lowPowerModeStateChanged:(id)a0;
- (void)updateLowPowerMode;

@end
