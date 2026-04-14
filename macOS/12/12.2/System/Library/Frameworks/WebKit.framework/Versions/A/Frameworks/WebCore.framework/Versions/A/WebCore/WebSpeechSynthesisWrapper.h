@class NSString;

@interface WebSpeechSynthesisWrapper : NSObject <NSSpeechSynthesizerDelegate> {
    void *m_synthesizerObject;
    void *m_utterance;
    struct RetainPtr<NSSpeechSynthesizer> { void *m_ptr; } m_synthesizer;
    float m_basePitch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)resume;
- (id).cxx_construct;
- (void)pause;
- (void)cancel;
- (void)speechSynthesizer:(id)a0 didFinishSpeaking:(BOOL)a1;
- (void)speechSynthesizer:(id)a0 willSpeakWord:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 ofString:(id)a2;
- (void)updateBasePitchForSynthesizer;
- (float)convertPitchToNSSpeechValue:(float)a0;
- (float)convertRateToWPM:(float)a0;
- (id)initWithSpeechSynthesizer:(void *)a0;
- (void)speakUtterance:(void *)a0;

@end
