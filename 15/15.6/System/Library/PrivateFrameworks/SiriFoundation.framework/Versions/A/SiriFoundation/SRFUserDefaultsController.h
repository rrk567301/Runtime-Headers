@class NSString, NSDictionary, NSDate;

@interface SRFUserDefaultsController : NSUserDefaultsController

@property (getter=isStatusMenuVisible) char statusMenuVisible;
@property (readonly) NSString *effectiveMicrophoneIdentifier;
@property char preferBluetoothMicrophones;
@property (readonly) NSString *preferredBluetoothMicrophoneIdentifier;
@property (readonly) char isEffectiveMicrophoneInternal;
@property (readonly) char isDeviceInClamshellMode;
@property NSDictionary *keyboardShortcutDictionary;
@property NSDictionary *mostRecentCustomizedKeyboardShorcutDictionary;
@property (nonatomic, getter=isTypeToSiriEnabled) char typeToSiriEnabled;
@property (nonatomic, getter=isLockscreenEnabled) char lockscreenEnabled;
@property (nonatomic, getter=isVoiceTriggerUserEnabled) char voiceTriggerUserEnabled;
@property (nonatomic) double autoDismissDelay;
@property (readonly, nonatomic) double autoDismissTextToSpeechTimeout;
@property (nonatomic, getter=isContinuousSpellCheckingEnabled) char continuousSpellCheckingEnabled;
@property (getter=isGrammarCheckingEnabled) char grammarCheckingEnabled;
@property (getter=isSuggestionsEnabled) char suggestionsEnabled;
@property (retain) NSDate *dyingWishForInvocationDate;
@property (readonly) NSString *modeOverride;
@property (readonly, nonatomic) char designModeEnabled;
@property (nonatomic) char ignoreMicRequirement;
@property (readonly, nonatomic) char debugModeEnabled;
@property (readonly, nonatomic) char showReportConcernButton;
@property (readonly, nonatomic) NSDictionary *userHotKeyHoldCommandSpace;
@property (readonly, nonatomic) NSDictionary *userHotKeyHoldOptionSpace;
@property (readonly, nonatomic) NSDictionary *userHotKeyFunctionSpace;
@property (readonly, nonatomic) NSDictionary *userHotKeyLeftCommandTwice;
@property (readonly, nonatomic) NSDictionary *userHotKeyRightCommandTwice;
@property (readonly, nonatomic) NSDictionary *userHotKeyEitherCommandTwice;
@property (readonly, nonatomic) NSDictionary *userHotKeyDisabledNonSAE;
@property (readonly, nonatomic) NSDictionary *userHotKeyDisabledSAE;
@property (nonatomic) char userSignedUpForGM;
@property (nonatomic) char confirmSiriInvokedViaEitherCmdTwice;

+ (id)sharedUserDefaultsController;
+ (char)_canAccessUserDefaults;

- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (char)_isInternal;
- (void)_notifyStatusMenuVisibleDidChange;
- (char)autoDismissHidesCloseButton;
- (char)forceSATEnrolled;
- (char)forceSelectRandomVoiceOption;
- (char)forceVoiceTriggerAvailable;
- (char)forceVoiceTriggerDeviceTypeDistribution:(long long *)a0;
- (id)keyboardShortcutDictionaryWithSAEEnabled:(char)a0;
- (id)migrateCustomizedKeyboardShortcutIfNeeded:(id)a0;
- (id)mostRecentCustomizedKeyboardShorcutDictionaryWithSAEEnabled:(char)a0;
- (void)notifyInvocationSuppressionNoLongerHonored;
- (void)notifyUserDidSwitchOnVoiceTrigger;
- (void)notifyVoiceTriggerSuppressionNoLongerHonored;
- (id)preSAEKeyboardShortcutDictionary;
- (id)saeKeyboardShortcutDictionary;
- (void)setKeyboardShortcutDictionary:(id)a0 saeEnabled:(char)a1;
- (void)setMostRecentCustomizedKeyboardShorcutDictionary:(id)a0 saeEnabled:(char)a1;
- (void)setPreSAEKeyboardShortcutDictionary:(id)a0;
- (void)setSaeKeyboardShortcutDictionary:(id)a0;
- (void)setSkipPausingMedia:(char)a0;
- (char)shouldSkipPausingMedia;
- (void)updateStatusMenuVisibilityForEnablementChangeToState:(char)a0;
- (id)userHotkeyDisabledNonSAE;
- (id)userHotkeyDisabledSAE;

@end
