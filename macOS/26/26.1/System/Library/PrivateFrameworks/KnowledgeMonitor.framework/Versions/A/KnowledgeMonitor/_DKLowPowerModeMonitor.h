@class NSNumber, BMSource;

@interface _DKLowPowerModeMonitor : _DKMonitor {
    BMSource *_source;
}

@property (retain, nonatomic) NSNumber *lowPowerModeStatus;

+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (void)setLowPowerMode:(BOOL)a0;
+ (id)_BMEventWithLowPowerModeState:(BOOL)a0;
+ (id)_eventWithLowPowerModeState:(BOOL)a0;

- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)lowPowerModeStateChanged:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)updateLowPowerMode;

@end
