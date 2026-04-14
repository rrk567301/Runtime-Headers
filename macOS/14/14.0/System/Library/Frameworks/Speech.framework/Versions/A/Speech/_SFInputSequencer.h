@class SpeechAnalyzerClientInputSequencerInternal;

@interface _SFInputSequencer : NSObject {
    SpeechAnalyzerClientInputSequencerInternal *_underlyingObject;
}

@property (readonly, nonatomic) SpeechAnalyzerClientInputSequencerInternal *underlyingObject;

- (id)init;
- (void).cxx_destruct;
- (void)addAudio:(id)a0;
- (void)finishAudio;

@end
