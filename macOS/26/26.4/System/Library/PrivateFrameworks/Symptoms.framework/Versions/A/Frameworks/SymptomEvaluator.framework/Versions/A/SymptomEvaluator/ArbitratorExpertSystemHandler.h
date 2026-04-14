@class ArbitratorExpertSystemState, NSArray, SystemSettingsRelay, AnalyticsWorkspace;

@interface ArbitratorExpertSystemHandler : ExpertSystemHandlerCore {
    ArbitratorExpertSystemState *currentState;
    NSArray *states;
    id flowAnalyticsObserver;
    SystemSettingsRelay *settingsRelay;
    unsigned int administrativeState;
    AnalyticsWorkspace *arbitratorWorkspace;
    BOOL _initializationComplete;
}

@property unsigned long long externalStepper;

+ (id)sharedInstance;
+ (BOOL)disableResourceNotifyDampening;
+ (void)setInitializeAsHelper:(BOOL)a0;
+ (id)configureClass:(id)a0;
+ (id)internalStateDictionary;

- (void)_administrativeEnable;
- (void)_saveReportRecord:(id)a0;
- (void)_completeInitialization:(BOOL)a0;
- (void)_removeReportRecordForKey:(id)a0;
- (void)handleResourceNotifyOfType:(unsigned long long)a0 event:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_reportRecordKeyForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (BOOL)_arbitratorReady;
- (BOOL)_initializeWorkspace;
- (BOOL)noteSymptom:(id)a0;
- (void)_administrativeDisable;
- (id)_retrieveReportRecordForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (void)handleAssertionExceptionTriggerWithEvent:(id)a0 signatureSubType:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldGenerateReportForSignature:(id)a0 trigger:(unsigned long long)a1;
- (id)init;
- (id)setupParametersForDESysLogFilterProcess:(id)a0;
- (void)triggerABCSnapshotWithSignature:(id)a0 events:(id)a1 uuid:(id)a2 parameters:(id)a3;
- (id)setupProcessNameForDESysLogFilterProcess:(id)a0;
- (void)_dumpState;
- (void)_removeAllReportRecords;
- (void)_addReportRecordWithKey:(id)a0 count:(long long)a1 lastSeen:(double)a2;
- (void)dealloc;
- (id)internalStateDictionary;
- (void)recordReportForSignature:(id)a0 aggregateReport:(id)a1 specificReport:(id)a2;

@end
