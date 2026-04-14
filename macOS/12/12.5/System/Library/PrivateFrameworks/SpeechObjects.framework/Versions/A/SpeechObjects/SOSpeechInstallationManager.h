@class CustomizeVoicesWindowController, SOCustomizeSRLanguagesWindowController;

@interface SOSpeechInstallationManager : NSObject {
    CustomizeVoicesWindowController *_voiceSelectionWindowController;
    SOCustomizeSRLanguagesWindowController *_srLanguagesSelectionWindowController;
    struct __CFMessagePort { } *_serverPortRef;
}

@property (readonly, retain) CustomizeVoicesWindowController *voiceSelectionWindowController;
@property (readonly, retain) SOCustomizeSRLanguagesWindowController *srLanguagesSelectionWindowController;
@property (weak) id delegate;

+ (id)sharedManager;

- (void)finalize;
- (void)dealloc;
- (BOOL)isRunningOnACPower;
- (id)activeInstallations;
- (id)installationLogEntryForTag:(id)a0;
- (BOOL)doesLanguageDataNeedToBeDownloadedForLocaleIdentifier:(id)a0;
- (void)cancelAllInstallations;
- (void)showProgressWindow;
- (BOOL)startInstallingDownloadableSpeechItems:(id)a0 userInteractionMode:(unsigned int)a1;
- (id)downloadableVoices;
- (void)showVoiceSelectionSheetForWindow:(id)a0 showIndividualVoiceQualities:(BOOL)a1 voiceIdentifiersNotToBeRemoved:(id)a2;
- (id)activeVoiceInstallations;
- (id)downloadableVoiceUpgradeForVoice:(id)a0 fromDownloadableVoices:(id)a1;
- (BOOL)isAutoDownloadProhibitedForDownloadableVoiceObject:(id)a0;
- (BOOL)startInstallingDownloadableVoices:(id)a0 useRootNames:(BOOL)a1 userInteractionMode:(unsigned int)a2 initiator:(id)a3;
- (void)startRemovingDownloadedSpeechItems:(id)a0 initiator:(id)a1 immediately:(BOOL)a2;
- (id)bundleForRemovableVoice:(id)a0 passingBackTagName:(id *)a1;
- (void)markDownloadableVoiceObject:(id)a0 withAutoDownloadProhibitFlag:(BOOL)a1;
- (id)downloadableSRLanguageItems;
- (id)downloadableSpeechItemUpgradeForExistingSpeechItem:(id)a0 fromDownloadableItems:(id)a1;
- (BOOL)startInstallingDownloadableSpeechItems:(id)a0 userInteractionMode:(unsigned int)a1 initiator:(id)a2;
- (id)bundleForRemovableLanguage:(id)a0 passingBackTagName:(id *)a1;
- (void)showSRLanguagesSelectionSheetForWindow:(id)a0 networkSupportedLocaleIdentifiers:(id)a1 requiredLocaleIdentifier:(id)a2 supportDownloads:(BOOL)a3 showOnlyNetworkSupportedItems:(BOOL)a4;
- (struct __CFMessagePort { } *)_createLocalPort;
- (id)_sendMessage:(int)a0 withData:(void *)a1 withReply:(BOOL)a2;
- (id)downloadableVoiceUpgradeForVoiceIdentifier:(id)a0 desirability:(long long)a1 fromDownloadableVoices:(id)a2;
- (BOOL)_clientHasRightsToCustomVoices;
- (id)voiceSelectionWindowController;
- (id)highestQualityVoiceIdentifierForRootVoiceIdentifier:(id)a0 startDownloading:(BOOL)a1 requireACPower:(BOOL)a2 initiator:(id)a3;
- (id)_voiceIdentifierForRootVoiceIdentifier:(id)a0 startDownloading:(BOOL)a1 requireACPower:(BOOL)a2 initiator:(id)a3 highestQuality:(BOOL)a4;
- (BOOL)_startDownloadingHighestQualityIfNecessaryForVoiceIdentifier:(id)a0 requireACPower:(BOOL)a1 initiator:(id)a2;
- (id)_overriddenVoiceIdentifierDictionary;
- (double)percentageOfBatteryCharge;
- (BOOL)areBackgroundDownloadsAllowed;
- (id)installationLogEntryForTag:(id)a0 preferenceDomain:(id)a1;
- (void)cancelPurgingOfSpeechBundleIdentifiers:(id)a0 initiator:(id)a1;
- (id)srLanguagesSelectionWindowController;
- (BOOL)_serverIsRunning;
- (BOOL)_createServerPortIfNeeded;
- (BOOL)startInstallingDownloadableVoices:(id)a0 useRootNames:(BOOL)a1 userInteractionMode:(unsigned int)a2;
- (void)startRemovingDownloadedSpeechBundleIdentifiers:(id)a0 initiator:(id)a1 immediately:(BOOL)a2;
- (void)startRemovingDownloadedSpeechItems:(id)a0;
- (id)onDiskVersionForBundlePath:(id)a0;
- (id)highestQualityVoiceIdentifierForRootVoiceIdentifier:(id)a0 startDownloading:(BOOL)a1;
- (id)lowestQualityVoiceIdentifierForRootVoiceIdentifier:(id)a0 startDownloading:(BOOL)a1 requireACPower:(BOOL)a2 initiator:(id)a3;
- (void)cancelPurgingByInitiator:(id)a0;
- (void)resetAllVoiceDownloadAttemptsForInitiator:(id)a0;

@end
