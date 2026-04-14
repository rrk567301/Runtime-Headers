@class NSString, NSXPCConnection, NSDate, NSNumber;

@interface SUPreferenceManager : NSObject

@property (class, readonly) SUPreferenceManager *defaultManager;

@property (retain) NSXPCConnection *connection;
@property (readonly) NSString *catalogURL;
@property (readonly) NSDate *lastScanSuccessfulDate;
@property (readonly) NSDate *lastFullScanSuccessfulDate;
@property (readonly) NSDate *lastCatalogChangedDate;
@property (readonly) NSNumber *recommendedUpdatesAvailable;
@property (readonly) BOOL automaticallyCheckForUpdates;
@property (readonly) BOOL downloadUpdatesInBackground;
@property (readonly) BOOL automaticallyInstallConfigDataAndSecurityUpdates;
@property (readonly) BOOL automaticallyInstallRestartRequiredUpdates;
@property (readonly) BOOL automaticallyInstallMacOSUpdates;
@property (readonly) BOOL specialTestMode;
@property (readonly) BOOL allowAnyCatalogCertificate;
@property (readonly) BOOL disableSeedUI;
@property (readonly) BOOL onlyConsiderStagedUpdates;
@property (readonly) NSString *baseSystemDiskImageOverridePath;
@property (readonly) long long lastScanResultCode;
@property (readonly) BOOL isLastScanResultSuccess;
@property (readonly) BOOL allowSameOrOlderMajorOSVersion;
@property (readonly) NSString *bridgeVersionOverride;
@property (readonly) BOOL ignoreMinimumBridgeVersionCheck;
@property (readonly) NSString *customPersonalizationSigningServerURLString;

- (void)dealloc;
- (id)_dataForNVRAMKey:(id)a0;
- (id)_preferenceObjectForKey:(id)a0 withError:(id *)a1;
- (BOOL)_setPreferenceObject:(id)a0 forKey:(id)a1 withError:(id *)a2;
- (BOOL)_setIASUCatalogURLWithValue:(id)a0 withError:(id *)a1;
- (id)_dataForNVRAMKey:(id)a0 withError:(id *)a1;
- (id)_preferenceObjectForKey:(id)a0 requiringClass:(Class)a1;
- (BOOL)_migratePreferencesWithError:(id *)a0;
- (void)_reconnectIfNecessary;
- (BOOL)_setPreferenceObject:(id)a0 requiringObjectClass:(Class)a1 forKey:(id)a2;
- (BOOL)_setIASUCatalogURLWithValue:(id)a0;
- (BOOL)setAutomaticallyInstallMacOSUpdates:(BOOL)a0;
- (BOOL)setAutomaticallyCheckForUpdates:(BOOL)a0;
- (BOOL)setAutomaticallyInstallConfigDataAndSecurityUpdates:(BOOL)a0;
- (BOOL)setDownloadUpdatesInBackground:(BOOL)a0;
- (id)_newResumedConnection;
- (BOOL)migratePreferencesIfNecessary;
- (BOOL)setCatalogToProductionAndNotify;
- (BOOL)setCatalogURL:(id)a0;
- (BOOL)setIASUCatalogURLWithValue:(id)a0;
- (BOOL)isProdFused;
- (BOOL)setAutomaticallyInstallRestartRequiredUpdates:(BOOL)a0;
- (BOOL)setSpecialTestMode:(BOOL)a0;
- (BOOL)setAllowAnyCatalogCertificate:(BOOL)a0;
- (BOOL)setDisableSeedUI:(BOOL)a0;
- (BOOL)setOnlyConsiderStagedUpdatesForPredicateAndConfigDataUpdates:(BOOL)a0;
- (BOOL)setBaseSystemDiskImageOverridePath:(id)a0;
- (BOOL)setLastRecommendedMajorOSBundleIdentifier:(id)a0;
- (BOOL)setLastSuccessfulScanDate:(id)a0;
- (BOOL)enableRecommendedSettings;
- (BOOL)setManagedDoItLaterDeferralCount:(id)a0;
- (BOOL)setMaxManagedDoItLaterDeferralCount:(id)a0;

@end
