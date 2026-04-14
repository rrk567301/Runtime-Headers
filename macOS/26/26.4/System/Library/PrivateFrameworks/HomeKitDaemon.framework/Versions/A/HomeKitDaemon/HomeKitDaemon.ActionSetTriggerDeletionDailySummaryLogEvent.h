@class NSString, NSDictionary;

@interface HomeKitDaemon.ActionSetTriggerDeletionDailySummaryLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ actionDeletionCount;
    void /* unknown type, empty encoding */ eventDeletionCount;
    void /* function */ coreAnalyticsEventName;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStartTime:(double)a0;

@end
