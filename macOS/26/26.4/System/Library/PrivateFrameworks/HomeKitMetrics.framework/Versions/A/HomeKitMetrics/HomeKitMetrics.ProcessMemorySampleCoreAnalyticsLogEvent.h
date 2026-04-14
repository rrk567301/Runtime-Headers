@class NSString, NSDictionary;

@interface HomeKitMetrics.ProcessMemorySampleCoreAnalyticsLogEvent : HomeKitMetrics.ProcessMemorySampleLogEvent <HMMCoreAnalyticsLogging> {
    void /* function */ coreAnalyticsEventName;
    void /* unknown type, empty encoding */ processName;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;

- (void).cxx_destruct;

@end
