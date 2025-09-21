@class SVXSessionUtils, SVXNSLocaleFactory;

@interface SVXSpeechSynthesisUtils : NSObject {
    SVXNSLocaleFactory *_localeFactory;
    SVXSessionUtils *_sessionUtils;
}

- (id)init;
- (void).cxx_destruct;
- (id)createAudioFromUIAudioData:(id)a0;
- (id)createLocaleFromLanguageCode:(id)a0;
- (id)createPhaticPrompt;
- (long long)getGenderFromVoiceGender:(long long)a0;
- (id)getLocaleWithAllowsFallback:(char)a0 preferences:(id)a1;
- (id)getOutputVoiceInfoWithAllowsFallback:(char)a0 preferences:(id)a1;
- (id)initWithLocaleFactory:(id)a0 sessionUtils:(id)a1;
- (char)requestHasSpeakableContents:(id)a0;

@end
