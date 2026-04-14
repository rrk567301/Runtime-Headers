@class NSString, NSDictionary;

@interface HomeKitDaemon.HMDHomeKeySetupWalletLogEventV2 : HMMLogEvent <HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ success;
    void /* function */ coreAnalyticsEventName;
}

@property (nonatomic, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic) unsigned long long coreAnalyticsEventOptions;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStartTime:(double)a0;

@end
