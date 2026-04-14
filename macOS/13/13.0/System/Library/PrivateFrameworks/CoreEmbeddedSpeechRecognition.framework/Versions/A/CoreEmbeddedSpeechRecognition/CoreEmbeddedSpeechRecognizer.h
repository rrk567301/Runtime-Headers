@class NSString, NSXPCConnection, NSData, NSError, NSObject;
@protocol OS_dispatch_queue, CoreEmbeddedSpeechRecognizerDelegate;

@interface CoreEmbeddedSpeechRecognizer : NSObject <CESRSpeechServiceDelegate, CoreEmbeddedSpeechRecognizerProvider> {
    BOOL _recognitionActive;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_esConnection;
    BOOL _hasRecognizedAnything;
    unsigned char _instanceUUID[16];
    NSString *_currentLanguage;
    NSError *_recognitionError;
    NSString *_preheatedProfileAssetPath;
    NSData *_preheatedProfile;
}

@property (readonly, weak, nonatomic) id<CoreEmbeddedSpeechRecognizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)purgeInstalledAssetsExceptLanguages:(id)a0 assetType:(unsigned long long)a1 error:(id *)a2;
+ (void)setAssetsPurgeabilityExceptLanguages:(id)a0 assetType:(unsigned long long)a1;
+ (void)resetCacheAndCompileAllAssets;
+ (id)speechProfileDataLastModifiedDataForLanguage:(id)a0;
+ (id)profilePathForLanguage:(id)a0 errorOut:(id *)a1;
+ (id)dictionaryWithContentsProfilePathForLanguage:(id)a0 errorOut:(id *)a1;
+ (id)purgeInstalledAssetsExceptLanguages:(id)a0 error:(id *)a1;
+ (id)offlineDictationStatusIgnoringCache:(BOOL)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_connection;
- (id)_service;
- (void)pauseRecognition;
- (id)_newConnection;
- (unsigned char[16] *)instanceUUID;
- (void)getOfflineDictationStatusWithCompletion:(id /* block */)a0;
- (void)sendSpeechCorrectionInfo:(id)a0 interactionIdentifier:(id)a1;
- (void)resumeRecognitionWithPrefixText:(id)a0 postfixText:(id)a1 selectedText:(id)a2;
- (id)_synchronousServiceWithErrorHandler:(id /* block */)a0;
- (void)addAudioPacket:(id)a0;
- (void)fetchAssetsForLanguage:(id)a0 completion:(id /* block */)a1;
- (void)preheatSpeechRecognitionWithLanguage:(id)a0 modelOverrideURL:(id)a1;
- (void)preheatSpeechRecognitionWithAssetConfig:(id)a0 preheatSource:(id)a1 modelOverrideURL:(id)a2;
- (void)startSpeechRecognitionWithParameters:(id)a0 didStartHandlerWithInfo:(id /* block */)a1;
- (void)startSpeechRecognitionWithParameters:(id)a0 didStartHandler:(id /* block */)a1;
- (void)finishAudio;
- (void)createSpeechProfileWithLanguage:(id)a0 modelOverridePath:(id)a1 JSONData:(id)a2 completion:(id /* block */)a3;
- (void)getOfflineAssetStatusIgnoringCache:(BOOL)a0 assetType:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)getOfflineAssetStatusIgnoringCache:(BOOL)a0 assetType:(unsigned long long)a1 withDetailedStatus:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)getOfflineDictationStatusIgnoringCache:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)fetchAssetsForAssetConfig:(id)a0 completion:(id /* block */)a1;
- (void)runAdaptationRecipeEvaluation:(id)a0 recordData:(id)a1 attachments:(id)a2 completion:(id /* block */)a3;
- (void)runCorrectedTextEvaluationWithAudioDatas:(id)a0 recordDatas:(id)a1 language:(id)a2 samplingRate:(unsigned long long)a3 caseSensitive:(BOOL)a4 skipLME:(BOOL)a5 wordSenseAccessListSet:(id)a6 completion:(id /* block */)a7;
- (void)readProfileAndUserDataWithLanguage:(id)a0 allowOverride:(BOOL)a1 completion:(id /* block */)a2;
- (void)writeDESRecord;
- (void)startMissingAssetDownload;
- (void)invalidatePersonalizedLM;
- (void)runEvaluationWithDESRecordDatas:(id)a0 language:(id)a1 recipe:(id)a2 attachments:(id)a3 fidesPersonalizedLMPath:(id)a4 fidesPersonalizedLMTrainingAsset:(id)a5 scrubResult:(BOOL)a6 completion:(id /* block */)a7;
- (oneway void)speechServiceDidSelectRecognitionModelWithModelProperties:(id)a0;
- (oneway void)speechServiceDidRecognizeTokens:(id)a0;
- (oneway void)speechServiceDidProcessAudioDuration:(double)a0;
- (oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(id)a0;
- (oneway void)speechServiceDidRecognizePackage:(id)a0;
- (oneway void)speechServiceDidFinishRecognitionWithStatistics:(id)a0 error:(id)a1;
- (oneway void)speechServiceDidProduceEndpointFeaturesWithWordCount:(long long)a0 trailingSilenceDuration:(long long)a1 eosLikelihood:(double)a2 pauseCounts:(id)a3 silencePosterior:(double)a4 processedAudioDurationInMilliseconds:(long long)a5;
- (oneway void)speechServiceDidProduceLoggablePackage:(id)a0;
- (oneway void)speechServiceDidRecognizeTokens:(id)a0 withMetadata:(id)a1;
- (oneway void)speechServiceDidRecognizePackage:(id)a0 withMetadata:(id)a1;
- (oneway void)speechServiceDidRecognizeFinalResultCandidatePackage:(id)a0;
- (void)updateSpeechProfileWithLanguage:(id)a0 modelOverridePath:(id)a1 completion:(id /* block */)a2;
- (id)modelPropertiesForAssetConfig:(id)a0 error:(id *)a1;
- (void)resetDESWithCompletion:(id /* block */)a0;
- (void)fetchUserDataForLanguage:(id)a0 completion:(id /* block */)a1;
- (void)runEvaluationWithDESRecordDatas:(id)a0 language:(id)a1 recipe:(id)a2 fidesPersonalizedLMPath:(id)a3 fidesPersonalizedLMTrainingAsset:(id)a4 scrubResult:(BOOL)a5 completion:(id /* block */)a6;
- (void)removePersonalizedLMForFidesOnly:(BOOL)a0;
- (void)deleteAllDESRecordsForDictationPersonalization;
- (void)invalidateUaapLM;
- (id)initWithDelegate:(id)a0 instanceUUID:(unsigned char[16])a1;
- (id)_serviceWithFunctionName:(id)a0 errorHandler:(id /* block */)a1;

@end
