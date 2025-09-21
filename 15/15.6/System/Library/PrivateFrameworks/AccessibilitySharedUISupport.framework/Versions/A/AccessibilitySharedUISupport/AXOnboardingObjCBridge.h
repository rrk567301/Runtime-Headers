@interface AXOnboardingObjCBridge : NSObject

@property (nonatomic) char _isListening;

+ (id)sharedInstance;

- (char)heySiriEnabled;
- (char)isSameLangaugeFromLocaleIdentifier:(id)a0 secondLocaleIdentifier:(id)a1;
- (void)disableSoftwareKeyboard;
- (void)enableSoftwareKeyboard;
- (void)enableVoiceControl:(char)a0;
- (id)getVoiceControlEnabledDefaultName;
- (id)localizedVoiceControlCommand:(id)a0;
- (void)sandboxInit;
- (char)shouldShowCapitalizationPage;
- (id)systemBackground;
- (void)toggleVoiceControl;
- (char)voiceControlEnabled;

@end
