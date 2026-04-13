@class SUMacControllerClient, NSString, NSData, SUMacControllerOverrides, NSNumber;

@interface SUOSUMobileSoftwareUpdateController : NSObject <SUMacControllerDelegate>

@property (retain) SUMacControllerClient *msuControllerClient;
@property (retain) SUMacControllerOverrides *overrides;
@property (nonatomic) BOOL restrictToFullReplacements;
@property (retain) NSData *clientExternalizedLocalAuthenticationContext;
@property (retain) NSNumber *contextUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithID:(id)a0;
- (void)downloadAndPrepareUpdate:(id)a0 inBackground:(BOOL)a1 withProgressCompletion:(id /* block */)a2 withCompletion:(id /* block */)a3;
- (void)scanForUpdatesInBackgroud:(BOOL)a0 getMinor:(BOOL)a1 getMajor:(BOOL)a2 mdmInitiated:(BOOL)a3 requestedProductMarketingVersion:(id)a4 withCompletion:(id /* block */)a5;
- (void)downloadAndPrepareDescriptor:(id)a0 inBackground:(BOOL)a1 mdmInitiated:(BOOL)a2 withProgressCompletion:(id /* block */)a3 withCompletion:(id /* block */)a4;
- (void)cancelUpdatesWithCompletion:(id /* block */)a0;
- (void)applyUpdateWithDescriptor:(id)a0 withOverrides:(id)a1 withCompletion:(id /* block */)a2;
- (void)applyUpdateWithDescriptor:(id)a0 withCompletion:(id /* block */)a1;
- (void)updateDownloadedAndPreparedWithCompletion:(id /* block */)a0;
- (void)updateDownloadOrPrepareInProgressWithCompletion:(id /* block */)a0;
- (void)commitStashForDescriptor:(id)a0 withOverrides:(id)a1 withProgressCompletion:(id /* block */)a2 withCompletion:(id /* block */)a3;
- (void)commitStashCommitOnlyForDescriptor:(id)a0 withProgressCompletion:(id /* block */)a1 withCompletion:(id /* block */)a2;
- (void)createAndPersistStashForDescriptor:(id)a0 withProgressCompletion:(id /* block */)a1 withCompletion:(id /* block */)a2;
- (void)_updatePriorityInBackground:(BOOL)a0;
- (void)updateOverridesInBackground:(BOOL)a0 mdmInitiated:(BOOL)a1;
- (void)SUMacControllerDelegateConnectionClosed;
- (void)SUMacControllerDelegateReady;
- (void)applyUpdate:(id)a0 withCompletion:(id /* block */)a1;
- (void)currentStateWithCompletion:(id /* block */)a0;

@end
