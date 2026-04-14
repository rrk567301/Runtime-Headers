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
- (void)attemptToCancelRequestsWithSessionID:(id)a0;
- (void)selfLoggingEventWithData:(id)a0;
- (void)endAudio;
- (void)logRequestOfType:(id)a0 context:(id)a1;
- (void)cancelLanguageStatusChangeObservation:(id)a0;
- (void)languageForText:(id)a0 completion:(id /* block */)a1;
- (void)selfLoggingInvocationDidError:(id)a0 invocationId:(id)a1;
- (void)task:(long long)a0 isSupportedInCountry:(id)a1 completion:(id /* block */)a2;
- (void)configInfoForLocale:(id)a0 otherLocale:(id)a1 completion:(id /* block */)a2;
- (void)speak:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)_updateAllAssets:(id /* block */)a0;
- (void)additionalLikelyPreferredLocalesForLocale:(id)a0 completion:(id /* block */)a1;
- (void)translate:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)translateStreamingInput:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)addSpeechAudioData:(id)a0;
- (void)autoDetectSpeechUnsupportedPairsWithCompletion:(id /* block */)a0;
- (void)_purgeAllAssetsExcludingConfig:(BOOL)a0 completion:(id /* block */)a1;
- (void)selfLoggingLanguageIdentificationCompletedWithLIDData:(id)a0;
- (void)preheatWithContext:(id)a0 completion:(id /* block */)a1;
- (void)startLanguageStatusChangeObservation:(id)a0 taskHint:(long long)a1 completion:(id /* block */)a2;
- (void)languageAssetsWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)selfLoggingInvocationCancelledForIDs:(id)a0;
- (void)onDeviceModeSupported:(id /* block */)a0;
- (void)assetRequestHandler:(id)a0;
- (void)languagesForText:(id)a0 completion:(id /* block */)a1;
- (void)availableLocalePairsForTask:(long long)a0 completion:(id /* block */)a1;
- (void)_purgeAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)logWithRequestData:(id)a0;
- (void)_offlineLanguageStatus:(id /* block */)a0;
- (id)initWithConnection:(id)a0 server:(id)a1 trusted:(BOOL)a2;
- (void)cleanupOnDisconnect;
- (void)selfLoggingInvocationStartedWithData:(id)a0 invocationStartedTier1Data:(id)a1;
- (void)startTextToSpeechTranslationWithContext:(id)a0 text:(id)a1;
- (void)translateSentence:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (id)_clientDelegate;
- (void)shouldPresentSystemFirstUseConsent:(id /* block */)a0;
- (void)languagesForText:(id)a0 usingModel:(unsigned long long)a1 strategy:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)installedLocalesForTask:(long long)a0 completion:(id /* block */)a1;
- (void)provideFeedback:(id)a0 withContext:(id)a1;
- (void)removeLanguages:(id)a0;
- (void)modalitiesPerLocaleWithCompletion:(id /* block */)a0;
- (void)addLanguages:(id)a0 useCellular:(BOOL)a1;
- (void)installedLocales:(id /* block */)a0;
- (void)_deleteHotfix:(id /* block */)a0;
- (void)startInstallRequest:(id)a0;
- (void)translateParagraphs:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)_getAssetSize:(id /* block */)a0;
- (void)startSpeechTranslationWithContext:(id)a0;
- (void)languagesForText:(id)a0 usingModel:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)onDeviceModeEnabled:(id /* block */)a0;
- (void)textStreamingConfigurationWithCompletion:(id /* block */)a0;
- (void)_downloadAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateOVADStreamingState:(id)a0;
- (void)_updateHotfix:(id /* block */)a0;

@end
