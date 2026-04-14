@class NSSet, NSDictionary, NSMutableDictionary, NSString, NSObject;
@protocol OS_os_log;

@interface CSRestrictionDataProvider : NSObject <CSRestrictionDataProviding>

@property (retain) NSObject<OS_os_log> *logger;
@property (retain) NSSet *processes;
@property (retain) NSDictionary *processPolicies;
@property (retain) NSSet *band95Processes;
@property (retain) NSSet *band80Processes;
@property (retain) NSDictionary *scenariosMap;
@property (retain) NSDictionary *scenarios;
@property (retain) NSMutableDictionary *restrictionsByProcessForScenario;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_bandRestrictionsSetForThreshold:(int)a0 withErrors:(id)a1;
- (id)_buildScenariosMap;
- (BOOL)_isAKnownScenario:(id)a0;
- (id)_processesPoliciesDictWithErrors:(id)a0;
- (id)_processesSetWithErrors:(id)a0;
- (id)_scenariosDictWithErrors:(id)a0;
- (void)_templatesByProcessWithErrors:(id)a0;
- (id)_templatesByScenarioForProcess:(id)a0 errors:(id)a1;
- (id)band80ProcessesSet;
- (id)band95ProcessesSet;
- (id)configureRestrictionsFromTemplateDictionary:(id)a0 errors:(id)a1;
- (void)loadAllRestrictionsData;
- (id)processPolicyDict;
- (id)processesSet;
- (id)restrictionsByProcessPerScenario;
- (id)scenariosDictionary;

@end
