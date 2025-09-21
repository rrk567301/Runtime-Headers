@class NSDate, NSString, NSUndoManager, NSURL, VSDevice, NSDictionary, NSUserDefaults;

@interface VSPreferences : NSObject

@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSUserDefaults *globalUserDefaults;
@property (retain, nonatomic) VSDevice *device;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly, copy, nonatomic) NSURL *overridingAppBootURL;
@property (readonly, nonatomic) char shouldDisableRequestTimeouts;
@property (readonly, nonatomic) char shouldAlwaysAllowRemoteInspection;
@property (readonly, nonatomic) char shouldSkipSetup;
@property (nonatomic) long long cachedAvailabilityStatus;
@property (nonatomic) long long cachedDeveloperProviderStatus;
@property (nonatomic) long long cachedStoreProviderStatus;
@property (readonly, nonatomic) char allowNonSystemTrust;
@property (readonly, nonatomic) char allowInsecureAuthContext;
@property (readonly, nonatomic) char useLegacyVendorIdentifier;
@property (copy, nonatomic) NSDictionary *vendorIdentifierDictionary;
@property (nonatomic) char isInSTBMode;
@property (readonly, nonatomic) char setTopBoxInfoIsSetTopBoxOverride;
@property (readonly, nonatomic) NSString *setTopBoxInfoProviderIdOverride;
@property (readonly, nonatomic) NSString *setTopBoxInfoProviderDisplayNameOverride;
@property (readonly, nonatomic) NSString *setTopBoxInfoAppAdamIdOverride;
@property (readonly, nonatomic) NSString *setTopBoxInfoBundleIdentifierOverride;
@property (readonly, nonatomic) NSString *forceSingleProviderID;
@property (nonatomic) char ignoreSetTopBoxProfile;
@property (readonly, nonatomic) NSDate *setTopBoxActivationTime;
@property (copy, nonatomic) NSString *metricUserID;
@property (readonly, nonatomic) NSDate *metricUserIDLastGenerated;
@property (readonly, nonatomic) char performedSubcriptionToUserAccountMigration;
@property (readonly, nonatomic) char flushMetrics;

- (void).cxx_destruct;
- (void)disableFeature:(id)a0;
- (void)noteDesiredApp:(id)a0;
- (char)shouldSkipSetup;
- (char)shouldUseLegacyVendorIdentifier;
- (void)_updateShouldSkipSetupWithNumber:(id)a0;
- (void)_updateValue:(id)a0 forKey:(id)a1;
- (void)clearFeature:(id)a0;
- (void)clearSetTopBoxActivationTime;
- (void)enableFeature:(id)a0;
- (char)featureIsEnabled:(id)a0 present:(char *)a1;
- (long long)forcedAvailabilityStatus;
- (char)hasChosenDesiredApp;
- (char)performedSubcriptionToUserAccountMigration;
- (void)removeSkipSetupPreset;
- (void)setPerformedSubcriptionToUserAccountMigration;
- (void)setSetTopBoxActivationTime;
- (void)setShouldSkipSetup;
- (id)setTopBoxActivationTime;

@end
