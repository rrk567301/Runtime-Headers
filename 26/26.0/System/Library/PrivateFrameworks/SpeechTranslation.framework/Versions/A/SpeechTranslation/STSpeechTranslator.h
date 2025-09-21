@class STSpeechTranslatorConfiguration, AVAudioFormat;

@interface STSpeechTranslator : NSObject <_LTStreamingUtteranceTranslatorDelegate, STSpeechTranslating> {
    void /* unknown type, empty encoding */ speechAnalyzer;
    void /* unknown type, empty encoding */ utteranceTranslator;
    void /* unknown type, empty encoding */ ttsSynthesizer;
    void /* unknown type, empty encoding */ opusDecoder;
    void /* unknown type, empty encoding */ pcmConverter;
}

@property (nonatomic, retain) STSpeechTranslatorConfiguration *configuration;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, retain) AVAudioFormat *preferredOutputAudioFormat;
@property (nonatomic, readonly) AVAudioFormat *currentOutputFormat;

+ (void)preferredInputAudioFormatForLocale:(id)a0 completion:(id /* block */)a1;

- (id)init;
- (void)finishAudio;
- (void)stop:(id /* block */)a0;
- (void).cxx_destruct;
- (void)start:(id /* block */)a0;
- (void)addAudio:(id)a0;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;
- (void)translator:(id)a0 didEncounterError:(id)a1;
- (void)translator:(id)a0 didProduceSpeakableOutput:(id)a1;
- (void)translator:(id)a0 didProduceTranslatedOutputs:(id)a1;
- (void)translatorDidFinish:(id)a0;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1 delegate:(id)a2;

@end
