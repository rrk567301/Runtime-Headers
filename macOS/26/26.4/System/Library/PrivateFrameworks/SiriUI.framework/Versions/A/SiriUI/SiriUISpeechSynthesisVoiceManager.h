@class NSDictionary;

@interface SiriUISpeechSynthesisVoiceManager : NSObject {
    NSDictionary *_voiceLanguageDict;
}

+ (id)sharedInstance;
+ (void)adjustDownloadedVoiceStatusAfterSiriEnabled:(BOOL)a0;

- (void).cxx_destruct;
- (id)init;
- (long long)preferredGenderForLanguage:(id)a0;

@end
