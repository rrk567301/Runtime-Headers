@class NSString;

@interface _TtCC22AccessibilityUtilities13AXPreferences21SpokenContentSettings : NSObject {
    void /* unknown type, empty encoding */ _voiceSelectionsByLanguage;
    void /* unknown type, empty encoding */ _macroLanguageDisambiguations;
}

- (id)init;
- (void).cxx_destruct;
- (void)setWithVoiceId:(NSString *)a0 forLanguage:(NSString *)a1 completionHandler:(void (^)(void))a2;
- (void)speechVoiceIdentifierForLanguage:(NSString *)a0 exists:(BOOL *)a1 completionHandler:(void (^)(NSString *))a2;

@end
