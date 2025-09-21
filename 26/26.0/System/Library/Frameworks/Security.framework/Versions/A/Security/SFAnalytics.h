@class NSString, SFAnalyticsSQLiteStore, NSMutableSet, SFAnalyticsCollection, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SFAnalytics : NSObject <SFAnalyticsProtocol> {
    SFAnalyticsSQLiteStore *_database;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_samplers;
    NSMutableDictionary *_multisamplers;
    unsigned char _disableLogging : 1;
}

@property (class, readonly) NSString *databasePath;

@property (retain) NSMutableSet *metricsHooks;
@property (retain) SFAnalyticsCollection *collection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (void)removeLegacyDefaultAnalyticsDatabasePath:(id)a0 usingDispatchToken:(long long *)a1;
+ (BOOL)requiredVersion:(int)a0 rules:(id)a1 reason:(id)a2 error:(id *)a3;
+ (BOOL)parseEventFilter:(id)a0 format:(id)a1 error:(id *)a2;
+ (long long)fuzzyDaysSinceDate:(id)a0;
+ (id)parseVersions:(id)a0 error:(id *)a1;
+ (id)underlyingErrors:(id)a0;
+ (long long)fuzzyInteger:(long long)a0;
+ (id)fuzzyNumber:(id)a0;
+ (id)parseAction:(id)a0 error:(id *)a1;
+ (id)defaultProtectedAnalyticsDatabasePath:(id)a0;
+ (id)treeOfUnderlyingErrors:(id)a0 depth:(long long)a1;
+ (BOOL)parseRules:(id)a0 format:(id)a1 error:(id *)a2;
+ (id)errorWithCode:(long long)a0 description:(id)a1;
+ (id)defaultAnalyticsDatabasePath:(id)a0;
+ (id)hwModelID;
+ (id)defaultProtectedAnalyticsDatabasePath:(id)a0 uuid:(id)a1;
+ (id)formatSFACollection:(id)a0 error:(id *)a1;
+ (void)addOSVersionToEvent:(id)a0;
+ (id)errorWithCode:(long long)a0 description:(id)a1 underlying:(id)a2;
+ (void)logConsumerProcessInfo;
+ (id)encodeSFACollection:(id)a0 error:(id *)a1;
+ (BOOL)validateSFACollection:(id)a0 error:(id *)a1;

- (void)setMetricsAccountID:(id)a0;
- (id)metricsAccountID;
- (id)database;
- (void)logSuccessForEventNamed:(id)a0 timestampBucket:(unsigned int)a1;
- (void)noteEventNamed:(id)a0;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2 withAttributes:(id)a3;
- (id)dailyMetrics;
- (void)setNumberProperty:(id)a0 forKey:(id)a1;
- (void)logHardFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (id)numberPropertyForKey:(id)a0;
- (void)setDataProperty:(id)a0 forKey:(id)a1;
- (void)setDateProperty:(id)a0 forKey:(id)a1;
- (void)logMetric:(id)a0 withName:(id)a1;
- (void)logEventNamed:(id)a0 class:(long long)a1 attributes:(id)a2 timestampBucket:(unsigned int)a3;
- (void)logSoftFailureForEventNamed:(id)a0 withAttributes:(id)a1 timestampBucket:(unsigned int)a2;
- (void)updateCollectionConfigurationWithData:(id)a0;
- (void)logEventNamed:(id)a0 class:(long long)a1 attributes:(id)a2;
- (id)startLogSystemMetricsForActivityNamed:(id)a0;
- (void)noteEventNamed:(id)a0 timestampBucket:(unsigned int)a1;
- (void)removeMultiSamplerForName:(id)a0;
- (void)logSoftFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)removeMetricSamplerForName:(id)a0;
- (void)logMetric:(id)a0 withName:(id)a1 oncePerReport:(BOOL)a2;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2;
- (id)init;
- (id)existingMultiSamplerForName:(id)a0;
- (void)removeMetricsHook:(id /* block */)a0;
- (void)removeState;
- (id)datePropertyForKey:(id)a0;
- (void)incrementIntegerPropertyForKey:(id)a0;
- (id)addMetricSamplerForName:(id)a0 withTimeInterval:(double)a1 block:(id /* block */)a2;
- (id)eventDictForEventName:(id)a0 withAttributes:(id)a1 eventClass:(long long)a2 timestampBucket:(double)a3;
- (void)dailyCoreAnalyticsMetrics:(id)a0;
- (id)existingMetricSamplerForName:(id)a0;
- (void)loadCollectionConfiguration;
- (id)coreAnalyticsKeyFilter:(id)a0;
- (void)logSuccessForEventNamed:(id)a0;
- (void)logHardFailureForEventNamed:(id)a0 withAttributes:(id)a1 timestampBucket:(unsigned int)a2;
- (id)AddMultiSamplerForName:(id)a0 withTimeInterval:(double)a1 block:(id /* block */)a2;
- (id)logSystemMetricsForActivityNamed:(id)a0 withAction:(id /* block */)a1;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2 withAttributes:(id)a3 timestampBucket:(unsigned int)a4;
- (id)dataPropertyForKey:(id)a0;
- (void)logRockwellFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)removeStateAndUnlinkFile:(BOOL)a0;
- (void)noteLaunchSequence:(id)a0;
- (void).cxx_destruct;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2 timestampBucket:(unsigned int)a3;
- (void)addMetricsHook:(id /* block */)a0;
- (void)drainLogQueue;

@end
