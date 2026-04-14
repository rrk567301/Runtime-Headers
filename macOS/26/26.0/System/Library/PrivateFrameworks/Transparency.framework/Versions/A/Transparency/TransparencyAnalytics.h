@class SFAnalytics, NSHashTable;

@interface TransparencyAnalytics : NSObject

@property (retain) NSHashTable *nfsObserver;
@property int token;
@property (retain) SFAnalytics *sfanalytics;

+ (id)logger;
+ (id)errorChain:(id)a0 depth:(unsigned long long)a1;
+ (id)formatEventName:(id)a0 application:(id)a1;
+ (void)unsetGlobalLogger;
+ (unsigned long long)doKTResultWithAnalyticsForEventName:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (id)analyticsErrorData:(id)a0;
+ (id)privacyURI:(id)a0;
+ (unsigned long long)doKTResultWithAnalyticsForEventName:(id)a0 validateType:(unsigned long long)a1 error:(id *)a2 block:(id /* block */)a3;
+ (BOOL)doWithAnalyticsForEventName:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (id)analyticsApplications;
+ (BOOL)hasInternalDiagnostics;

- (void)setMetricsAccountID:(id)a0;
- (void)addNFSReporting:(id)a0;
- (id)failureKey:(id)a0;
- (void)logRockwellForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)noteEventNamed:(id)a0;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2 withAttributes:(id)a3;
- (id)dailyMetrics;
- (void)dealloc;
- (void)setNumberProperty:(id)a0 forKey:(id)a1;
- (void)setSuccessNowForPropertyKey:(id)a0;
- (void)logHardFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (id)numberPropertyForKey:(id)a0;
- (void)setDateProperty:(id)a0 forKey:(id)a1;
- (void)logMetric:(id)a0 withName:(id)a1;
- (void)updateCollectionConfigurationWithData:(id)a0;
- (void)removeMultiSamplerForName:(id)a0;
- (void)logSoftFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2;
- (void)setupCollection;
- (id)init;
- (id)datePropertyForKey:(id)a0;
- (void)addMultiSamplerForName:(id)a0 withTimeInterval:(double)a1 block:(id /* block */)a2;
- (void)incrementIntegerPropertyForKey:(id)a0;
- (id)nfsReporting;
- (id)fuzzyTimeSinceDateKey:(id)a0;
- (void)loadCollectionConfiguration;
- (BOOL)skipLogResult:(id)a0;
- (void)addUserInfoAttributes:(id)a0 error:(id)a1;
- (void)logSuccessForEventNamed:(id)a0;
- (id)fuzzyTimeSinceLastSuccess:(id)a0;
- (void)setCKManateeState:(int)a0;
- (void)setFailureNowForPropertyKey:(id)a0;
- (void)noteLaunchSequence:(id)a0;
- (unsigned int)manateeStatusForReporting;
- (void).cxx_destruct;
- (id)ckManateeState;

@end
