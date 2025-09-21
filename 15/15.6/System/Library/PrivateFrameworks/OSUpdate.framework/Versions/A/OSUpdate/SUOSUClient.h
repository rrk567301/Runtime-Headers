@class NSString, NSImage, NSDate, SUOSUShimController;

@interface SUOSUClient : NSObject <SUOSUClientProtocol>

@property (retain) SUOSUShimController *controller;
@property unsigned long long clientType;
@property (retain) NSString *marketingNameString;
@property (retain) NSString *systemVersionString;
@property (retain) NSString *buildVersionString;
@property (copy) id /* block */ progressCompletion;
@property (readonly) char isAutomaticallyCheckForUpdatesPreferenceEnabled;
@property char isAutomaticallyDownloadUpdatesPreferenceEnabled;
@property char isAutomaticallyInstallMacOSUpdatesPreferenceEnabled;
@property char isAutomaticallyInstallAppUpdatesPreferenceEnabled;
@property char isAutomaticallyInstallSecurityAndConfigUpdatesPreferenceEnabled;
@property (readonly) char isAutomaticallyCheckForUpdatesPreferenceManaged;
@property (readonly) char isAutomaticallyDownloadUpdatesPreferenceManaged;
@property (readonly) char isAutomaticallyInstallMacOSUpdatesPreferenceManaged;
@property (readonly) char isAutomaticallyInstallAppUpdatesPreferenceManaged;
@property (readonly) char isAutomaticallyInstallSecurityAndConfigUpdatesPreferenceManaged;
@property (readonly) NSString *catalogURL;
@property (readonly) NSString *pallasAudience;
@property (readonly) NSImage *currentSystemImage;
@property (readonly) NSDate *latestSuccessfulScanDate;
@property (readonly) char deferredUpdatesExist;
@property (readonly) char deferralEnabled;
@property (readonly) char shouldShowCatalogSelector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)setCatalogURL:(id)a0;
- (char)isSupervised;
- (char)authorizeForModifyingPreferences;
- (void)authorizeForModifyingPreferencesWithCompletion:(id /* block */)a0;
- (char)availableUpdatesDownloaded;
- (void)cacheDeletePurgeableSpaceWithCompletionHandler:(id /* block */)a0;
- (char)cancelUpdatesQueuedForLater;
- (unsigned long long)diskSpaceRequiredForProducts:(id)a0;
- (id)enforcedDDMDeclaration;
- (id)enforcedDDMPastDuePaddedDeclarationDate;
- (id)initWithDelegate:(id)a0 type:(unsigned long long)a1;
- (void)installConfigDataUpdates;
- (char)isDDMManagedProduct:(id)a0;
- (char)managedInstallLaterUpdatesScheduled;
- (char)observeForegroundInstallInProgress;
- (char)osUpdateDownloadedAndPreparedForProduct:(id)a0;
- (unsigned long long)postInstallActionForUpdates:(id)a0;
- (void)queueUpdatesForLater:(id)a0 withReason:(unsigned long long)a1 window:(id)a2;
- (char)resetToProductionCatalog;
- (void)resetToProductionCatalogWithCompletion:(id /* block */)a0;
- (void)startInstallingMDMUpdates:(id)a0 isDoItLater:(char)a1 inForeground:(char)a2;
- (void)startInstallingMajorOSVersion:(id)a0 orWithMajorOSBundleIdentifier:(id)a1 majorOSVariant:(id)a2 shouldOpenIA:(char)a3 inForeground:(char)a4 isMDMInitiated:(char)a5;
- (void)startInstallingMajorOSVersion:(id)a0 orWithMajorOSBundleIdentifier:(id)a1 majorOSVariant:(id)a2 shouldOpenIA:(char)a3 inForeground:(char)a4 isMDMInitiated:(char)a5 fromAvailableMajorUpdates:(id)a6;
- (void)startInstallingUpdates:(id)a0;
- (void)startInstallingUpdates:(id)a0 inForeground:(char)a1;
- (void)startInstallingUpdates:(id)a0 isDoItLater:(char)a1 inForeground:(char)a2;
- (void)startInstallingUpdates:(id)a0 window:(id)a1 withOptions:(id)a2;
- (void)startInstallingUpdates:(id)a0 withOptions:(id)a1;
- (void)startScanningForLegacyUpdatesEvenIfUnchanged:(char)a0;
- (void)startScanningForUpdatesEvenIfUnchanged:(char)a0;
- (void)startScanningForUpdatesEvenIfUnchanged:(char)a0 withCompletionHandler:(id /* block */)a1;

@end
