@class SUPowerAssertionManager, NSArray, BridgeOSSoftwareUpdateController, NSString, IASUnifiedProgressClient, NSObject;
@protocol OS_dispatch_source;

@interface SUOSUPostLogoutInstallOperation : NSObject

@property (readonly) BridgeOSSoftwareUpdateController *bridgeController;
@property (retain) NSArray *productKeys;
@property (retain) NSArray *externalProductKeys;
@property char hasCriticalUpdates;
@property char enableFirstLoginOptimization;
@property char enableCreatingPreUpdateAPFSSnapshot;
@property (retain) SUPowerAssertionManager *powerAssertionManager;
@property char shouldApplyMobileSoftwareUpdates;
@property char shouldInstallLegacySoftwareUpdates;
@property (retain) IASUnifiedProgressClient *progressClient;
@property (retain) NSObject<OS_dispatch_source> *progressTimer;
@property char installInProgress;
@property (retain) NSString *customStatusString;
@property char enableBatteryPowerCheck;
@property char enableStashing;
@property char shouldShutDownWhenComplete;
@property char cancelled;
@property (readonly) char hasProductsToInstall;
@property char opportunistic;
@property char launchedDirectly;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)_run;
- (id)_productKeysFromProducts:(id)a0;
- (char)_install;
- (char)_applyMobileSoftwareUpdates;
- (id)_asynchronousUpdateService;
- (id)_availableLegacyProducts;
- (char)_bridgeOSUpdateIsPending;
- (char)_bridgeOSUpdateIsPrepared;
- (int)_bridgeOSUpdateState;
- (void)_commitStashAndRebootAfterSuccessfulPreparation:(char)a0;
- (char)_configure;
- (void)_configureAndShowProgress;
- (void)_createPreUpdateAPFSSnapshot;
- (id)_externalUpdateKeysToApplyAtPostlogout;
- (id)_filteredUpdatesForLegacyProducts;
- (char)_hasSufficientBatteryPower;
- (char)_hasSufficientDiskSpace;
- (char)_performExternalUpdatePostlogoutActions;
- (id)_productKeysToInstallAfterLogout;
- (void)_reportStarted;
- (char)_shouldApplyMobileSoftwareUpdatesAtLogout;
- (id)_statusForProducts:(id)a0;
- (id)_synchronousUpdateService;
- (char)_waitForClientToRespondToExternalUpdate;
- (char)_waitForExternalClientToFinishPostlogoutActions;
- (char)runAndRebootWhenFinished;
- (void)setLegacyPostLogoutPropertiesWithUpdates:(id)a0;

@end
