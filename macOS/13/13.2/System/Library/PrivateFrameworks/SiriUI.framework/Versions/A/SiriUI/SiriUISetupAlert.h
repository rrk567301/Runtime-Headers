@class SOSRSimpleLanguagePopUpButton, NSView, NSString, NSArray, NSButton;

@interface SiriUISetupAlert : NSAlert

@property BOOL showsPrivacyInformation;
@property BOOL showsLanguageSelection;
@property (retain) NSView *ambiguousLanguageAccessoryView;
@property (retain) NSView *unsupportedLanguageAccessoryView;
@property (weak) NSButton *languageOneButton;
@property (weak) NSButton *languageTwoButton;
@property (weak) SOSRSimpleLanguagePopUpButton *languagePopUp;
@property (retain) NSString *messageTextVTStringKey;
@property (retain) NSString *informativeTextVTStringKey;
@property (retain) NSArray *allSiriLanguageCodes;
@property (retain) NSArray *supportedSiriLanguageCodes;
@property (retain) NSString *bestSupportedLanguageCode;
@property (readonly) NSString *siriLanguageCode;

- (id)_init;
- (void).cxx_destruct;
- (long long)runModal;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)clickedSiriPrivacy:(id)a0;
- (id)initEnableAskSiri;
- (id)initEnableHeySiriBuiltInWithAskSiri:(BOOL)a0;
- (id)initEnableHeySiriAudioDevice:(BOOL)a0 withAskSiri:(BOOL)a1;
- (id)initDisableAskSiri;
- (void)_alertWillAppear;
- (void)languageRadioButtonPressed:(id)a0;
- (void)languagePopUpSelectionChanged:(id)a0;
- (id)buttonTitleForAmbiguousLanguage:(id)a0;
- (void)_setAlertTextFromVoiceTriggerKeys;

@end
