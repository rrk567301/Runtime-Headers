@class NSMutableDictionary, NSMutableSet, RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue;

@interface CULiveAudioServer : NSObject {
    NSMutableSet *_audioSessionClients;
    RPCompanionLinkClient *_messenger;
    BOOL _prefSiriLED;
    BOOL _prefSiriVOX;
    NSMutableDictionary *_sessionMap;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (void)liveActionPerformRequest:(id)a0 completion:(id /* block */)a1;
+ (void)liveActionSetupRequest:(id)a0 completion:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)peerDisconnected:(id)a0;
- (void)_audioSessionStart:(id)a0;
- (void)_audioSessionEnd:(id)a0;
- (void)_handleActionPrepare:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_prepareAlert:(long long)a0 senderID:(id)a1 completion:(id /* block */)a2;
- (void)_prepareSpeakText:(id)a0 senderID:(id)a1 completion:(id /* block */)a2;
- (void)_handleActionRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_handleActionPlayAlert:(int)a0 senderID:(id)a1 completion:(id /* block */)a2;
- (void)_handleActionSpeakText:(id)a0 senderID:(id)a1 completion:(id /* block */)a2;
- (void)_handleStartRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_handleStopRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_handleDataEvent:(id)a0 options:(id)a1;

@end
