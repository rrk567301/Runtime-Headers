@class NSString, CSProcessManager, NSSet, NSMutableDictionary, NSDictionary, NSMutableSet, NSObject, CSScenarioManager;
@protocol OS_os_log, CSRestrictionDataProviding, CSRestriction;

@interface CSRestrictionManager : NSObject <CSScenarioChangesObserving, CSProcessesChangesObserving>

@property (retain) NSObject<OS_os_log> *logger;
@property (retain) id<CSRestrictionDataProviding> dataProvider;
@property (retain) CSScenarioManager *scenarioManager;
@property (retain) CSProcessManager *processManager;
@property (retain) NSDictionary *restrictionsByProcessPerScenario;
@property (retain) NSMutableDictionary *processesAffectedByScenarioMap;
@property (retain) NSMutableDictionary *currentRestrictionsByProcess;
@property (retain) NSSet *currentActiveScenarios;
@property (retain) NSMutableSet *monitors;
@property (retain) id<CSRestriction> defaultRestriction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanceWithDataProvider:(id)a0;

- (void).cxx_destruct;
- (id)_initWithDataProvider:(id)a0;
- (BOOL)applyDefaultRestrictionsToProcess:(id)a0;
- (BOOL)applyRestrictionsToProcess:(id)a0 forScenario:(id)a1;
- (void)currentActiveScenarios:(id)a0 previousActiveScenarios:(id)a1;
- (id)determineScenarioForProcess:(id)a0;
- (void)observeNewRunningProcesses:(id)a0;
- (void)observeProcessChanges;
- (void)populateScenarios;
- (void)queueChangeForActivatedScenarios:(id)a0 deactivatedScenarios:(id)a1;
- (void)traverseRestrictionsData;

@end
