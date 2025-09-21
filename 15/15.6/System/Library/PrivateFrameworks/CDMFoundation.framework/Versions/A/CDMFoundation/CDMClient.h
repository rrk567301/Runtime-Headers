@class CDMClientInterface;

@interface CDMClient : CDMClientInterface <CDMSsuInferenceClient, CDMEmbeddingClient, CDMNLUClient> {
    CDMClientInterface *_client;
}

+ (char)useXPC;
+ (id)graphNameForNLU;
+ (double)defaultDeallocationTimeout;
+ (id)graphNameForEmbedding;
+ (id)graphNameForSsuInference;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setup:(id)a0;
- (id)initWithXPC:(char)a0;
- (void)waitForDataDispatcherCompletion;
- (void)sharedInitTasks;
- (char)areAssetsAvailable:(id)a0;
- (char)daemonKilled;
- (void)doHandleCommand:(id)a0 forCallback:(id /* block */)a1;
- (void)doServiceCenterInitWithConfig:(id)a0;
- (id)errorFromSetup;
- (void)initProxyObject:(char)a0 delegate:(id)a1;
- (id)initWithXPCDelegate:(char)a0 withDelegate:(id)a1;
- (char)isLighthouseAPIEnabled;
- (void)processCDMNluRequest:(id)a0;
- (void)processCDMNluRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processEmbeddingRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processEmbeddingRequest:(id)a0 requestId:(id)a1 completionHandler:(id /* block */)a2;
- (void)processNLUPreprocessRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processSsuInferenceRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processText:(id)a0 completionHandler:(id /* block */)a1;
- (void)processText:(id)a0 requestConnectionId:(id)a1 completionHandler:(id /* block */)a2;
- (char)registerWithAssetsDelegate:(id)a0 withType:(long long)a1;
- (void)setDataDispatcherContext:(id)a0;
- (void)setup:(id)a0 completionHandler:(id /* block */)a1;
- (void)setupKVOForwarding;
- (void)setupNLUWithLocale:(id)a0 completionHandler:(id /* block */)a1;
- (void)setupSsuInference:(id)a0 serviceStateDirectory:(id)a1 completionHandler:(id /* block */)a2;
- (void)setupWithLocale:(id)a0 embeddingVersion:(id)a1 completionHandler:(id /* block */)a2;
- (void)setupWithLocale:(id)a0 embeddingVersion:(id)a1 deallocationTime:(double)a2 completionHandler:(id /* block */)a3;
- (char)successFromSetup;
- (void)warmupWithCompletionHandler:(id /* block */)a0;

@end
