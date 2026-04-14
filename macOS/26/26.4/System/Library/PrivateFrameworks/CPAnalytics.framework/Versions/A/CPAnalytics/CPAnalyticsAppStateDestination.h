@class NSArray, NSSet, NSString, NSObject, CPAnalyticsScreenManager;

@interface CPAnalyticsAppStateDestination : CPAnalyticsDashboardDestination <CPAnalyticsDynamicPropertyProvider>

@property (retain, nonatomic) NSArray *featureCounters;
@property (retain, nonatomic) NSObject *appLaunchSource;
@property (retain, nonatomic) NSArray *sessionCounters;
@property (retain, nonatomic) NSSet *appEventNames;
@property (readonly, nonatomic) CPAnalyticsScreenManager *screenManager;
@property (retain, nonatomic) NSString *launchSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidSessionEndEvent:(id)a0;

- (id)initWithConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)processEvent:(id)a0;
- (void)_sendAppSessionEventFromSourceEvent:(id)a0 payload:(id)a1;
- (void)sendDashboardErrorEventForEvent:(id)a0;
- (id)_computeSessionFeatureUsedData:(id)a0 sourceEvent:(id)a1;
- (void)sendDashboardMediaEventForEvent:(id)a0;
- (id)getDynamicProperty:(id)a0 forEventName:(id)a1 payloadForSystemPropertyExtraction:(id)a2;
- (id)_createCountersFromScreenNames:(id)a0;
- (void)updateWithConfig:(id)a0;
- (id)_validateAndParseAppEvents:(id)a0;
- (void)registerSystemProperties:(id)a0;
- (void).cxx_destruct;
- (void)_sendDashboardErrorEventIfNeededForEvent:(id)a0;
- (BOOL)shouldSendSampleWithRate:(unsigned long long)a0;
- (void)_updateDependenciesBeforeProcessingEvent:(id)a0;
- (id)allStandardProperties;
- (id)_createCountersFromConfig:(id)a0 withKey:(id)a1;
- (id)_createCountersFromAppEvents:(id)a0;
- (void)_sendFeatureCounts;
- (void)_sendDashboardMediaEventIfNeededForEvent:(id)a0;
- (void)_sendSessionFeatureUsedEvent:(id)a0;
- (void)sendDashboardScreenViewEventForEvent:(id)a0;
- (id)_computeSessionData:(id)a0;
- (void)_resetCounters;
- (void)sendDashboardAppEventForEvent:(id)a0;

@end
