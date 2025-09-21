@class NSMutableArray, NSUUID, NSString, NSObject, AVAudioFormat;
@protocol OS_dispatch_queue, STSpeechTranslatorClientDelegate, _STPeerProviding;

@interface STSpeechTranslatorClient : NSObject <_STSpeechTranslatorClientConforming> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _invalidated;
    id<STSpeechTranslatorClientDelegate> _delegate;
    id<_STPeerProviding> _peerProvider;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id /* block */ _startHandler;
    AVAudioFormat *_preferredTranslatedAudioFormat;
    AVAudioFormat *_preferredSourceAudioFormat;
    BOOL _preferredSourceAudioFormatLookedUp;
    NSMutableArray *_formatHandlers;
}

@property (retain, nonatomic) AVAudioFormat *preferredTranslatedAudioFormat;
@property (retain, nonatomic) NSUUID *translatorIdentifier;
@property (nonatomic) BOOL produceTranscripts;
@property (nonatomic) BOOL produceTranslatedText;
@property (nonatomic) BOOL produceAudio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_newPeerContextWithConfiguration:(id)a0;
+ (id)_newPeerContextWithTranslatorIdentifier:(id)a0;

- (void)invalidate;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (void).cxx_destruct;
- (id)initWithTranslatorIdentifier:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (void)lookUpPreferredInputAudioFormatWithCompletionHandler:(id /* block */)a0;
- (void)translateAudioSamples:(id)a0;
- (void)stopTranslation;
- (void)startTranslationWithCompletionHandler:(id /* block */)a0;
- (id)_descriptionWhileLocked;
- (id)_initWithPeerContext:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (id)_initWithPeerProvider:(id)a0 peerContext:(id)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (void)_invalidateWhileLocked;
- (void)_notifyClientOfStartWithError:(id)a0;
- (void)_notifyCompletionHandlers:(id)a0 withSourceFormat:(id)a1 currentlyHoldingLock:(BOOL)a2;
- (void)_prefetchPreferredSourceAudioFormat;
- (void)_processPreferredSourceFormatResponse:(id)a0 currentlyHoldingLock:(BOOL)a1;
- (void)_setUpDelegateQueue:(id)a0;
- (BOOL)_setUpPeerProviderWhileLocked:(id)a0 withContext:(id)a1;
- (void)audioGenerationDidFinish;
- (void)clientShouldDisconnect;
- (void)didGenerateTranslatedAudio:(id)a0;
- (void)pauseTranslationWithReason:(id)a0;
- (void)producedTranscription:(id)a0;
- (void)producedTranslation:(id)a0;
- (void)resumeTranslation;
- (void)translationDidPauseWithReason:(id)a0;
- (void)translationDidResume;
- (void)translationDidStart;
- (void)translationDidStopWithError:(id)a0;
- (void)willStartTranslatedAudioWithMetadata:(id)a0;

@end
