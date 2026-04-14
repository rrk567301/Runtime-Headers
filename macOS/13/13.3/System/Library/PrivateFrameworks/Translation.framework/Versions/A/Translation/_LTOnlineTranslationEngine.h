@class _LTTextToSpeechCache, NSString, FTMtService, _LTBatchTranslationResponseHandler, NSDate, NSOperationQueue, FTBlazarService, AFSettingsConnection, _LTOspreySpeechTranslationSession, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _LTOnlineTranslationEngine : NSObject <_LTTranslationEngine> {
    NSOperationQueue *_sendQueue;
    FTMtService *_service;
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
    AFSettingsConnection *_assistantSettingsConnection;
    long long _dataSharingOptInStatus;
}

@property (retain, nonatomic) _LTTextToSpeechCache *ttsCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)blazarServiceWithBundleID:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)endpoint;
- (void)endAudio;
- (id)_webTaskService;
- (BOOL)translatesPair:(id)a0;
- (id)_blazarService;
- (BOOL)_hasOngoingSpeechSession;
- (id)_serviceForTask:(long long)a0;
- (id)_siriService;
- (void)_speechSessionCompletedWithError:(id)a0;
- (id)_systemService;
- (id)_tokenizeString:(id)a0 inLocale:(id)a1;
- (void)_translateParagraph:(id)a0 index:(long long)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)addSpeechAudioData:(id)a0;
- (void)cancelServerTimeout;
- (void)cancelSpeechTranslation;
- (void)preheatAsynchronously:(BOOL)a0 withContext:(id)a1;
- (void)sendBatchTranslationRequestWithDelegate:(id)a0;
- (void)serverTimeoutFired;
- (void)setLanguagesRecognized:(id)a0;
- (void)speak:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)startServerTimeoutTimer;
- (void)startSpeechTranslationWithContext:(id)a0 delegate:(id)a1;
- (void)startTextToSpeechTranslationWithContext:(id)a0 text:(id)a1 delegate:(id)a2;
- (void)translate:(id)a0 withContext:(id)a1 paragraphResult:(id /* block */)a2 completion:(id /* block */)a3;
- (void)translateSentence:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)updateServerTimeout;

@end
