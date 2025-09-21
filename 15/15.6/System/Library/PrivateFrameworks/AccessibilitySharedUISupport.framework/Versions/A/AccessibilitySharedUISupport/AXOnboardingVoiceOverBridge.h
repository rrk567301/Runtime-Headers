@interface AXOnboardingVoiceOverBridge : NSObject

+ (float)getVolume;
+ (void)setSpeakingRate:(float)a0;
+ (char)voiceOverEnabled;
+ (char)deviceHasHomeButton;
+ (char)isInBuddy;
+ (float)getSpeakingRate;
+ (void)setVOTutorialStartedFromSplash:(char)a0;
+ (void)connectToVO;
+ (void)enableVoiceOver:(char)a0;
+ (void)enableVoiceOverHints:(char)a0;
+ (id)getRecognizedGesture;
+ (id)getRotorName;
+ (id)getVoice;
+ (id)getVoiceOverEnabledDefaultName;
+ (id)getVoiceOverHintsEnabledDefaultName;
+ (void)initializeSCRKeyboard;
+ (char)isVoiceOverHintsEnabled;
+ (id)keyboardShortcutSpelledOutForCommand:(id)a0;
+ (id)keyboardShortcutStringForCommand:(id)a0;
+ (void)screenReaderSendCommandsToAllow:(id)a0;
+ (void)screenReaderSendCommandsToIgnore:(id)a0;
+ (id)setRecognizedGesture;
+ (void)setVOSplashScreenEnabled:(char)a0;
+ (void)setVOTutorialUsageConfirmed:(char)a0;
+ (id)sfSymbolsForCommand:(id)a0;
+ (void)synthesizerSpeakString:(id)a0;
+ (void)synthesizerStopSpeaking;
+ (char)triggerEventCommand:(id)a0;
+ (char)voSplashScreenEnabled;
+ (char)voTutorialStartedFromSplash;
+ (char)voTutorialUsageConfirmed;

@end
