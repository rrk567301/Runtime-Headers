@class SUMacControllerClient, NSString, NSMutableDictionary, NSData, NSNumber;

@interface SUOSUMobileSoftwareUpdateController : NSObject <SUMacControllerDelegate>

@property (readonly) SUMacControllerClient *msuControllerClient;
@property (retain) NSMutableDictionary *additionalUpdateMetricEventFields;
@property (nonatomic) char restrictToFullReplacements;
@property (retain) NSString *clientID;
@property (retain) NSData *clientExternalizedLocalAuthenticationContext;
@property (retain) NSNumber *contextUserID;
@property (retain) NSString *mdmBootstrapToken;
@property char usesSplatComboUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithID:(id)a0;
- (void)SUMacControllerDelegateConnectionClosed;
- (void)SUMacControllerDelegateReady;
- (void)_configureOverridesForOptionalPSUSDownload:(id)a0 forDescriptor:(id)a1;
- (void)_ignoreMDMDelayPeriodForValidBuildVersionWithUpdateBuildVersion:(id)a0 overrides:(id)a1;
- (char)_nonFatalScanError:(id)a0;
- (id)_overridesWithIsBackground:(char)a0 mdmInitiated:(char)a1;
- (id)_requiredTelemetryOverrides;
- (char)_shouldIgnoreDescriptorFromScan:(id)a0 withOptions:(id)a1;
- (char)_shouldReportDDMError:(id)a0;
- (void)_updatePriorityInBackground:(char)a0;
- (void)appendTelemetryOverridesWithMetrics:(id)a0;
- (void)applyUpdateWithDescriptor:(id)a0 withCompletion:(id /* block */)a1;
- (void)applyUpdateWithDescriptor:(id)a0 withOverrides:(id)a1 withCompletion:(id /* block */)a2;
- (void)baseOSDocumentationWithCompletion:(id /* block */)a0;
- (void)cancelUpdatesWithCompletion:(id /* block */)a0;
- (void)commitStashCommitOnlyForDescriptor:(id)a0 withProgressCompletion:(id /* block */)a1 withCompletion:(id /* block */)a2;
- (void)commitStashForDescriptor:(id)a0 withOverrides:(id)a1 withProgressCompletion:(id /* block */)a2 withCompletion:(id /* block */)a3;
- (void)createAndPersistStashForDescriptor:(id)a0 withProgressCompletion:(id /* block */)a1 withCompletion:(id /* block */)a2;
- (void)downloadAndPrepareDescriptor:(id)a0 inBackground:(char)a1 mdmInitiated:(char)a2 withProgressCompletion:(id /* block */)a3 withCompletion:(id /* block */)a4;
- (void)downloadAndPrepareUpdate:(id)a0 inBackground:(char)a1 withProgressCompletion:(id /* block */)a2 withCompletion:(id /* block */)a3;
- (void)performSemiSplatForDescriptor:(id)a0 withCompletion:(id /* block */)a1;
- (void)performingSemiSplatWithCompletion:(id /* block */)a0;
- (void)queryCurrentStateWithCompletion:(id /* block */)a0;
- (void)rollbackSplatUpdateWithCompletion:(id /* block */)a0;
- (void)scanForUpdatesWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)splatDocumentationWithCompletion:(id /* block */)a0;
- (void)updateAppliedWithCompletion:(id /* block */)a0;
- (void)updateDownloadOrPrepareInProgressWithCompletion:(id /* block */)a0;
- (void)updateDownloadStateWithCompletion:(id /* block */)a0;
- (void)updateDownloadedAndPreparedWithCompletion:(id /* block */)a0;
- (void)updateTelemetryOverridesWithMetrics:(id)a0;

@end
