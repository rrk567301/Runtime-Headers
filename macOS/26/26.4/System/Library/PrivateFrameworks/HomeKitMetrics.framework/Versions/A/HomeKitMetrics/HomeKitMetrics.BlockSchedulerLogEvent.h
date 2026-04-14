@class NSString, NSDictionary;

@interface HomeKitMetrics.BlockSchedulerLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    void /* function */ coreAnalyticsEventName;
    void /* unknown type, empty encoding */ processName;
    void /* unknown type, empty encoding */ blockName;
    void /* unknown type, empty encoding */ publicBlockName;
    void /* unknown type, empty encoding */ secondsSinceLastRun;
    void /* unknown type, empty encoding */ isDailyBlock;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStartTime:(double)a0;

@end
