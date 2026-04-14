@class NSString, NSDictionary;

@interface HomeKitDaemon.CoreDataStoreActivityTotalCountsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ storeType;
    void /* unknown type, empty encoding */ totalAccessCount;
    void /* unknown type, empty encoding */ totalLoadedCount;
    void /* unknown type, empty encoding */ totalUnloadedCount;
    void /* function */ coreAnalyticsEventName;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStartTime:(double)a0;

@end
