@class SUPowerAssertionManager, NSArray, IASUnifiedProgressClient, NSObject;
@protocol OS_dispatch_source;

@interface SUOSUPostLogoutInstallOperation : NSObject

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
@property BOOL enableBatteryPowerCheck;
@property BOOL enableStashing;
@property BOOL shouldShutDownWhenComplete;
@property BOOL cancelled;
@property (readonly) BOOL applyMobileSoftwareUpdates;
@property BOOL runningAsSoftwareUpdated;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_run;
- (id)_productKeysFromProducts:(id)a0;
- (id)_mobileSoftwareUpdatesToApplyAtPostLogout;
- (BOOL)_configure;
- (id)_asynchronousUpdateService;
- (void)_commitStashAndRebootAfterSuccessfulPreparation:(BOOL)a0;
- (BOOL)_shouldApplyMobileSoftwareUpdatesAtLogout;
- (id)_filteredUpdatesForLegacyProducts;
- (void)setLegacyPostLogoutPropertiesWithUpdates:(id)a0;
- (id)_externalUpdateKeysToApplyAtPostlogout;
- (id)_productKeysToInstallAfterLogout;
- (id)_availableLegacyProducts;
- (id)_statusForProducts:(id)a0;
- (void)_configureAndShowProgress;
- (BOOL)_hasSufficientDiskSpace;
- (BOOL)_hasSufficientBatteryPower;
- (void)_createPreUpdateAPFSSnapshot;
- (BOOL)_installDidArmUpdate:(BOOL *)a0;
- (BOOL)_performExternalUpdatePostlogoutActions;
- (BOOL)_applyMobileSoftwareUpdates;
- (id)_synchronousUpdateService;
- (BOOL)_waitForClientToRespondToExternalUpdate;
- (BOOL)_waitForExternalClientToFinishPostlogoutActions;
- (BOOL)runAndRebootWhenFinished;

@end
