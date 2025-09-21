@class NSString, NSDictionary;

@interface HomeKitDaemon.CleanEnergyAutomationConfigurationLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    void /* function */ coreAnalyticsEventName;
    void /* unknown type, empty encoding */ accessoryCount;
    void /* unknown type, empty encoding */ cleanEnergyAutomationEnabledCount;
    void /* unknown type, empty encoding */ isHomeConnectedToUtility;
    void /* unknown type, empty encoding */ isHomeElectricityRatesEnabled;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)initWithHomeUUID:(id)a0;
- (id)initWithStartTime:(double)a0 homeUUID:(id)a1;

@end
