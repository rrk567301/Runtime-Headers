@class _LTTranslationContext, NSString, _LTTextToSpeechCache, NSError, _LTDSELFLoggingManager, NSMutableDictionary, _LTSpeechCompressor, NSMutableArray, _LTLanguageDetectionResult, NSObject, FTSpeechTranslationStreamingContext;
@protocol _LTSpeechTranslationDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface _LTOspreySpeechTranslationSession : NSObject <FTSpeechTranslationResponseDelegate, _LTSpeechCompressorDelegate> {
    FTSpeechTranslationStreamingContext *_streamContext;
    _LTTranslationContext *_context;
    char _sentAudio;
    char _sentEndAudio;
    char _endpointedSpeech;
    char _didReceiveAudioLimitExceededResponse;
    char _didReceivePartialRecognitionResponse;
    char _didReceiveFinalRecognitionResponse;
    char _didReceiveTranslationResponse;
    char _didReceiveTTSResponse;
    char _didReceiveFinalBlazarResponse;
    char _didTimeout;
    char _didSendTranslationDidFinish;
    NSError *_error;
    _LTLanguageDetectionResult *_lidResult;
    NSMutableDictionary *_finalASRResults;
    NSString *_cachedUserTypedText;
    NSMutableArray *_mtResults;
    NSMutableArray *_confirmedTranslations;
    _LTSpeechCompressor *_speechCompressor;
    unsigned long long _audioPacketCount;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_serverTimer;
    _LTDSELFLoggingManager *_selfLoggingManager;
}

@property (weak, nonatomic) id<_LTSpeechTranslationDelegate> delegate;
@property (nonatomic) double initialOnlineTimeout;
@property (nonatomic) double onlineTimeout;
@property (nonatomic) double endpointTimeout;
@property (retain, nonatomic) _LTTextToSpeechCache *ttsCache;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) char isCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endpoint;
- (void)cancel;
- (void)initCommon;
- (void)sendAnalyticsEvent;
- (void)translationDidFinishWithError:(id)a0;
- (void)sendAudioData:(id)a0;
- (id)_bestSourceTextForResponse:(id)a0;
- (void)_handleAudioLimitExceededResponse:(id)a0;
- (void)_handleFinalBlazarResponse:(id)a0;
- (void)_handleFinalRecognitionResponse:(id)a0;
- (void)_handlePartialRecognitionResponse:(id)a0;
- (void)_handleServerEndpointFeatures:(id)a0;
- (void)_handleTTSResponse:(id)a0;
- (void)_handleTranslationResponse:(id)a0;
- (id)_primaryLanguageRecognized;
- (char)_receivedEmptyFinalASRResults;
- (id)_translationForLocale:(id)a0;
- (void)cancelServerTimeout;
- (void)confirmDataIfNeeded;
- (void)didCompressPackets:(id)a0 totalPacketCount:(unsigned long long)a1;
- (id)initWithService:(id)a0 context:(id)a1 delegate:(id)a2 selfLoggingManager:(id)a3;
- (id)initWithService:(id)a0 context:(id)a1 text:(id)a2 delegate:(id)a3 selfLoggingManager:(id)a4;
- (void)sendEndAudio;
- (void)serverTimeoutFired;
- (void)setLanguagesRecognized:(id)a0;
- (void)startServerTimeoutTimer;
- (void)streamDidReceiveSpeechTranslationStreamingResponse:(id)a0;
- (void)streamFailVerifySpeechTranslationStreamingResponse:(id)a0;
- (void)updateServerTimeout:(double)a0;

@end
