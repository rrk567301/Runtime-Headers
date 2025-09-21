@class NSXPCConnection;

@interface SpeechModelTrainingClient : NSObject {
    NSXPCConnection *_smtConnection;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithServiceName:(id)a0;
- (void)buildPhoneticMatchWithLanguage:(id)a0 saveIntermediateFsts:(char)a1 completion:(id /* block */)a2;
- (id)_serviceProxyWithErrorHandler:(id /* block */)a0;
- (void)generateAudioWithTexts:(id)a0 language:(id)a1 completion:(id /* block */)a2;
- (void)generateConfusionPairsWithUUID:(id)a0 parameters:(id)a1 language:(id)a2 task:(id)a3 samplingRate:(unsigned long long)a4 recognizedNbest:(id)a5 recognizedText:(id)a6 correctedText:(id)a7 selectedAlternatives:(id)a8 completion:(id /* block */)a9;
- (void)generateConfusionPairsWithUUID:(id)a0 parameters:(id)a1 language:(id)a2 task:(id)a3 samplingRate:(unsigned long long)a4 recognizedTokens:(id)a5 recognizedText:(id)a6 correctedText:(id)a7 selectedAlternatives:(id)a8 completion:(id /* block */)a9;
- (void)trainGlobalNNLMwithFidesSessionURL:(id)a0 completion:(id /* block */)a1;
- (void)trainPersonalizedLMWithLanguage:(id)a0 configuration:(id)a1 asset:(id)a2 directory:(id)a3 completion:(id /* block */)a4;
- (void)trainPersonalizedLMWithLanguage:(id)a0 configuration:(id)a1 asset:(id)a2 fides:(char)a3 activity:(id)a4 completion:(id /* block */)a5;
- (void)trainPersonalizedLMWithLanguage:(id)a0 configuration:(id)a1 fides:(char)a2 activity:(id)a3 completion:(id /* block */)a4;
- (void)trainPersonalizedLMWithLanguage:(id)a0 directory:(id)a1 completion:(id /* block */)a2;
- (void)upperCaseString:(id)a0 completion:(id /* block */)a1;
- (void)xpcExitClean;

@end
