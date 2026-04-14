@class AVConferenceXPCClient, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCMediaAnalyzerManager : VCXPCManager <VCMediaAnalyzerSourceDelegate> {
    NSMutableDictionary *_streamTokenList;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (void)registerBlocksForService;
- (id)init;
- (void)deregisterBlocksForService;
- (id)initializeMediaAnalyzerManagerHandler:(id)a0 error:(id *)a1;
- (id)mediaAnalyzerManagerEnableHandler:(id)a0 error:(id *)a1;
- (id)mediaAnalyzerSourceFromClientContext:(id)a0;
- (void)notifyClientsWithStreamToken:(long long)a0 service:(const char *)a1 arguments:(id)a2;
- (void)registerMediaAnalyzerSource:(id)a0 streamToken:(long long)a1;
- (void)streamToken:(long long)a0 didEnable:(BOOL)a1 error:(id)a2;
- (void)streamToken:(long long)a0 didProduceMediaAnalysis:(id)a1;
- (id)unInitializeMediaAnalyzerManagerHandler:(id)a0 error:(id *)a1;
- (void)unregisterMediaAnalyzerSourceWithStreamToken:(long long)a0;

@end
