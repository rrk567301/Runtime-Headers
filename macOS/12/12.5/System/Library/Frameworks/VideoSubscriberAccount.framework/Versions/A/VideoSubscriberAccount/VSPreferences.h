@class NSUndoManager, NSURL, VSDevice, NSUserDefaults;

@interface VSPreferences : NSObject

@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSUserDefaults *globalUserDefaults;
@property (retain, nonatomic) VSDevice *device;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly, copy, nonatomic) NSURL *overridingAppBootURL;
@property (readonly, nonatomic) BOOL shouldDisableRequestTimeouts;
@property (readonly, nonatomic) BOOL shouldAlwaysAllowRemoteInspection;
@property (readonly, nonatomic) BOOL shouldSkipSetup;
@property (nonatomic) long long cachedAvailabilityStatus;
@property (nonatomic) long long cachedDeveloperProviderStatus;
@property (nonatomic) long long cachedStoreProviderStatus;
@property (readonly, nonatomic) BOOL hasSentWelcomeMessage;

- (void).cxx_destruct;
- (id)metricUserID;
- (id)metricUserIDLastGenerated;
- (void)setMetricUserID:(id)a0;
- (void)_updateValue:(id)a0 forKey:(id)a1;
- (void)_updateShouldSkipSetupWithNumber:(id)a0;
- (void)noteShouldSkipSetup;
- (void)removeSkipSetupPreset;
- (void)noteDidSendWelcomeMessage;
- (BOOL)hasChosenDesiredApp;
- (void)noteDesiredApp:(id)a0;
- (BOOL)isInSTBMode;
- (BOOL)shouldIgnoreExtendedValidation;
- (BOOL)allowInsecureAuthContext;
- (void)noteIsInSTBMode:(BOOL)a0;
- (BOOL)setTopBoxInfoIsSetTopBoxOverride;
- (id)setTopBoxInfoProviderIdOverride;
- (id)setTopBoxInfoProviderDisplayNameOverride;
- (id)setTopBoxInfoAppAdamIdOverride;
- (id)setTopBoxInfoBundleIdentifierOverride;
- (void)setIgnoreSetTopBoxProfile:(BOOL)a0;
- (BOOL)ignoreSetTopBoxProfile;
- (id)setTopBoxActivationTime;
- (void)noteSetTopBoxActicationTime;
- (void)clearSetTopBoxActivationTime;

@end
