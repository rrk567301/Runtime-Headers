@class ArbitratorExpertSystemState, NSArray, SystemSettingsRelay, AnalyticsWorkspace, DiagnosticCaseUsageAnalytics, NSDictionary;

@interface ArbitratorExpertSystemHandler : ExpertSystemHandlerCore {
    ArbitratorExpertSystemState *currentState;
    NSArray *states;
    id flowAnalyticsObserver;
    SystemSettingsRelay *settingsRelay;
    unsigned int administrativeState;
    AnalyticsWorkspace *arbitratorWorkspace;
    DiagnosticCaseUsageAnalytics *caseUsageSpace;
    NSDictionary *processToLengthLogCollectionMap;
    BOOL _initializationComplete;
}

@property unsigned long long externalStepper;

+ (id)sharedInstance;
+ (id)internalStateDictionary;
+ (void)resetAllForCustomerBuilds;
+ (id)configureClass:(id)a0;
+ (void)setInitializeAsHelper:(BOOL)a0;
+ (BOOL)disableResourceNotifyDampening;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)resetAll;
- (long long)_removeAllDiagnosticCaseUsageFor:(id)a0;
- (void)resetDiagnosticCaseUsage;
- (id)internalStateDictionary;
- (BOOL)noteSymptom:(id)a0;
- (void)_dumpState;
- (void)_administrativeEnable;
- (void)_administrativeDisable;
- (BOOL)_initializeWorkspace;
- (void)_scheduleMaintenanceActivity;
- (void)_completeInitialization:(BOOL)a0;
- (BOOL)_arbitratorReady;
- (void)handleAssertionExceptionTriggerWithEvent:(id)a0 signatureSubType:(id)a1;
- (void)handleResourceNotifyOfType:(unsigned long long)a0 event:(id)a1;
- (BOOL)shouldGenerateReportForSignature:(id)a0 trigger:(unsigned long long)a1;
- (void)recordReportForSignature:(id)a0 aggregateReport:(id)a1 specificReport:(id)a2;
- (void)triggerABCSnapshotWithSignature:(id)a0 events:(id)a1 uuid:(id)a2 parameters:(id)a3;
- (id)setupParametersForDESysLogFilterProcess:(id)a0;
- (id)setupProcessNameForDESysLogFilterProcess:(id)a0;
- (void)_purgeDiagnosticCaseUsage;
- (id)_reportRecordKeyForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (id)_retrieveReportRecordForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (void)_addReportRecordWithKey:(id)a0 count:(long long)a1 lastSeen:(double)a2;
- (void)_saveReportRecord:(id)a0;
- (void)_removeReportRecordForKey:(id)a0;
- (void)_removeAllReportRecords;

@end
