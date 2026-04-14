@class NSString, NSDictionary, NSDate;

@interface SRFUserDefaultsController : NSUserDefaultsController

@property (getter=isStatusMenuVisible) BOOL statusMenuVisible;
@property (readonly) NSString *effectiveMicrophoneIdentifier;
@property BOOL preferBluetoothMicrophones;
@property (readonly) NSString *preferredBluetoothMicrophoneIdentifier;
@property (readonly) BOOL isEffectiveMicrophoneInternal;
@property NSDictionary *keyboardShortcutDictionary;
@property NSDictionary *mostRecentCustomizedKeyboardShorcutDictionary;
@property (nonatomic, getter=isTypeToSiriEnabled) BOOL typeToSiriEnabled;
@property (nonatomic, getter=isLockscreenEnabled) BOOL lockscreenEnabled;
@property (nonatomic, getter=isVoiceTriggerUserEnabled) BOOL voiceTriggerUserEnabled;
@property (nonatomic) double autoDismissDelay;
@property (readonly, nonatomic) double autoDismissTextToSpeechTimeout;
@property (nonatomic, getter=isContinuousSpellCheckingEnabled) BOOL continuousSpellCheckingEnabled;
@property (getter=isGrammarCheckingEnabled) BOOL grammarCheckingEnabled;
@property (retain) NSDate *dyingWishForInvocationDate;
@property (readonly) NSString *modeOverride;
@property (readonly, nonatomic) BOOL designModeEnabled;
@property (nonatomic) BOOL ignoreMicRequirement;

+ (id)sharedUserDefaultsController;
+ (BOOL)_canAccessUserDefaults;

- (id)awakeAfterUsingCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)forceSelectRandomVoiceOption;
- (BOOL)forceVoiceTriggerAvailable;
- (void)notifyUserDidSwitchOnVoiceTrigger;
- (BOOL)forceSATEnrolled;
- (void)_notifyStatusMenuVisibleDidChange;
- (void)notifyVoiceTriggerSuppressionNoLongerHonored;
- (void)notifyInvocationSuppressionNoLongerHonored;
- (id)keyboardShortcutDictionary;
- (void)setKeyboardShortcutDictionary:(id)a0;
- (id)mostRecentCustomizedKeyboardShorcutDictionary;
- (void)setMostRecentCustomizedKeyboardShorcutDictionary:(id)a0;
- (BOOL)autoDismissHidesCloseButton;
- (BOOL)shouldSkipPausingMedia;
- (void)setSkipPausingMedia:(BOOL)a0;
- (BOOL)forceVoiceTriggerDeviceTypeDistribution:(long long *)a0;

@end
