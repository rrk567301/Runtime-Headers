@class NSString, NSDictionary;

@interface HomeKitDaemon.RestrictedGuestFeatureLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ hasRGSupportedAccessory;
    void /* unknown type, empty encoding */ numberOfRGs;
    void /* unknown type, empty encoding */ numEnabledResidentsInHome;
    void /* function */ coreAnalyticsEventName;
}

@property (nonatomic, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic) unsigned long long coreAnalyticsEventOptions;

- (void).cxx_destruct;
- (id)initWithHomeUUID:(id)a0;
- (id)initWithStartTime:(double)a0 homeUUID:(id)a1;

@end
