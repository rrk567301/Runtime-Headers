@class NSTextField, NSString, NSDictionary, NSProgressIndicator, NSTimer, SODownloadDisplayManager;

@interface SOVoicePopUpButton : NSPopUpButton {
    NSDictionary *_fixedRateVoiceIdentifiers;
    NSString *_previouslyChosenVoiceIdentifier;
    NSString *_systemVoiceLocalizedText;
    long long _systemVoiceMenuItemTag;
    BOOL _allowSystemVoiceChoice;
    BOOL _showIndividualVoiceQualities;
    NSTextField *_downloadStatusTextField;
    NSProgressIndicator *_downloadStatusProgressIndicator;
    NSTimer *_downloadStatusUpdateTimer;
    SODownloadDisplayManager *_downloadDisplayManager;
}

+ (void)_forceAllVoicePopupsToUpdate;
+ (void)_startDelayedForceAllVoicePopupsToUpdate;
+ (id)displayNameForGender:(id)a0;
+ (void)forcePopupsToAdoptCachedMenuExceptPopUp:(id)a0;
+ (void)addExcludedVoiceIdentifier:(id)a0;
+ (BOOL)shouldExcludeVoiceIdentifier:(id)a0;
+ (void)addRequiredVoiceIdentifier:(id)a0;
+ (void)removeRequiredVoiceIdentifier:(id)a0;
+ (BOOL)isRequiredVoiceIdentifier:(id)a0;
+ (void)buildSharedVoicesMenuShowingVOVoices:(BOOL)a0;
+ (void)setFallbackVoiceIdentifier:(id)a0;
+ (BOOL)isSiriVoiceIdentifier:(id)a0;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;
- (void)_forceAllVoicePopupsToUpdate;
- (void)_handleSpeechDataInstallationNotification;
- (void)_forcePopupsToAdoptCachedMenuExceptPopUp:(id)a0;
- (void)_updateDownloadStatusFields;
- (void)setAllowSystemVoiceChoice:(BOOL)a0;
- (void)setSystemVoiceLocalizedText:(id)a0 menuItemTag:(long long)a1;
- (void)setShowIndividualVoiceQualities:(BOOL)a0;
- (void)buildPopUpButtonWithSelectVoiceIdentifier:(id)a0;
- (void)addExcludedIdentifier:(id)a0;
- (id)selectedVoiceAttributes;
- (BOOL)isSelectedVoiceAppropriateForCurrentLanguageWithUserConfirmation:(BOOL)a0 parentWindowForSheet:(id)a1;
- (id)_statusStringForActiveDownloads;
- (id)_previouslyChosenVoiceIdentifier;
- (void)_setPreviouslyChosenVoiceIdentifier:(id)a0;

@end
