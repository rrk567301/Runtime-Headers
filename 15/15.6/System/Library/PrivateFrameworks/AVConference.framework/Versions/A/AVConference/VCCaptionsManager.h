@class AVConferenceXPCClient, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCCaptionsManager : NSObject <VCCaptionsSourceDelegate> {
    NSMutableDictionary *_streamTokenList;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (void)dealloc;
- (id)init;
- (void)streamToken:(long long)a0 didDetectGibberish:(char)a1;
- (id)captionsSourceFromClientContext:(id)a0;
- (void)deregisterBlocksForService;
- (id)deserializeLocale:(id)a0 withError:(id *)a1;
- (void)notifyClientsWithStreamToken:(long long)a0 service:(char *)a1 arguments:(id)a2;
- (void)registerBlocksForService;
- (void)registerCaptionsSource:(id)a0 streamToken:(long long)a1;
- (void)streamToken:(long long)a0 didDisableCaptions:(char)a1 error:(id)a2;
- (void)streamToken:(long long)a0 didEnableCaptions:(char)a1 error:(id)a2;
- (void)streamToken:(long long)a0 didStartCaptioningWithReason:(unsigned char)a1;
- (void)streamToken:(long long)a0 didStopCaptioningWithReason:(unsigned char)a1;
- (void)streamToken:(long long)a0 didUpdateCaptions:(id)a1;
- (void)unregisterCaptionsSourceWithStreamToken:(long long)a0;

@end
