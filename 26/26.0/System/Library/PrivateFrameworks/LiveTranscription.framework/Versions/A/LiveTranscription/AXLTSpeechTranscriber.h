@class _TtC17LiveTranscription15AXLCTranscriber, NSString, AVAudioSession, AXLTTranscriber, NSDate, _TtC17LiveTranscription23AXLiveCaptionSourceInfo, AVAudioEngine, AVAudioFormat;
@protocol AXLTTranscriberDelegateProtocol;

@interface AXLTSpeechTranscriber : NSObject <SFSpeechRecognizerDelegate, SFSpeechRecognitionTaskDelegate, AXLTTranscriberProtocol>

@property (retain, nonatomic) AVAudioEngine *audioEngine;
@property (retain, nonatomic) AVAudioSession *audioSession;
@property (retain, nonatomic) AVAudioFormat *audioFormat;
@property (retain, nonatomic) AXLTTranscriber *transcriber;
@property (nonatomic) int pid;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSDate *bufferLogTime;
@property (retain, nonatomic) NSDate *textLogTime;
@property (retain, nonatomic) NSDate *sessionStartTime;
@property (retain, nonatomic) _TtC17LiveTranscription15AXLCTranscriber *transcriberV2;
@property (retain, nonatomic) _TtC17LiveTranscription23AXLiveCaptionSourceInfo *source;
@property (nonatomic) BOOL suppressUsingIndependentInputRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AXLTTranscriberDelegateProtocol> delegate;
@property (readonly, nonatomic) BOOL isTranscribing;
@property (nonatomic) long long transcriberVersion;

- (void)cleanUp;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)setupAudioSession;
- (void)audioEngineConfigurationDidChange:(id)a0;
- (void)calcHistogramForBuffer:(id)a0;
- (void)mediaServicesWereReset:(id)a0;
- (void)resetTranscription;
- (void)setupAudioEngineTap;
- (void)setupTranscriberIfNeeded;
- (BOOL)startTranscription:(id *)a0;
- (BOOL)startTranscriptionWithLocale:(id)a0 error:(id *)a1;
- (BOOL)stopTranscription:(id *)a0;

@end
