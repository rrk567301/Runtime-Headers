@class NSTextField, NSTimer, SOSRLanguagePopUpButton, SOMicrophonePopUpButton, SOMicrophoneLevelMeterController, SODictationHotKeyController, NSDictionary, SOBigMicrophoneView, NSButtonCell, SOEnableDictationPanelController, NSImageView, NSButton;

@interface SODictationPreferencesViewController : NSViewController {
    NSButtonCell *_disableDictationRadioButton;
    NSButtonCell *_enableDictationRadioButton;
    SOSRLanguagePopUpButton *_dictationLanguagePopUpButton;
    NSButton *_showPrivacyPanelButton;
    NSTextField *_descriptionText;
    NSTextField *_onDeviceDictationStatusText;
    NSTextField *_parentalControlsNoteText;
    NSImageView *_parentalControlsNoteImage;
    NSTextField *_dictationShortcutLabelTextField;
    NSTextField *_disabledWarningTextField;
    NSImageView *_disabledWarningImage;
    SOMicrophonePopUpButton *_microphonePopUpButton;
    SOBigMicrophoneView *_microphoneLevelMeterView;
    SOMicrophoneLevelMeterController *_microphoneLevelMeterController;
    SODictationHotKeyController *_hotKeyController;
    SOEnableDictationPanelController *_enableDictationPanelController;
    BOOL _isMicrophoneMeteringAllowed;
}

@property (retain, nonatomic) NSDictionary *offlineDictationStatus;
@property (retain, nonatomic) NSTimer *offlineDictationStatusRefreshTimer;

+ (id)localizedListForLocaleIdentifiers:(id)a0 duplicatedBaseLanguages:(id)a1;
+ (id)localizedStringForListKey:(id)a0 localeIdentifiers:(id)a1 duplicatedBaseLanguages:(id)a2;
+ (id)defaultViewController;

- (void)dealloc;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)hide;
- (void)showHelp:(id)a0;
- (void)show;
- (void)setup;
- (void)_delayedSyncEnableStates;
- (void)_buildNetworkBasedLanguagePopupMenu;
- (void)_updateDescription;
- (void)showPrivacyPanel:(id)a0;
- (void)_syncEnableStates;
- (void)_syncMeteringState;
- (void)enableDictationPressed:(id)a0;
- (void)disableDictationPressed:(id)a0;
- (void)microphoneSelected:(id)a0;
- (void)didUpdateMicrophonePopUpButton:(id)a0;
- (void)languageSelected:(id)a0;
- (void)showCommandOptions:(id)a0;
- (void)_startOfflineDictationStatusUpdateTimer;
- (void)_stopOfflineDictationStatusUpdateTimer;
- (void)_fetchOfflineDictationStatus;
- (void)_updateOnDeviceDictationStatus;

@end
