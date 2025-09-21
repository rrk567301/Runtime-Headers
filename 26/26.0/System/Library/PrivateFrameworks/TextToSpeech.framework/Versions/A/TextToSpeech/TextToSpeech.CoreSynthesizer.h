@class NSError, TTSWrappedAudioQueue, NSArray, NSString, AVAudioBuffer, NSURL, NSLocale, AVSpeechUtterance, AVSpeechSynthesizer, _TtC12TextToSpeech13VoiceResolver, NSDictionary, TTSSpeechVoice;

@interface TextToSpeech.CoreSynthesizer : NSObject {
    void /* unknown type, empty encoding */ _executor;
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _voices;
    void /* unknown type, empty encoding */ schedulingQueue;
    void /* unknown type, empty encoding */ _bufferedAudioQueue;
    void /* unknown type, empty encoding */ _speechRenderer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_offlineChain;
    void /* function */ _bundleIdentifier;
    void /* unknown type, empty encoding */ _selectionProviders;
    void /* unknown type, empty encoding */ _effectManager;
    void /* function */ _effects;
    void /* unknown type, empty encoding */ _substitutions;
    void /* unknown type, empty encoding */ _nextWordBlock;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (nonatomic, readonly) BOOL isSpeaking;
@property (nonatomic, readonly) BOOL isPaused;
@property (nonatomic, retain) _TtC12TextToSpeech13VoiceResolver *_voiceResolver;
@property (nonatomic, retain) _TtC12TextToSpeech13VoiceResolver *voiceResolver;
@property (nonatomic, retain) TTSWrappedAudioQueue *_audioQueue;
@property (nonatomic, retain) TTSWrappedAudioQueue *audioQueue;
@property (nonatomic, copy) NSArray *offlineChain;
@property (nonatomic, copy) NSString *_bundleIdentifier;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSArray *_effects;
@property (nonatomic, copy) NSArray *effects;
@property (nonatomic) unsigned int audioDevice;
@property (nonatomic) unsigned int audioQueueFlags;

- (id)init;
- (void)stopWithCompletionHandler:(void (^)(void))a0;
- (void).cxx_destruct;
- (BOOL)continueSpeaking;
- (void)pauseSpeakingAt:(long long)a0 completionHandler:(void (^)(BOOL))a1;
- (void)setLegacySubstitutions:(id)a0;
- (void)speak:(AVSpeechUtterance *)a0 synth:(AVSpeechSynthesizer *)a1 completionHandler:(void (^)(void))a2;
- (void)speakWithRequest:(id)a0 language:(id)a1 synthesizer:(id)a2 completionHandler:(id /* block */)a3;
- (void)stopSpeakingAt:(long long)a0 completionHandler:(id /* block */)a1;
- (void)voiceWithIdentifier:(NSString *)a0 completionHandler:(void (^)(TTSSpeechVoice *))a1;
- (void)voiceWithLocale:(NSLocale *)a0 completionHandler:(void (^)(TTSSpeechVoice *))a1;
- (void)write:(AVSpeechUtterance *)a0 toBufferCallback:(void (^)(AVAudioBuffer *))a1 synth:(AVSpeechSynthesizer *)a2 completionHandler:(void (^)(void))a3;
- (void)write:(AVSpeechUtterance *)a0 toBufferCallback:(void (^)(AVAudioBuffer *))a1 toMarkerCallback:(void (^)(NSArray *))a2 synth:(AVSpeechSynthesizer *)a3 completionHandler:(void (^)(void))a4;
- (void)writeWithSpeechPhrase:(NSString *)a0 toAudioFile:(NSURL *)a1 withAudioSettings:(NSDictionary *)a2 completionHandler:(void (^)(NSError *))a3;

@end
