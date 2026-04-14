@class ArbitratorExpertSystemState, NSArray, SystemSettingsRelay, AnalyticsWorkspace, DiagnosticCaseUsageAnalytics, NSDictionary;

@interface ArbitratorExpertSystemHandler : ExpertSystemHandlerCore {
    ArbitratorExpertSystemState *currentState;
    NSArray *states;
    id flowAnalyticsObserver;
    SystemSettingsRelay *settingsRelay;
    unsigned int administrativeState;
    AnalyticsWorkspace *arbitratorWorkspace;
    DiagnosticCaseUsageAnalytics *caseUsageSpace;
    NSDictionary *processToProcessesLogCollectionMap;
    NSDictionary *processToLengthLogCollectionMap;
    BOOL _initializationComplete;
}

@property unsigned long long externalStepper;

+ (id)sharedInstance;
+ (id)internalStateDictionary;
+ (void)resetAllForCustomerBuilds;
+ (id)configureClass:(id)a0;
+ (BOOL)disableResourceNotifyDampening;
+ (void)setInitializeAsHelper:(BOOL)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)resetAll;
- (void)resetDiagnosticCaseUsage;
- (id)internalStateDictionary;
- (long long)_removeAllDiagnosticCaseUsageFor:(id)a0;
- (void)_dumpState;
- (BOOL)noteSymptom:(id)a0;
- (void)_administrativeEnable;
- (void)_administrativeDisable;
- (void)_completeInitialization:(BOOL)a0;
- (void)_purgeDiagnosticCaseUsage;
- (BOOL)_initializeWorkspace;
- (void)_scheduleMaintenanceActivity;
- (void)handleResourceNotifyOfType:(unsigned long long)a0 event:(id)a1;
- (id)setupProcessNameForDESysLogFilterProcess:(id)a0;
- (id)setupParametersForDESysLogFilterProcess:(id)a0;
- (void)triggerABCSnapshotWithSignature:(id)a0 events:(id)a1 uuid:(id)a2 parameters:(id)a3;
- (BOOL)shouldGenerateReportForSignature:(id)a0 trigger:(unsigned long long)a1;
- (id)_retrieveReportRecordForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (void)recordReportForSignature:(id)a0 aggregateReport:(id)a1 specificReport:(id)a2;
- (void)_removeAllReportRecords;
- (void)_saveReportRecord:(id)a0;
- (id)_reportRecordKeyForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (void)_addReportRecordWithKey:(id)a0 count:(long long)a1 lastSeen:(double)a2;
- (BOOL)_arbitratorReady;
- (void)_removeReportRecordForKey:(id)a0;

@end
