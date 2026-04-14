@class SUPowerAssertionManager, NSArray, BridgeOSSoftwareUpdateController, NSString, IASUnifiedProgressClient, NSObject;
@protocol OS_dispatch_source;

@interface SUOSUPostLogoutInstallOperation : NSObject

@property (readonly) BridgeOSSoftwareUpdateController *bridgeController;
@property (retain) NSArray *productKeys;
@property BOOL hasCriticalUpdates;
@property BOOL hasBaseSystemSU;
@property BOOL nowIsLater;
@property BOOL enableFirstLoginOptimization;
@property BOOL enableCreatingPreUpdateAPFSSnapshot;
@property (retain) SUPowerAssertionManager *powerAssertionManager;
@property (retain) IASUnifiedProgressClient *progressClient;
@property (retain) NSObject<OS_dispatch_source> *progressTimer;
@property BOOL installInProgress;
@property BOOL shouldApplyMobileSoftwareUpdates;
@property BOOL shouldInstallLegacySoftwareUpdates;
@property (retain) NSString *customStatusString;
@property BOOL enableBatteryPowerCheck;
@property BOOL enableStashing;
@property BOOL shouldShutDownWhenComplete;
@property BOOL cancelled;
@property (readonly) BOOL applyMobileSoftwareUpdates;
@property BOOL runningAsSoftwareUpdated;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_run;
- (id)_productKeysFromProducts:(id)a0;
- (BOOL)runAndRebootWhenFinished;
- (BOOL)_configure;
- (id)_filteredUpdatesForLegacyProducts;
- (void)setLegacyPostLogoutPropertiesWithUpdates:(id)a0;
- (void)_configureAndShowProgress;
- (BOOL)_hasSufficientDiskSpace;
- (BOOL)_hasSufficientBatteryPower;
- (int)_bridgeOSUpdateState;
- (BOOL)_bridgeOSUpdateIsPrepared;
- (BOOL)_bridgeOSUpdateIsPending;
- (void)_createPreUpdateAPFSSnapshot;
- (BOOL)_installDidArmUpdate:(BOOL *)a0;
- (id)_mobileSoftwareUpdatesToApplyAtPostLogout;
- (BOOL)_shouldApplyMobileSoftwareUpdatesAtLogout;
- (BOOL)_applyMobileSoftwareUpdates;
- (void)_commitStashAndRebootAfterSuccessfulPreparation:(BOOL)a0;
- (BOOL)_performExternalUpdatePostlogoutActions;
- (BOOL)_waitForClientToRespondToExternalUpdate;
- (BOOL)_waitForExternalClientToFinishPostlogoutActions;
- (id)_externalUpdateKeysToApplyAtPostlogout;
- (id)_productKeysToInstallAfterLogout;
- (id)_availableLegacyProducts;
- (id)_statusForProducts:(id)a0;
- (id)_asynchronousUpdateService;
- (id)_synchronousUpdateService;

@end
