@class NSObject, NSUUID, NSArray, SDSSession, SDSServer;
@protocol ARNetworkingDeviceHostDelegate, OS_dispatch_queue;

@interface ARNetworkingDeviceHost : NSObject <ARNetworkingDataStreamDelegate, ARNetworkingWorldOriginObserver> {
    SDSServer *_server;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_serverQueue;
}

@property (retain) SDSSession *session;
@property (weak, nonatomic) id<ARNetworkingDeviceHostDelegate> delegate;
@property (readonly, nonatomic) NSUUID *sessionID;
@property (readonly, nonatomic) NSArray *services;

- (void)start;
- (void)dealloc;
- (void)invalidate;
- (void)stop;
- (void).cxx_destruct;
- (void)stopWithError:(id)a0;
- (void)_onServerActivate;
- (void)_onSessionActivate;
- (void)_startHostWithSession:(id)a0 error:(id)a1;
- (void)_startListenForConnectionsWithSDSServer:(id)a0;
- (void)dataStreamDidStart:(id)a0;
- (void)dataStreamDidStop:(id)a0 withError:(id)a1;
- (void)didSetWorldOrigin:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (id)initWithSessionID:(id)a0 services:(id)a1;
- (void)onUpdateSessionState:(long long)a0 error:(id)a1;
- (void)startWithLoopbackPort:(unsigned short)a0;

@end
