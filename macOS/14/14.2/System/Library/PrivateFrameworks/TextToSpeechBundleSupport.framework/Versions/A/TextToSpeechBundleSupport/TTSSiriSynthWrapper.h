@class TTSSpeechString, NSString, AVAudioConverter, TTSRulesetRunner, NSMutableOrderedSet, NSObject, AVAudioFormat;
@protocol TTSSiriSynthWrapperDelegate, OS_dispatch_queue;

@interface TTSSiriSynthWrapper : NSObject

@property (nonatomic) void *synthesizer;
@property (weak, nonatomic) id<TTSSiriSynthWrapperDelegate> delegate;
@property (retain, nonatomic) NSMutableOrderedSet *voiceResources;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) TTSRulesetRunner *ruleSetRunner;
@property (retain, nonatomic) TTSSpeechString *processedSpeechString;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synthesisQueue;
@property BOOL synthesizing;
@property (retain, nonatomic) AVAudioFormat *engineFormat;
@property (retain, nonatomic) AVAudioFormat *outputFormat;
@property (retain, nonatomic) AVAudioConverter *bufferConverter;
@property (nonatomic) float pitch;
@property (nonatomic) float pitchRange;
@property (nonatomic) float duration;
@property (nonatomic) float energy;
@property (nonatomic) float tilt;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stopSynthesis;
- (id)_applyPostRuleRewrites:(id)a0;
- (id)_rawLiteralCharacterRegexForCurrentLanguage;
- (void)_setProsodyParameters;
- (id)initWithVoicePath:(id)a0 language:(id)a1 delegate:(id)a2;
- (void)loadRuleset:(id)a0;
- (BOOL)loadVoiceResource:(id)a0;
- (void)synthesizeString:(id)a0;
- (void)unloadAllVoiceResources;
- (BOOL)unloadVoiceResource:(id)a0;

@end
