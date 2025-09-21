@interface SVXSessionUtils : NSObject

- (id)getLanguageCodeWithAllowsFallback:(char)a0 preferences:(id)a1;
- (char)isSpeechRecordingAllowedWithActivationContext:(id)a0;
- (char)isVoiceTriggerWithActivationContext:(id)a0;

@end
