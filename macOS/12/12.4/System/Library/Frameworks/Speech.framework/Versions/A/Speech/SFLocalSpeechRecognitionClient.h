@class NSString, NSXPCConnection;
@protocol SFLocalSpeechRecognitionDelegate;

@interface SFLocalSpeechRecognitionClient : NSObject <SFLSRDelegate> {
    NSXPCConnection *_lsrConnection;
    id /* block */ _downloadProgress;
    id /* block */ _downloadCompletion;
    BOOL _recognitionActive;
}

@property (readonly, weak, nonatomic) id<SFLocalSpeechRecognitionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)logCoreAnalyticsEvent:(id)a0 withAnalytics:(id)a1;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)_serviceProxyWithErrorHandler:(id /* block */)a0;
- (void)cancelSpeech;
- (void)stopSpeech;
- (void)wakeUpWithCompletion:(id /* block */)a0;
- (void)addAudioPacket:(id)a0;
- (void)startRecordedAudioDictationWithParameters:(id)a0;
- (void)initializeWithSandboxExtensions:(id)a0;
- (void)fetchAssetsForLanguage:(id)a0 completion:(id /* block */)a1;
- (void)configParametersForVoicemailWithLanguage:(id)a0 completion:(id /* block */)a1;
- (void)purgeAssetsForLanguage:(id)a0 completion:(id /* block */)a1;
- (void)setAssetsAsProvisional;
- (void)promoteAssets;
- (void)initializeLmWithLocale:(id)a0 completion:(id /* block */)a1;
- (void)initializeLmWithAssetPath:(id)a0 completion:(id /* block */)a1;
- (void)addSentenceToNgramCounts:(id)a0;
- (void)addSentenceToNgramCounts:(id)a0 completion:(id /* block */)a1;
- (void)addProns:(id)a0 forWord:(id)a1 completion:(id /* block */)a2;
- (void)oovWordsAndFrequenciesWithCompletion:(id /* block */)a0;
- (void)trainFromPlainTextAndWriteToDirectory:(id)a0 sandboxExtension:(id)a1 completion:(id /* block */)a2;
- (void)generateNgramCountsSerializeDataWithCompletion:(id /* block */)a0;
- (void)deserializeNgramCountsData:(id)a0 completion:(id /* block */)a1;
- (void)lmeThresholdWithCompletion:(id /* block */)a0;
- (void)metricsWithCompletion:(id /* block */)a0;
- (void)trainAppLmFromNgramsSerializedData:(id)a0 customPronsData:(id)a1 language:(id)a2 writeToDirectory:(id)a3 sandboxExtension:(id)a4 completion:(id /* block */)a5;
- (void)createPhraseCountsArtifactWithIdentifier:(id)a0 rawPhraseCountsPath:(id)a1 customPronunciationsPath:(id)a2 writeToDirectory:(id)a3 sandboxExtensions:(id)a4 completion:(id /* block */)a5;
- (void)createNgramCountsArtifactFromPhraseCountArtifact:(id)a0 writeToDirectory:(id)a1 sandboxExtensions:(id)a2 completion:(id /* block */)a3;
- (void)trainAppLmFromNgramCountsArtifact:(id)a0 language:(id)a1 writeToDirectory:(id)a2 sandboxExtensions:(id)a3 completion:(id /* block */)a4;
- (oneway void)localSpeechRecognitionDidRecognizePartialResult:(id)a0 rawPartialResult:(id)a1;
- (oneway void)localSpeechRecognitionDidProcessAudioDuration:(double)a0;
- (oneway void)localSpeechRecognitionDidFinishRecognition:(id)a0;
- (oneway void)localSpeechRecognitionDidFail:(id)a0;
- (oneway void)localSpeechRecognitionDidSucceed;
- (oneway void)localSpeechRecognitionDidDownloadAssetsWithProgress:(unsigned long long)a0 isStalled:(BOOL)a1;
- (oneway void)localSpeechRecognitionDidFinishDownloadingAssets:(id)a0 error:(id)a1;
- (id)_asynchronousServiceProxyWithErrorHandler:(id /* block */)a0;
- (void)installedLanguagesWithSynchronousConnection:(BOOL)a0 completion:(id /* block */)a1;
- (void)downloadAssetsForLanguage:(id)a0 urgent:(BOOL)a1 forceUpgrade:(BOOL)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)downloadAssetsForLanguage:(id)a0 urgent:(BOOL)a1 forceUpgrade:(BOOL)a2 detailedProgress:(id /* block */)a3 completionHandler:(id /* block */)a4;

@end
