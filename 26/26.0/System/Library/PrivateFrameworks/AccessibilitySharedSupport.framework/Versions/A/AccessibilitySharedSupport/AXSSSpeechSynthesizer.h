@class AVSpeechSynthesisVoice, AVSpeechSynthesizer;

@interface AXSSSpeechSynthesizer : NSObject

@property (readonly, nonatomic) AVSpeechSynthesizer *synth;
@property (nonatomic) unsigned int audioDeviceId;
@property (readonly, nonatomic) BOOL speaking;
@property (retain, nonatomic) AVSpeechSynthesisVoice *voice;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)stopSpeaking;
- (void)pauseSpeaking;
- (void)resumeSpeaking;
- (void)startSpeakingString:(id)a0 languageCode:(id)a1;

@end
