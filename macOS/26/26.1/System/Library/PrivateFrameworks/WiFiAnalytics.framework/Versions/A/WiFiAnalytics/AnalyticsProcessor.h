@class NSDate, AnalyticsStoreMOHandler, LinkChangePolicyHandler, NSString, WAPersistentContainer, NSMutableArray, UsagePoliciesHandler, RoamPolicyStore, NSDateFormatter, DeploymentMetricHandler;

@interface AnalyticsProcessor : NSObject

@property (retain, nonatomic) WAPersistentContainer *persistentContainer;
@property (retain, nonatomic) AnalyticsStoreMOHandler *managedObjectHandler;
@property (retain, nonatomic) LinkChangePolicyHandler *linkChangePolicyHandler;
@property (retain, nonatomic) RoamPolicyStore *roamPolicyHandler;
@property (retain, nonatomic) DeploymentMetricHandler *deploymentMetricHandler;
@property (retain, nonatomic) UsagePoliciesHandler *usagePoliciesHandler;
@property (nonatomic) unsigned long long testDateDiffDays;
@property (nonatomic) unsigned long long deploymentMetricDiffDays;
@property (retain, nonatomic) NSDateFormatter *dateFormatterWAMessage;
@property (nonatomic) unsigned long long numRoamSamples;
@property (retain, nonatomic) NSString *bssidForCachedFaults;
@property (retain, nonatomic) NSMutableArray *cachedFaults;
@property (retain, nonatomic) NSDate *defaultQueryFrom;
@property (retain, nonatomic) NSDate *refDate;

+ (id)analyticsProcessorWithPersistentContainer:(id)a0;

- (void)performPruneBasedOnStoreSizeAndSaveWithReason:(id)a0;
- (BOOL)geoTagEventOnBssid:(id)a0 ssid:(id)a1 lat:(double)a2 lon:(double)a3 at:(id)a4 andResetMoc:(BOOL)a5 andRunPostProcessing:(BOOL)a6;
- (BOOL)processDeferredPriorityPoliciesWithReason:(id)a0;
- (void)processMetricWiFiStats:(id)a0;
- (BOOL)classifyTraitsForNetwork:(id)a0 withReason:(id)a1;
- (BOOL)joinEventOnBssid:(id)a0 ssid:(id)a1 at:(id)a2 with:(id /* block */)a3 andResetMoc:(BOOL)a4 andRunPostProcessing:(BOOL)a5;
- (unsigned long long)performPruneTestEntity:(id)a0 since:(id)a1 withPredicate:(id)a2 withError:(id *)a3;
- (BOOL)diagnosticEventAt:(id)a0 with:(id /* block */)a1 andResetMoc:(BOOL)a2;
- (void)resetPolicyHandlersConfig;
- (BOOL)updateRoamPoliciesForSourceBss:(id)a0 andRoam:(id)a1 withReason:(id)a2 withError:(id *)a3;
- (BOOL)removeKnownNetworkEvent:(id)a0 at:(id)a1 andResetMoc:(BOOL)a2;
- (unsigned long long)performPruneTestBSSes:(id)a0 withError:(id *)a1;
- (BOOL)updateBSS:(id)a0 withParsedBeacon:(id)a1 andResetMoc:(BOOL)a2;
- (void)processDatapathMetricStream:(id)a0 withDate:(id)a1;
- (BOOL)lqmEvent:(id)a0 on:(id)a1 at:(id)a2;
- (BOOL)canRunPoliciesOnCurrentProcess;
- (BOOL)recoveryEventOnBssid:(id)a0 at:(id)a1 with:(id /* block */)a2 andResetMoc:(BOOL)a3;
- (void)setPolicyHandlersConfig:(struct { long long x0; long long x1; long long x2; })a0;
- (BOOL)updateUsagePoliciesWithReason:(id)a0;
- (id)fetchBSSesLastSeenAfterLastPolicyRunFor:(id)a0 withError:(id *)a1;
- (id)initWithPersistentContainer:(id)a0;
- (BOOL)poorCoverageAnalysisWithReason:(id)a0;
- (void)networkDeploymentMetricCheckAndSubmit:(id)a0 withReason:(id)a1;
- (BOOL)updateRoamPoliciesForSourceBss:(id)a0 andRoam:(id)a1 withReason:(id)a2;
- (struct { long long x0; long long x1; long long x2; })getPolicyHandlersConfig;
- (BOOL)updateRoamPoliciesForSourceBssid:(id)a0 andUpdateRoamCache:(BOOL)a1;
- (BOOL)updateRoamPoliciesForSourceBssAndRoamWithReason:(id)a0 withError:(id *)a1;
- (BOOL)classifyTraitsForNetworksWithReason:(id)a0;
- (void)storeMetricStreamFragment:(id)a0 withDate:(id)a1;
- (BOOL)updateNetwork:(id)a0 withDeploymentCoverage:(short)a1 andResetMoc:(BOOL)a2;
- (BOOL)networkDeploymentMetricCheckAndSubmitWithReason:(id)a0;
- (BOOL)faultEventOn:(id)a0 at:(id)a1 with:(id /* block */)a2 andDeferSave:(BOOL)a3 andResetMoc:(BOOL)a4;
- (BOOL)faultEventOn:(id)a0 at:(id)a1 type:(id)a2 interface:(id)a3 andResetMoc:(BOOL)a4;
- (BOOL)updateRoamPoliciesForSourceBss:(id)a0 andRoam:(id)a1 withReason:(id)a2 andRefDate:(id)a3 withError:(id *)a4;
- (BOOL)leaveEventOnBssid:(id)a0 ssid:(id)a1 at:(id)a2 with:(id /* block */)a3 andResetMoc:(BOOL)a4 andRunPostProcessing:(BOOL)a5;
- (BOOL)processCachedFaultsAndResetCache:(id)a0 andResetMoc:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)linkTestEventOn:(id)a0 at:(id)a1 with:(id /* block */)a2 andResetMoc:(BOOL)a3;
- (BOOL)dhcpEventOnBssid:(id)a0 ssid:(id)a1 serverInfo:(id)a2 at:(id)a3 with:(id /* block */)a4 andResetMoc:(BOOL)a5;
- (BOOL)scanResultEventWith:(id)a0 ssid:(id)a1 whileOn:(id)a2 at:(id)a3 with:(id /* block */)a4 andResetMoc:(BOOL)a5;
- (BOOL)ageOutAnalyticsWithError:(id *)a0 withReason:(id)a1;
- (BOOL)processDeferredPoliciesWithReason:(id)a0;
- (BOOL)lqmEvent:(id)a0 on:(id)a1 at:(id)a2 andReset:(BOOL)a3;
- (BOOL)managedObjectContextSaveThenReset:(BOOL)a0 withError:(id *)a1;
- (unsigned long long)performPrunePoliciesWithReasons:(id)a0 withError:(id *)a1;
- (void)signalPotentialNewIORChannels;
- (BOOL)initPolicyHandlers;
- (void)_processMetricWiFiStats:(id)a0;
- (BOOL)roamEvent:(id)a0 at:(id)a1 andResetMoc:(BOOL)a2 andRunPostProcessing:(BOOL)a3 withError:(id *)a4;
- (BOOL)updateNetwork:(id)a0 switchedFrom:(id)a1 at:(id)a2 andResetMoc:(BOOL)a3;
- (id)updateRoamPoliciesAndSummarizeAnalyticsForNetwork:(id)a0 maxAgeInDays:(unsigned long long)a1;

@end
