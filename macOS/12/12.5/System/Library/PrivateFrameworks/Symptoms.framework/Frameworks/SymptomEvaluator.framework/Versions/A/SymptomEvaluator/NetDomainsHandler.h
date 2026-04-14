@class NSString, AnalyticsWorkspace, NSMutableDictionary, ImpoExpoService, NSMutableSet, NSObject, ObjectAnalytics, NSNotificationCenter, SFCache;
@protocol OS_dispatch_queue;

@interface NetDomainsHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {
    NSNotificationCenter *_notificationCenter;
    BOOL _observingSystemSettingsRelay;
    BOOL _observingConsoleUser;
    id _engineReadyObserver;
    AnalyticsWorkspace *_workspace;
    ImpoExpoService *_ieService;
    ObjectAnalytics *trackerDomainSpace;
    unsigned long long _adminState;
    BOOL _okToTriggerAutoBugCapture;
    NSMutableSet *_previouslyAcceptedAppleAppCases;
    BOOL _defaultSwitchState;
    BOOL _hasSomeUserEnabled;
    NSMutableDictionary *_userIDsSwitchStates;
    BOOL _defaultReconciliationSwitchState;
    BOOL _hasCurrentUserReconciliationEnabled;
    NSMutableDictionary *_userIDsReconciliationSwitchStates;
    SFCache *_bundleIdentifierCache;
    unsigned long long _symptomCombinationTypeCounts[6];
    unsigned long long _dnsSymptomWithDomainCount;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (int)configureInstance:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (BOOL)noteSymptom:(id)a0;
- (void)_resetSymptomCombinationBreakdown;
- (void)_resetSymptomDomainStatistics;
- (void)_completeInitialization;
- (void)performPeriodicTasks;
- (id)retrievePreferencesDictionaryWithKey:(struct __CFString { } *)a0;
- (void)savePreferencesDictionary:(id)a0 withKey:(struct __CFString { } *)a1;
- (BOOL)_hasSomeUserEnabled;
- (void)logSwitchStatesFromDictionary:(id)a0;
- (void)_postSwitchStateNotificationForName:(id)a0;
- (void)_processEngineReadyNotification:(id)a0;
- (void)_sendInternalSymptomDNSResolvingEnable:(BOOL)a0;
- (void)updateReconciliationSwitchStatesForUser:(unsigned int)a0;
- (void)_administrativeEnable;
- (void)_administrativeDisable;
- (void)_firstUserEnabling;
- (void)_lastEnabledUserDisabling;
- (BOOL)_currentSwitchStateForUser:(unsigned int)a0 since:(id *)a1;
- (void)setSwitchState:(BOOL)a0 forUser:(unsigned int)a1;
- (BOOL)_currentReconciliationSwitchStateForUser:(unsigned int)a0 since:(id *)a1;
- (void)setReconciliationSwitchState:(BOOL)a0 forUser:(unsigned int)a1;
- (id)_internalStateDictionary;
- (void)_submitSymptomCombinationBreakdown;
- (void)_submitSymptomDomainStatistics;
- (BOOL)bundleNameImplies1stOr2ndParty:(id)a0;
- (BOOL)triggerAutoBugCaptureCaseForType:(id)a0 subType:(id)a1 privateSubtypeContext:(id)a2 detectedProcess:(id)a3 events:(id)a4 thresholdValuesString:(id)a5;
- (BOOL)_convertNSData:(id)a0 toAuditToken:(struct { unsigned int x0[8]; } *)a1;
- (id)_bundleNameFromAuditTokenData:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 orMachOUUID:(id)a2;
- (void)_postNotificationForResolutionBy:(unsigned int)a0 bundleIdentifier:(id)a1 forDomain:(id)a2 endpoints:(id)a3;
- (id)initTestInstance;
- (BOOL)getReconciliationStateForUser:(unsigned int)a0;
- (BOOL)hasCurrentUserReconciliationEnabled;
- (id)setNetworkDomainsOptions:(id)a0 service:(id)a1 connection:(id)a2;
- (id)getNetworkDomainsOptions:(id)a0 service:(id)a1 connection:(id)a2;
- (void)_submitAppTrackingEnabled;
- (void)checkForAutoBugCaptureWorthyCase:(id)a0 domainName:(id)a1 initiatedType:(unsigned int)a2;
- (void)privacyReset;

@end
