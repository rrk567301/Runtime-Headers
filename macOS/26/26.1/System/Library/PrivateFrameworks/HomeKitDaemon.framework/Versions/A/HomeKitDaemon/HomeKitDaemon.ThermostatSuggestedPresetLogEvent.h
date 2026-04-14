@class NSString, NSDictionary;

@interface HomeKitDaemon.ThermostatSuggestedPresetLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ presetScenario;
    void /* unknown type, empty encoding */ nextPresetScenario;
    void /* unknown type, empty encoding */ durationInMinutes;
    void /* unknown type, empty encoding */ changedReason;
    void /* function */ coreAnalyticsEventName;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStartTime:(double)a0;

@end
