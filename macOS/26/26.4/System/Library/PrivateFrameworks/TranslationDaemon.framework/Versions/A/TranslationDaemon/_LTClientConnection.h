@class NSString, NSXPCConnection, _LTTranslationServer, NSUUID;
@protocol _LTClientConnectionDelegate;

@interface _LTClientConnection : NSObject <_LTTranslationService> {
    NSXPCConnection *_connection;
    _LTTranslationServer *_server;
    BOOL _trusted;
    NSString *_trustedClientIdentifier;
    NSUUID *_speechSessionID;
    NSUUID *_languageStatusSessionID;
}

@property (weak, nonatomic) id<_LTClientConnectionDelegate> delegate;

- (void)cleanup;
- (void)clearCaches;
- (void)languageForText:(id)a0 completion:(id /* block */)a1;
- (void)selfLoggingInvocationStartedWithData:(id)a0 invocationStartedTier1Data:(id)a1;
- (void)textStreamingConfigurationWithCompletion:(id /* block */)a0;
- (void)languageAssetsWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_updateHotfix:(id /* block */)a0;
- (void)provideFeedback:(id)a0 withContext:(id)a1;
- (void)translateStreamingInput:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)translateParagraphs:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)removeLanguages:(id)a0;
- (void)onDeviceModeSupported:(id /* block */)a0;
- (void)task:(long long)a0 isSupportedInCountry:(id)a1 completion:(id /* block */)a2;
- (void)selfLoggingLanguageIdentificationCompletedWithLIDData:(id)a0;
- (void)addLanguages:(id)a0 useCellular:(BOOL)a1;
- (void)selfLoggingInvocationCancelledForIDs:(id)a0;
- (void)autoDetectSpeechUnsupportedPairsWithCompletion:(id /* block */)a0;
- (void)_purgeAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void)selfLoggingEventWithData:(id)a0;
- (void)installedLocalesForTask:(long long)a0 completion:(id /* block */)a1;
- (void)speak:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)preheatWithContext:(id)a0 completion:(id /* block */)a1;
- (void)languagesForText:(id)a0 completion:(id /* block */)a1;
- (void)startLanguageStatusChangeObservation:(id)a0 taskHint:(long long)a1 engineType:(long long)a2 completion:(id /* block */)a3;
- (void)_deleteHotfix:(id /* block */)a0;
- (void)startInstallRequest:(id)a0;
- (void)installedLocales:(id /* block */)a0;
- (void)languagesForText:(id)a0 usingModel:(unsigned long long)a1 strategy:(unsigned long long)a2 taskHint:(long long)a3 completion:(id /* block */)a4;
- (id)_clientDelegate;
- (void).cxx_destruct;
- (void)shouldPresentSystemFirstUseConsent:(id /* block */)a0;
- (void)_updateAllAssets:(id /* block */)a0;
- (void)cleanupOnDisconnect;
- (void)addSpeechAudioData:(id)a0;
- (void)startSpeechTranslationWithContext:(id)a0;
- (void)selfLoggingInvocationDidError:(id)a0 invocationId:(id)a1;
- (void)_offlineLanguageStatus:(id /* block */)a0;
- (void)translate:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)availableLocalePairsForTask:(long long)a0 completion:(id /* block */)a1;
- (void)endAudio;
- (void)attemptToCancelRequestsWithSessionID:(id)a0;
- (void)startTextToSpeechTranslationWithContext:(id)a0 text:(id)a1;
- (void)logRequestOfType:(id)a0 context:(id)a1;
- (id)initWithConnection:(id)a0 server:(id)a1 trusted:(BOOL)a2;
- (void)_getAssetSize:(id /* block */)a0;
- (void)_downloadAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateOVADStreamingState:(id)a0;
- (void)translateSentence:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)modalitiesPerLocaleWithCompletion:(id /* block */)a0;
- (void)cancelLanguageStatusChangeObservation:(id)a0;
- (void)configInfoForLocale:(id)a0 otherLocale:(id)a1 completion:(id /* block */)a2;
- (void)_purgeAllAssetsExcludingConfig:(BOOL)a0 completion:(id /* block */)a1;
- (void)assetRequestHandler:(id)a0;
- (void)onDeviceModeEnabled:(id /* block */)a0;
- (void)additionalLikelyPreferredLocalesForLocale:(id)a0 completion:(id /* block */)a1;
- (void)logWithRequestData:(id)a0;

@end
