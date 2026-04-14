@class NSMutableDictionary, NSDictionary, NSString, NSError;

@interface STYUserScenarioCache : NSObject

@property (retain) NSMutableDictionary *scenarioObjects;
@property (retain) NSDictionary *bundleIdForAppName;
@property (retain) NSString *hwModel;
@property (retain) NSError *badConfigError;
@property (retain) NSError *bundledIdLookupFailedrror;
@property (retain) NSDictionary *responsivenessConfigForWhitelistedSubsystems;
@property (retain) NSDictionary *responsivenessConfigForWhitelistedCategories;
@property (retain) NSDictionary *responsivenessConfigForWhitelistedNames;
@property (retain) NSDictionary *animationConfigForWhitelistedSubsystems;
@property (retain) NSDictionary *animationConfigForWhitelistedCategories;
@property (retain) NSDictionary *animationConfigForWhitelistedNames;
@property (retain) NSMutableDictionary *lifecycleScenarios;
@property (retain) NSMutableDictionary *scenarioTitles;

+ (id)sharedCache;
+ (id)internalResourceBundle;

- (BOOL)isResponsivenessScenarioWhitelisted:(id)a0 error:(id *)a1;
- (id)initWithPlatform:(id)a0;
- (float)latencyGoalsForSignpostInterval:(id)a0;
- (id)issueCategoryForSignpostInterval:(id)a0;
- (id)scenarioForFrontboardLaunchWatchdog:(id)a0;
- (id)scenarioIdForSignpostInterval:(id)a0;
- (id)bundleIdForProcessName:(id)a0;
- (float)latencyGoalsForLifecycleScenario:(id)a0 wakeSubtype:(id)a1;
- (id)processBundleIdForSignpostInterval:(id)a0;
- (BOOL)setupWhitelistedResponsivenessScenarios:(id)a0 bundles:(id)a1;
- (void)setupBundleIdWhitelists:(id)a0 bundles:(id)a1;
- (float)framerateGoalsForSignpostInterval:(id)a0;
- (id)loadWhitelist:(id)a0 platform:(id)a1 bundles:(id)a2;
- (BOOL)scenarioWhitelisted:(id)a0 error:(id *)a1;
- (id)scenarioFromSignpostEvent:(id)a0 error:(id *)a1;
- (int)processIdForSignpostEvent:(id)a0;
- (BOOL)setupWhitelistedAnimationScenarios:(id)a0 bundles:(id)a1;
- (id)scenarioGroupForSignpostInterval:(id)a0;
- (id)scenarioIdForSignpostEmittedEvent:(id)a0;
- (BOOL)processWhitelisted:(id)a0 error:(id *)a1;
- (BOOL)setupWhitelistedScenarios:(id)a0 bundles:(id)a1;
- (id)wakeScenario:(id)a0 subType:(id)a1 error:(id *)a2;
- (BOOL)isAnimationScenarioWhitelisted:(id)a0 error:(id *)a1;
- (BOOL)setupScenarioTitles:(id)a0 bundles:(id)a1;
- (float)latencyThresholdForLifecycleScenario:(id)a0 wakeSubtype:(id)a1;
- (id)appNameFromBundleId:(id)a0;
- (id)scenarioFromSignpostInterval:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)kpiIsLatency:(id)a0;
- (id)lifecyleScenarioWithScenarioId:(id)a0 error:(id *)a1;

@end
