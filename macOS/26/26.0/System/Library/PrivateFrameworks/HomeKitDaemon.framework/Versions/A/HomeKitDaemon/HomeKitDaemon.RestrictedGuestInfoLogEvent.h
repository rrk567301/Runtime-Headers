@class NSString, NSDictionary;

@interface HomeKitDaemon.RestrictedGuestInfoLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ hasHomeKey;
    void /* unknown type, empty encoding */ hasPinCode;
    void /* unknown type, empty encoding */ isChildWatch;
    void /* unknown type, empty encoding */ numberOfSchedules;
    void /* unknown type, empty encoding */ scheduleType;
    void /* function */ coreAnalyticsEventName;
}

@property (nonatomic, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic) unsigned long long coreAnalyticsEventOptions;

- (void).cxx_destruct;
- (id)initWithHomeUUID:(id)a0;
- (id)initWithStartTime:(double)a0 homeUUID:(id)a1;

@end
