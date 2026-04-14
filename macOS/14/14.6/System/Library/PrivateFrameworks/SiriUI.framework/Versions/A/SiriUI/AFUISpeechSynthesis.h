@class AVAudioPlayer, NSString, AFQueue, NSOperationQueue, NSSpeechSynthesizer, NSMutableArray, AFVoiceInfo;
@protocol AFUISpeechSynthesisLocalDelegate, SRUIFSpeechSynthesizerDelegate;

@interface AFUISpeechSynthesis : NSObject <AFQueueDelegate, AFUISpeechSynthesisElementDelegate, NSSpeechSynthesizerDelegate, AVAudioPlayerDelegate, AFUISpeechSynthesis, SRUIFSpeechSynthesizing> {
    NSSpeechSynthesizer *_queuedSynthesizer;
    AFVoiceInfo *_outputVoice;
    double _lastSpeechJob;
}

@property (readonly, nonatomic, getter=_elementQueue) AFQueue *elementQueue;
@property (readonly, nonatomic, getter=_activeElements) NSMutableArray *activeElements;
@property (readonly, nonatomic, getter=_operationQueue) NSOperationQueue *operationQueue;
@property (retain, nonatomic, getter=_synthesizer) NSSpeechSynthesizer *synthesizer;
@property (retain, nonatomic) AVAudioPlayer *serverAudioPlayer;
@property BOOL synthNeedsDefrost;
@property (weak, nonatomic) id<AFUISpeechSynthesisLocalDelegate> localDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SRUIFSpeechSynthesizerDelegate> delegate;

+ (id)_speechSynthesizerWithVoice:(id)a0 downloadVoice:(BOOL)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)cancel;
- (void)_handleText:(id)a0;
- (void)audioPlayerDecodeErrorDidOccur:(id)a0 error:(id)a1;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (BOOL)isSpeaking;
- (void)speechSynthesizer:(id)a0 didFinishSpeaking:(BOOL)a1;
- (void)setOutputVoice:(id)a0;
- (void)queue:(id)a0 didEnqueueObjects:(id)a1;
- (void)speechItemTags:(id)a0 finishedWithMessage:(unsigned int)a1;
- (void)prewarmIfNeeded;
- (unsigned long long)_AFUISetAudioSessionActiveOptionsForElement:(id)a0;
- (void)_cancelByCancellingActiveElementsOnly:(BOOL)a0;
- (void)_defrostSynthesizer;
- (void)_enqueueText:(id)a0 audioData:(id)a1 identifier:(id)a2 isPhonetic:(BOOL)a3 provisionally:(BOOL)a4 eligibleAfterDuration:(double)a5 canUseServerTTS:(BOOL)a6 preparationIdentifier:(id)a7 synthesizesWhileRecording:(BOOL)a8 completion:(id /* block */)a9 animationIdentifier:(id)a10 isSilent:(BOOL)a11;
- (void)_handleAudioData:(id)a0;
- (void)_installQueuedSynthesizer;
- (BOOL)_isSynthesisQueueEmpty;
- (void)_loadQueuedSynthesizerWithVoice:(id)a0 downloadVoice:(BOOL)a1;
- (void)_processElementQueue;
- (void)_processProvisionalElements;
- (void)deepFreezeSynthesizerIfNeeded;
- (void)duckTTSVolumeTo:(float)a0 rampTime:(double)a1 completion:(id /* block */)a2;
- (void)enqueueAudioData:(id)a0 identifier:(id)a1 provisionally:(BOOL)a2 canUseServerTTS:(BOOL)a3 eligibleAfterDuration:(double)a4 completion:(id /* block */)a5;
- (void)enqueuePhaticWithCompletion:(id /* block */)a0;
- (void)enqueueSpeechSynthesisRequest:(id)a0;
- (void)enqueueText:(id)a0 identifier:(id)a1 canUseServerTTS:(BOOL)a2 completion:(id /* block */)a3;
- (void)enqueueText:(id)a0 identifier:(id)a1 isPhonetic:(BOOL)a2 provisionally:(BOOL)a3 eligibleAfterDuration:(double)a4 canUseServerTTS:(BOOL)a5 preparationIdentifier:(id)a6 completion:(id /* block */)a7 animationIdentifier:(id)a8;
- (void)invalidateOnMainThread;
- (void)isSynthesisQueueEmpty:(id /* block */)a0;
- (void)processDelayedItem:(id)a0;
- (void)skipCurrentSynthesis;
- (void)speechSynthesisElementSynthesisEligibilityDidChange:(id)a0;

@end
