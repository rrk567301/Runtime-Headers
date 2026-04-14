@class SFAnalytics, NSHashTable;

@interface TransparencyAnalytics : NSObject

@property (retain) NSHashTable *nfsObserver;
@property int token;
@property (retain) SFAnalytics *sfanalytics;

+ (BOOL)doWithAnalyticsForEventName:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (BOOL)hasInternalDiagnostics;
+ (void)unsetGlobalLogger;
+ (id)analyticsErrorData:(id)a0;
+ (id)logger;
+ (unsigned long long)doKTResultWithAnalyticsForEventName:(id)a0 validateType:(unsigned long long)a1 error:(id *)a2 block:(id /* block */)a3;
+ (id)analyticsApplications;
+ (unsigned long long)doKTResultWithAnalyticsForEventName:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (id)doSuppressMetrics:(id)a0;
+ (id)errorChain:(id)a0 depth:(unsigned long long)a1;
+ (id)formatEventName:(id)a0 application:(id)a1;
+ (id)privacyURI:(id)a0;

- (void)setSuccessNowForPropertyKey:(id)a0;
- (id)dailyMetrics;
- (void)setupCollection;
- (void)loadCollectionConfiguration;
- (id)fuzzyTimeSinceDateKey:(id)a0;
- (void)logRockwellFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (unsigned int)manateeStatusForReporting;
- (id)fuzzyTimeSinceLastSuccess:(id)a0;
- (id)datePropertyForKey:(id)a0;
- (void)setNumberProperty:(id)a0 forKey:(id)a1;
- (void)logSuccessForEventNamed:(id)a0;
- (void)setDateProperty:(id)a0 forKey:(id)a1;
- (void)incrementIntegerPropertyForKey:(id)a0;
- (id)numberPropertyForKey:(id)a0;
- (void)logMetric:(id)a0 withName:(id)a1;
- (void)setFailureNowForPropertyKey:(id)a0;
- (void)addNFSReporting:(id)a0;
- (BOOL)skipLogResult:(id)a0;
- (void)noteLaunchSequence:(id)a0;
- (id)nfsReporting;
- (void)logSoftFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)removeMultiSamplerForName:(id)a0;
- (void)updateCollectionConfigurationWithData:(id)a0;
- (void).cxx_destruct;
- (void)noteEventNamed:(id)a0;
- (id)ckManateeState;
- (void)addUserInfoAttributes:(id)a0 error:(id)a1;
- (id)init;
- (void)setMetricsAccountID:(id)a0;
- (void)addMultiSamplerForName:(id)a0 withTimeInterval:(double)a1 block:(id /* block */)a2;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2 withAttributes:(id)a3;
- (void)setCKManateeState:(int)a0;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2;
- (void)logHardFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)dealloc;
- (id)failureKey:(id)a0;

@end
