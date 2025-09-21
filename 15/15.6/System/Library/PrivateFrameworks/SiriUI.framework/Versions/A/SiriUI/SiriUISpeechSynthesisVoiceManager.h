@class NSDictionary;

@interface SiriUISpeechSynthesisVoiceManager : NSObject {
    NSDictionary *_voiceLanguageDict;
}

+ (id)sharedInstance;
+ (void)adjustDownloadedVoiceStatusAfterSiriEnabled:(char)a0;

- (id)init;
- (void).cxx_destruct;
- (long long)preferredGenderForLanguage:(id)a0;

@end
