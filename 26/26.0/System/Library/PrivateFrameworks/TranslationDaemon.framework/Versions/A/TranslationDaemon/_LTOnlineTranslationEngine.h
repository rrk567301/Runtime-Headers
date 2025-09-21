@class NSDate, NSString, _LTTextToSpeechCache, _LTBatchTranslationResponseHandler, _LTDSELFLoggingManager, FTBlazarService, NSObject, _LTOspreySpeechTranslationSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _LTOnlineTranslationEngine : NSObject <_LTTranslationEngine> {
    FTBlazarService *_blazarService;
    FTBlazarService *_siriService;
    FTBlazarService *_systemService;
    FTBlazarService *_webTaskService;
    NSObject<OS_dispatch_queue> *_translationQueue;
    _LTOspreySpeechTranslationSession *_speechSession;
    _LTBatchTranslationResponseHandler *batchTranslationResponseHandler;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_serverTimer;
    NSDate *_startTime;
    _LTDSELFLoggingManager *_selfLoggingManager;
}

@property (retain, nonatomic) _LTTextToSpeechCache *ttsCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)blazarServiceWithBundleID:(id)a0;

- (void)startTextToSpeechTranslationWithContext:(id)a0 text:(id)a1 delegate:(id)a2;
- (void)translateSentence:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)endAudio;
- (void)startSpeechTranslationWithContext:(id)a0 delegate:(id)a1;
- (void)endpoint;
- (void)speak:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)addSpeechAudioData:(id)a0;
- (void).cxx_destruct;
- (id)_siriService;
- (id)_webTaskService;
- (void)setLanguagesRecognized:(id)a0 context:(id)a1;
- (BOOL)translatesPair:(id)a0;
- (id)_blazarService;
- (void)_createOrUpdateBatchTranslationRequestWithParagraph:(id)a0 index:(long long)a1 context:(id)a2 completion:(id /* block */)a3;
- (BOOL)_hasOngoingSpeechSession;
- (id)_serviceForTask:(long long)a0;
- (void)_speechSessionCompletedWithError:(id)a0;
- (id)_systemService;
- (id)_tokenizeString:(id)a0 inLocale:(id)a1;
- (void)cancelServerTimeout;
- (void)cancelSpeechTranslation:(BOOL)a0;
- (id)initWithSelfLoggingManager:(id)a0;
- (void)preheatAsynchronously:(BOOL)a0 withContext:(id)a1;
- (void)sendBatchTranslationRequestWithDelegate:(id)a0;
- (void)serverTimeoutFired;
- (void)startServerTimeoutTimer;
- (void)translate:(id)a0 withContext:(id)a1 paragraphResult:(id /* block */)a2 completion:(id /* block */)a3;
- (void)translateStreamingInput:(id)a0 context:(id)a1 stabilizer:(id)a2 completion:(id /* block */)a3;
- (void)updateServerTimeout;

@end
