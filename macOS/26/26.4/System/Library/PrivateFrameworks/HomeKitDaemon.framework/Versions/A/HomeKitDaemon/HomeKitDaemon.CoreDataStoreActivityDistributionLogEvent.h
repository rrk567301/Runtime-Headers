@class NSString, NSDictionary;

@interface HomeKitDaemon.CoreDataStoreActivityDistributionLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ storeType;
    void /* unknown type, empty encoding */ indexOfDistribution;
    void /* unknown type, empty encoding */ accessCount;
    void /* unknown type, empty encoding */ loadedCount;
    void /* unknown type, empty encoding */ unloadedCount;
    void /* function */ coreAnalyticsEventName;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStartTime:(double)a0;

@end
