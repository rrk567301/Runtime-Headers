@class AVAudioPlayer, NSString, AFQueue, NSOperationQueue, NSSpeechSynthesizer, NSMutableArray, AFVoiceInfo;
@protocol AFUISpeechSynthesisLocalDelegate, AFUISpeechSynthesisDelegate;

@interface AFUISpeechSynthesis : NSObject <AFQueueDelegate, AFUISpeechSynthesisElementDelegate, NSSpeechSynthesizerDelegate, AVAudioPlayerDelegate, AFUISpeechSynthesis> {
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
@property (retain, nonatomic) id<AFUISpeechSynthesisDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_speechSynthesizerWithVoice:(id)a0 downloadVoice:(BOOL)a1;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)cancel;
- (void)speechSynthesizer:(id)a0 didFinishSpeaking:(BOOL)a1;
- (BOOL)isSpeaking;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)audioPlayerDecodeErrorDidOccur:(id)a0 error:(id)a1;
- (void)_handleText:(id)a0;
- (void)queue:(id)a0 didEnqueueObjects:(id)a1;
- (void)setOutputVoice:(id)a0;
- (void)speechItemTags:(id)a0 finishedWithMessage:(unsigned int)a1;
- (void)invalidateOnMainThread;
- (void)speechSynthesisElementSynthesisEligibilityDidChange:(id)a0;
- (void)enqueueText:(id)a0 identifier:(id)a1 isPhonetic:(BOOL)a2 provisionally:(BOOL)a3 eligibleAfterDuration:(double)a4 preparationIdentifier:(id)a5 completion:(id /* block */)a6 animationIdentifier:(id)a7;
- (void)enqueueAudioData:(id)a0 identifier:(id)a1 provisionally:(BOOL)a2 eligibleAfterDuration:(double)a3 completion:(id /* block */)a4;
- (void)enqueueText:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)enqueuePhaticWithCompletion:(id /* block */)a0;
- (void)skipCurrentSynthesis;
- (void)prewarmIfNeeded;
- (void)deepFreezeSynthesizerIfNeeded;
- (void)_loadQueuedSynthesizerWithVoice:(id)a0 downloadVoice:(BOOL)a1;
- (void)_installQueuedSynthesizer;
- (void)_defrostSynthesizer;
- (BOOL)isSynthesisQueueEmpty;
- (void)_cancelByCancellingActiveElementsOnly:(BOOL)a0;
- (void)_enqueueText:(id)a0 audioData:(id)a1 identifier:(id)a2 isPhonetic:(BOOL)a3 provisionally:(BOOL)a4 eligibleAfterDuration:(double)a5 preparationIdentifier:(id)a6 synthesizesWhileRecording:(BOOL)a7 completion:(id /* block */)a8 animationIdentifier:(id)a9 isSilent:(BOOL)a10;
- (void)_processElementQueue;
- (void)_handleAudioData:(id)a0;
- (void)_processProvisionalElements;
- (unsigned long long)_AFUISetAudioSessionActiveOptionsForElement:(id)a0;

@end
