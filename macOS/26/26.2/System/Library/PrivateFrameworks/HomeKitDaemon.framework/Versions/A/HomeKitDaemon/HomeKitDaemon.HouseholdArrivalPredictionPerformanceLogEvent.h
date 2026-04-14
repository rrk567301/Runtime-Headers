@class NSString, NSDictionary;

@interface HomeKitDaemon.HouseholdArrivalPredictionPerformanceLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ preciseCount;
    void /* unknown type, empty encoding */ impreciseCount;
    void /* unknown type, empty encoding */ accurateCount;
    void /* unknown type, empty encoding */ inaccurateCount;
    void /* function */ coreAnalyticsEventName;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)initWithHomeUUID:(id)a0;
- (id)initWithStartTime:(double)a0 homeUUID:(id)a1;

@end
