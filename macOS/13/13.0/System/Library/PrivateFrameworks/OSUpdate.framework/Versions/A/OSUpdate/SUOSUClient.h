@class NSString, NSImage, NSDate, SUOSUShimController, NSWindow;

@interface SUOSUClient : NSObject

@property (retain) SUOSUShimController *controller;
@property unsigned long long clientType;
@property (retain) NSString *marketingNameString;
@property (retain) NSString *systemVersionString;
@property (retain) NSString *buildVersionString;
@property (copy) id /* block */ progressCompletion;
@property BOOL isAutomaticallyCheckForUpdatesPreferenceEnabled;
@property BOOL isAutomaticallyDownloadUpdatesPreferenceEnabled;
@property BOOL isAutomaticallyInstallMacOSUpdatesPreferenceEnabled;
@property BOOL isAutomaticallyInstallAppUpdatesPreferenceEnabled;
@property BOOL isAutomaticallyInstallSecurityAndConfigUpdatesPreferenceEnabled;
@property (readonly) BOOL isAutomaticallyCheckForUpdatesPreferenceManaged;
@property (readonly) BOOL isAutomaticallyDownloadUpdatesPreferenceManaged;
@property (readonly) BOOL isAutomaticallyInstallMacOSUpdatesPreferenceManaged;
@property (readonly) BOOL isAutomaticallyInstallAppUpdatesPreferenceManaged;
@property (readonly) BOOL isAutomaticallyInstallSecurityAndConfigUpdatesPreferenceManaged;
@property (readonly) NSString *catalogURL;
@property (readonly) NSString *pallasAudience;
@property (readonly) NSImage *currentSystemImage;
@property (retain, nonatomic) NSWindow *window;
@property (readonly) NSDate *latestSuccessfulScanDate;
@property (readonly) BOOL deferredUpdatesExist;
@property (readonly) BOOL deferralEnabled;
@property (readonly) BOOL shouldShowCatalogSelector;
@property (readonly) unsigned long long updatesQueuedForLaterMode;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void).cxx_destruct;
- (BOOL)setCatalogURL:(id)a0;
- (BOOL)unenrollFromSeedProgram;
- (void)removeAllNotifications;
- (id)initWithDelegate:(id)a0 type:(unsigned long long)a1;
- (unsigned long long)postInstallActionForUpdates:(id)a0;
- (BOOL)availableUpdatesDownloaded;
- (BOOL)osUpdateDownloadedAndPreparedForProduct:(id)a0;
- (void)startScanningForUpdatesEvenIfUnchanged:(BOOL)a0;
- (void)startScanningForLegacyUpdatesEvenIfUnchanged:(BOOL)a0;
- (void)startScanningForUpdatesEvenIfUnchanged:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)startInstallingUpdates:(id)a0;
- (void)startInstallingUpdates:(id)a0 inForeground:(BOOL)a1;
- (void)startInstallingUpdates:(id)a0 isDoItLater:(BOOL)a1 inForeground:(BOOL)a2;
- (void)startInstallingMDMUpdates:(id)a0 isDoItLater:(BOOL)a1 inForeground:(BOOL)a2;
- (void)startInstallingUpdates:(id)a0 withOptions:(id)a1;
- (void)installConfigDataUpdates;
- (void)queueUpdatesForLater:(id)a0;
- (void)unenrollFromSeedProgramWithCompletion:(id /* block */)a0;
- (void)startInstallingMajorOSVersion:(id)a0 orWithMajorOSBundleIdentifier:(id)a1 majorOSVariant:(id)a2 shouldOpenIA:(BOOL)a3 inForeground:(BOOL)a4 isMDMInitiated:(BOOL)a5;
- (void)startInstallingMajorOSVersion:(id)a0 orWithMajorOSBundleIdentifier:(id)a1 majorOSVariant:(id)a2 shouldOpenIA:(BOOL)a3 inForeground:(BOOL)a4 isMDMInitiated:(BOOL)a5 fromAvailableMajorUpdates:(id)a6;
- (BOOL)resetToProductionCatalog;
- (void)resetToProductionCatalogWithCompletion:(id /* block */)a0;
- (BOOL)cancelUpdatesQueuedForLater;
- (void)cancelCurrentUpdates;
- (BOOL)authorizeForModifyingPreferences;
- (void)authorizeForModifyingPreferencesWithCompletion:(id /* block */)a0;
- (BOOL)managedInstallLaterUpdatesScheduled;

@end
