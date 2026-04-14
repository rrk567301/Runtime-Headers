@class CDMClientInterface;

@interface CDMClient : CDMClientInterface <CDMEmbeddingClient, CDMSsuInferenceClient> {
    CDMClientInterface *_client;
}

+ (BOOL)useXPC;
+ (id)graphNameForEmbedding;
+ (id)graphNameForSsuInference;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithDelegate:(id)a0;
- (void)setup:(id)a0;
- (id)initWithXPC:(BOOL)a0;
- (void)waitForDataDispatcherCompletion;
- (void)sharedInitTasks;
- (BOOL)areAssetsAvailable:(id)a0;
- (BOOL)daemonKilled;
- (void)doHandleCommand:(id)a0 forCallback:(id /* block */)a1;
- (void)doServiceCenterInitWithConfig:(id)a0;
- (id)errorFromSetup;
- (void)handleOverridesAssetUpdateEvent:(id)a0;
- (void)initProxyObject:(BOOL)a0 delegate:(id)a1;
- (id)initWithXPCDelegate:(BOOL)a0 withDelegate:(id)a1;
- (BOOL)isLighthouseAPIEnabled;
- (void)processCDMNluRequest:(id)a0;
- (void)processCDMNluRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processEmbeddingRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processEmbeddingRequest:(id)a0 requestId:(id)a1 completionHandler:(id /* block */)a2;
- (void)processNLUPreprocessRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processSsuInferenceRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)registerWithAssetsDelegate:(id)a0;
- (void)setDataDispatcherContext:(id)a0;
- (void)setup:(id)a0 completionHandler:(id /* block */)a1;
- (void)setupKVOForwarding;
- (void)setupSsuInference:(id)a0 serviceStateDirectory:(id)a1 completionHandler:(id /* block */)a2;
- (void)setupWithLocale:(id)a0 embeddingVersion:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)successFromSetup;
- (void)warmupWithCompletionHandler:(id /* block */)a0;

@end
