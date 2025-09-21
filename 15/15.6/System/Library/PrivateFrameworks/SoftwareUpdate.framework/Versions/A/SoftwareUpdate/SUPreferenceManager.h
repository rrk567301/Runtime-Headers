@class NSString, NSXPCConnection, NSDate;

@interface SUPreferenceManager : NSObject

@property (class, readonly) SUPreferenceManager *defaultManager;

@property (retain) NSXPCConnection *connection;
@property (readonly) NSString *catalogURL;
@property (readonly) NSDate *lastScanSuccessfulDate;
@property (readonly) NSDate *lastFullScanSuccessfulDate;
@property (readonly) NSDate *lastCatalogChangedDate;
@property (readonly) char automaticallyCheckForUpdates;
@property (readonly) char downloadUpdatesInBackground;
@property (readonly) char automaticallyInstallConfigDataAndSecurityUpdates;
@property (readonly) char automaticallyInstallRestartRequiredUpdates;
@property (readonly) char automaticallyInstallMacOSUpdates;
@property (readonly) char specialTestMode;
@property (readonly) char allowAnyCatalogCertificate;
@property (readonly) char disableSeedUI;
@property (readonly) char onlyConsiderStagedUpdates;
@property (readonly) NSString *baseSystemDiskImageOverridePath;
@property (readonly) long long lastScanResultCode;
@property (readonly) char isLastScanResultSuccess;
@property (readonly) char allowSameOrOlderMajorOSVersion;
@property (readonly) NSString *bridgeVersionOverride;
@property (readonly) char ignoreMinimumBridgeVersionCheck;
@property (readonly) NSString *customPersonalizationSigningServerURLString;

- (void)dealloc;
- (char)setDDMPersistedError:(id)a0 timestamp:(id)a1;
- (char)setCatalogToProductionAndNotify;
- (char)setDownloadUpdatesInBackground:(char)a0;
- (char)_clearAnyPreferenceWithKey:(id)a0 withError:(id *)a1;
- (char)_migratePreferencesWithError:(id *)a0;
- (id)_newResumedConnection;
- (id)_preferenceObjectForKey:(id)a0 requiringClass:(Class)a1;
- (id)_preferenceObjectForKey:(id)a0 withError:(id *)a1;
- (void)_reconnectIfNecessary;
- (char)_setIASUCatalogURLWithValue:(id)a0;
- (char)_setIASUCatalogURLWithValue:(id)a0 withError:(id *)a1;
- (char)_setPreferenceObject:(id)a0 forKey:(id)a1 withError:(id *)a2;
- (char)_setPreferenceObject:(id)a0 requiringObjectClass:(Class)a1 forKey:(id)a2;
- (char)addManagedDoItLaterDeferralUserNotificationDate:(id)a0;
- (char)clearDDMPersistedError;
- (char)enableRecommendedSettings;
- (char)isMacOSAutoUpdateManaged;
- (char)isProdFused;
- (char)migratePreferencesIfNecessary;
- (char)setAllowAnyCatalogCertificate:(char)a0;
- (char)setAutomaticallyCheckForUpdates:(char)a0;
- (char)setAutomaticallyCheckForUpdatesOverride:(char)a0;
- (char)setAutomaticallyInstallConfigDataAndSecurityUpdates:(char)a0;
- (char)setAutomaticallyInstallMacOSUpdates:(char)a0;
- (char)setAutomaticallyInstallRestartRequiredUpdates:(char)a0;
- (char)setBaseSystemDiskImageOverridePath:(id)a0;
- (char)setCatalogURL:(id)a0;
- (char)setDisableSeedUI:(char)a0;
- (char)setEncodedBundleOverridePath:(id)a0;
- (char)setIASUCatalogURLWithValue:(id)a0;
- (char)setLastRecommendedMajorOSBundleIdentifier:(id)a0;
- (char)setLastSuccessfulScanDate:(id)a0;
- (char)setManagedDoItLaterDeferralCount:(id)a0;
- (char)setManagedProductMarketingVersion:(id)a0;
- (char)setMaxManagedDoItLaterDeferralCount:(id)a0;
- (char)setOnlyConsiderStagedUpdatesForPredicateAndConfigDataUpdates:(char)a0;
- (void)setProductKeysToAutoInstall:(id)a0;
- (void)setReadmeOverridePath:(id)a0;
- (char)setSettingsClientOverride:(id)a0;
- (char)setSpecialTestMode:(char)a0;
- (void)setSpoofMajorOSUpdate:(char)a0;
- (void)setSpoofMinorOSUpdate:(char)a0;

@end
