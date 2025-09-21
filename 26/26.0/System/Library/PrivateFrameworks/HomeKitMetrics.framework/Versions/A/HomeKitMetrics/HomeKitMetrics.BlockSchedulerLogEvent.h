@class NSString, NSDictionary;

@interface HomeKitMetrics.BlockSchedulerLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    void /* function */ coreAnalyticsEventName;
    void /* unknown type, empty encoding */ publicBlockName;
    void /* unknown type, empty encoding */ secondsSinceLastRun;
    void /* unknown type, empty encoding */ isDailyBlock;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic) unsigned long long coreAnalyticsEventOptions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStartTime:(double)a0;

@end
