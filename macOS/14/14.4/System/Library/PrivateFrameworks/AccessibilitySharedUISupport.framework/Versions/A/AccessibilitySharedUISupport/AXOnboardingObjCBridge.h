@interface AXOnboardingObjCBridge : NSObject

@property (nonatomic) BOOL _isListening;

+ (id)sharedInstance;

- (BOOL)heySiriEnabled;
- (void)disableSoftwareKeyboard;
- (void)enableSoftwareKeyboard;
- (void)enableVoiceControl:(BOOL)a0;
- (id)localizedVoiceControlCommand:(id)a0;
- (void)sandboxInit;
- (id)systemBackground;
- (void)toggleVoiceControl;
- (BOOL)voiceControlEnabled;

@end
