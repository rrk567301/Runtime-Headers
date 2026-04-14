@class CKUpdateControllerClient, NSMutableDictionary;

@interface CKUpdateController : CKServiceInterface

@property BOOL shouldNotAttemptInstallationAfterFailureDialog;
@property (retain, nonatomic) NSMutableDictionary *availableUpdatesObservers;
@property (retain, nonatomic) NSMutableDictionary *updateScanObservers;
@property (retain, nonatomic) NSMutableDictionary *updateProgressObservers;
@property (retain, nonatomic) CKUpdateControllerClient *sharedObserver;
@property (copy) id /* block */ dialogHandler;

+ (id)sharedUpdateController;

- (id)init;
- (void).cxx_destruct;
- (id)availableUpdates;
- (id)initWithStoreClient:(id)a0;
- (void)connectionWasInterrupted;
- (id)availableUpdateWithItemIdentifier:(unsigned long long)a0;
- (id)incompatibleUpdates;
- (unsigned long long)availableUpdatesBadgeCount;
- (id)addAvailableUpdatesObserverWithBlock:(id /* block */)a0;
- (void)removeAvailableUpdatesObserver:(id)a0;
- (void)checkForUpdatesWithUserHasSeenUpdates:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_checkForBookUpdatesWithCompletionHandler:(id /* block */)a0;
- (void)startAppUpdates:(id)a0 andOSUpdates:(id)a1 withDelegate:(id)a2 completionHandler:(id /* block */)a3;
- (void)installAllAvailableUpdates;
- (id)appUpdatesToBeInstalledLater;
- (void)removeUpdateFromInstallLaterWithBundleID:(id)a0;
- (BOOL)_otherUsersAreLoggedIn;
- (BOOL)osUpdateScanInProgress;
- (id)observeOSUpdateScansWithProgressHandler:(id /* block */)a0;
- (void)stopObservingOSUpdateScansWithCallback:(id)a0;
- (id)observeOSUpdateProgressWithProgressHandler:(id /* block */)a0;
- (void)stopObservingOSUpdateProgressWithCallback:(id)a0;
- (BOOL)isAutoUpdatedEnabled;

@end
