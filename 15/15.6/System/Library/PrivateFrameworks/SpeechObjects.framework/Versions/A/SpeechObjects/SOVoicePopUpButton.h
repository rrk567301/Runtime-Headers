@class NSTextField, NSString, NSDictionary, NSProgressIndicator, NSTimer, SODownloadDisplayManager;

@interface SOVoicePopUpButton : NSPopUpButton {
    NSDictionary *_fixedRateVoiceIdentifiers;
    NSString *_previouslyChosenVoiceIdentifier;
    NSString *_systemVoiceLocalizedText;
    long long _systemVoiceMenuItemTag;
    char _allowSystemVoiceChoice;
    char _showIndividualVoiceQualities;
    NSTextField *_downloadStatusTextField;
    NSProgressIndicator *_downloadStatusProgressIndicator;
    NSTimer *_downloadStatusUpdateTimer;
    SODownloadDisplayManager *_downloadDisplayManager;
}

+ (char)isSiriVoiceIdentifier:(id)a0;
+ (void)_forceAllVoicePopupsToUpdate;
+ (void)_startDelayedForceAllVoicePopupsToUpdate;
+ (void)addExcludedVoiceIdentifier:(id)a0;
+ (void)addRequiredVoiceIdentifier:(id)a0;
+ (void)buildSharedVoicesMenuShowingVOVoices:(char)a0;
+ (id)displayNameForGender:(id)a0;
+ (void)forcePopupsToAdoptCachedMenuExceptPopUp:(id)a0;
+ (char)isRequiredVoiceIdentifier:(id)a0;
+ (void)removeRequiredVoiceIdentifier:(id)a0;
+ (void)setFallbackVoiceIdentifier:(id)a0;
+ (char)shouldExcludeVoiceIdentifier:(id)a0;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (char)sendAction:(SEL)a0 to:(id)a1;
- (id)_statusStringForActiveDownloads;
- (void)_forceAllVoicePopupsToUpdate;
- (void)_forcePopupsToAdoptCachedMenuExceptPopUp:(id)a0;
- (void)_handleSpeechDataInstallationNotification;
- (id)_previouslyChosenVoiceIdentifier;
- (void)_setPreviouslyChosenVoiceIdentifier:(id)a0;
- (void)_updateDownloadStatusFields;
- (void)addExcludedIdentifier:(id)a0;
- (void)buildPopUpButtonWithSelectVoiceIdentifier:(id)a0;
- (char)isSelectedVoiceAppropriateForCurrentLanguageWithUserConfirmation:(char)a0 parentWindowForSheet:(id)a1;
- (id)selectedVoiceAttributes;
- (void)setAllowSystemVoiceChoice:(char)a0;
- (void)setShowIndividualVoiceQualities:(char)a0;
- (void)setSystemVoiceLocalizedText:(id)a0 menuItemTag:(long long)a1;

@end
