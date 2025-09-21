@class NSString, OS_dispatch_queue;

@interface SCROutputCoreSpeechComponent : SCROutputComponent <SCROutputSpeechComponentProtocol> {
    void /* unknown type, empty encoding */ synthesizer;
    void /* unknown type, empty encoding */ speechIdleScheduler;
    void /* unknown type, empty encoding */ executor;
    void /* unknown type, empty encoding */ outputFile;
    void /* unknown type, empty encoding */ targetComponent;
    void /* unknown type, empty encoding */ emptyMarkup;
    void /* unknown type, empty encoding */ SCRBrailleUnicodeStart;
    void /* unknown type, empty encoding */ SCRBrailleUnicodeEnd;
    void /* unknown type, empty encoding */ isStopping;
    void /* unknown type, empty encoding */ stoppingLock;
    void /* unknown type, empty encoding */ characterRangeCache;
    void /* function */ lastSpokenString;
}

@property (nonatomic, copy) NSString *lastSpokenString;
@property (nonatomic, readonly) BOOL speechActive;
@property (nonatomic, retain) OS_dispatch_queue *_SpeechSynthesizerConsoleSerialDispatchQueue;
@property (nonatomic, retain) struct __CFMessagePort { } *_speechSynthesizerConsoleRemoteMessagePort;

- (void)pause;
- (void)handleEvent:(id)a0;
- (void)stop;
- (void)resume;
- (id)init;
- (void).cxx_destruct;
- (void)setAudioDevice:(unsigned int)a0;
- (id)ssmlForTesting:(id)a0;
- (id)initWithName:(id)a0 userDefaults:(id)a1;
- (BOOL)isSpeechPaused;
- (id)markupForTesting:(id)a0;
- (BOOL)pauseOrContinueSpeech;
- (int)preflightSequentialSteps:(id)a0 runnerName:(id)a1;
- (void)replaceVOEmbeddedCommand:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inAction:(id)a2;
- (void)speak:(id)a0 owner:(id)a1;

@end
