@class NSString, NSDictionary;

@interface HomeKitDaemon.AdaptiveTemperatureAutomationsConfigurationLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    void /* function */ coreAnalyticsEventName;
    void /* unknown type, empty encoding */ accessoryCount;
    void /* unknown type, empty encoding */ adaptiveTemperatureEnabledCount;
    void /* unknown type, empty encoding */ modeSwitchingEnabledCount;
    void /* unknown type, empty encoding */ arrivalPredictionEnabledCount;
    void /* unknown type, empty encoding */ extendedAwayEnabledCount;
    void /* unknown type, empty encoding */ roomOccupancyEnabledCount;
    void /* unknown type, empty encoding */ sleepScheduleEnabledCount;
    void /* unknown type, empty encoding */ isHomeRoomOccupancySupported;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)initWithHomeUUID:(id)a0;
- (id)initWithStartTime:(double)a0 homeUUID:(id)a1;

@end
