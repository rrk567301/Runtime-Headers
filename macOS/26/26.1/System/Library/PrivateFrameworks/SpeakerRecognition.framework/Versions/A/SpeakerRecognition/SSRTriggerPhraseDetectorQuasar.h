@class _EARSyncSpeechRecognizer, NSString;

@interface SSRTriggerPhraseDetectorQuasar : NSObject {
    _EARSyncSpeechRecognizer *_syncRecognizer;
    NSString *_locale;
}

- (id)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (void)reset;
- (void).cxx_destruct;
- (id)endAudio;
- (id)initWithLocale:(id)a0 configPath:(id)a1 resourcePath:(id)a2;

@end
