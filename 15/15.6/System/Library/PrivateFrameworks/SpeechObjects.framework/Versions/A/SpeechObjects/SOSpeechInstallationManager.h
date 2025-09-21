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

- (void)dealloc;
- (void)finalize;
- (char)isRunningOnACPower;
- (id)activeInstallations;
- (void)cancelAllInstallations;
- (char)doesLanguageDataNeedToBeDownloadedForLocaleIdentifier:(id)a0;
- (id)installationLogEntryForTag:(id)a0;
- (void)showProgressWindow;
- (char)startInstallingDownloadableSpeechItems:(id)a0 userInteractionMode:(unsigned int)a1;
- (char)_clientHasRightsToCustomVoices;
- (struct __CFMessagePort { } *)_createLocalPort;
- (char)_createServerPortIfNeeded;
- (id)_overriddenVoiceIdentifierDictionary;
- (id)_sendMessage:(int)a0 withData:(void *)a1 withReply:(char)a2;
- (char)_serverIsRunning;
- (char)_startDownloadingHighestQualityIfNecessaryForVoiceIdentifier:(id)a0 requireACPower:(char)a1 initiator:(id)a2;
- (id)_voiceIdentifierForRootVoiceIdentifier:(id)a0 startDownloading:(char)a1 requireACPower:(char)a2 initiator:(id)a3 highestQuality:(char)a4;
- (id)activeVoiceInstallations;
- (char)areBackgroundDownloadsAllowed;
- (id)bundleForRemovableLanguage:(id)a0 passingBackTagName:(id *)a1;
- (id)bundleForRemovableVoice:(id)a0 passingBackTagName:(id *)a1;
- (void)cancelPurgingByInitiator:(id)a0;
- (void)cancelPurgingOfSpeechBundleIdentifiers:(id)a0 initiator:(id)a1;
- (id)downloadableSRLanguageItems;
- (id)downloadableSpeechItemUpgradeForExistingSpeechItem:(id)a0 fromDownloadableItems:(id)a1;
- (id)downloadableVoiceUpgradeForVoice:(id)a0 fromDownloadableVoices:(id)a1;
- (id)downloadableVoiceUpgradeForVoiceIdentifier:(id)a0 desirability:(long long)a1 fromDownloadableVoices:(id)a2;
- (id)downloadableVoices;
- (id)highestQualityVoiceIdentifierForRootVoiceIdentifier:(id)a0 startDownloading:(char)a1;
- (id)highestQualityVoiceIdentifierForRootVoiceIdentifier:(id)a0 startDownloading:(char)a1 requireACPower:(char)a2 initiator:(id)a3;
- (id)installationLogEntryForTag:(id)a0 preferenceDomain:(id)a1;
- (char)isAutoDownloadProhibitedForDownloadableVoiceObject:(id)a0;
- (id)lowestQualityVoiceIdentifierForRootVoiceIdentifier:(id)a0 startDownloading:(char)a1 requireACPower:(char)a2 initiator:(id)a3;
- (void)markDownloadableVoiceObject:(id)a0 withAutoDownloadProhibitFlag:(char)a1;
- (id)onDiskVersionForBundlePath:(id)a0;
- (double)percentageOfBatteryCharge;
- (void)resetAllVoiceDownloadAttemptsForInitiator:(id)a0;
- (void)showSRLanguagesSelectionSheetForWindow:(id)a0 networkSupportedLocaleIdentifiers:(id)a1 requiredLocaleIdentifier:(id)a2 supportDownloads:(char)a3 showOnlyNetworkSupportedItems:(char)a4;
- (void)showVoiceSelectionSheetForWindow:(id)a0 showIndividualVoiceQualities:(char)a1 voiceIdentifiersNotToBeRemoved:(id)a2;
- (id)srLanguagesSelectionWindowController;
- (char)startInstallingDownloadableSpeechItems:(id)a0 userInteractionMode:(unsigned int)a1 initiator:(id)a2;
- (char)startInstallingDownloadableVoices:(id)a0 useRootNames:(char)a1 userInteractionMode:(unsigned int)a2;
- (char)startInstallingDownloadableVoices:(id)a0 useRootNames:(char)a1 userInteractionMode:(unsigned int)a2 initiator:(id)a3;
- (void)startRemovingDownloadedSpeechBundleIdentifiers:(id)a0 initiator:(id)a1 immediately:(char)a2;
- (void)startRemovingDownloadedSpeechItems:(id)a0;
- (void)startRemovingDownloadedSpeechItems:(id)a0 initiator:(id)a1 immediately:(char)a2;
- (id)voiceSelectionWindowController;

@end
