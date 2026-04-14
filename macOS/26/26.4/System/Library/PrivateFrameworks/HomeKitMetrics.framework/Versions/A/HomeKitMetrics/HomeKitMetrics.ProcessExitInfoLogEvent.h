@class NSString, NSDictionary;

@interface HomeKitMetrics.ProcessExitInfoLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    void /* function */ coreAnalyticsEventName;
    void /* unknown type, empty encoding */ processName;
    void /* unknown type, empty encoding */ launchReason;
    void /* unknown type, empty encoding */ exitStatusDomain;
    void /* unknown type, empty encoding */ exitStatusCode;
    void /* unknown type, empty encoding */ exitStatusErrorReason;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStartTime:(double)a0;

@end
