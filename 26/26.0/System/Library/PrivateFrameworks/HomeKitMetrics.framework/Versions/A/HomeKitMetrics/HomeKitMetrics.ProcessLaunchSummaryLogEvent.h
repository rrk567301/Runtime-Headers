@class NSString, NSDictionary;

@interface HomeKitMetrics.ProcessLaunchSummaryLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    void /* function */ coreAnalyticsEventName;
    void /* unknown type, empty encoding */ counts;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic) unsigned long long coreAnalyticsEventOptions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStartTime:(double)a0;

@end
