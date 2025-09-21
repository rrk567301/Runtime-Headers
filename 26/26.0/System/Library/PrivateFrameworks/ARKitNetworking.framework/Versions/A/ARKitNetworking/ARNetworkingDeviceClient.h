@class SDSClient, NSString, NSUUID, NSArray, NSDictionary, NSObject, NSMutableSet, SDSSession;
@protocol ARNetworkingDeviceClientDelegate, OS_dispatch_queue, OS_nw_endpoint;

@interface ARNetworkingDeviceClient : NSObject <ARNetworkingDataStreamDelegate, ARNetworkingDevicePoseWorldOriginObserver> {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_nw_endpoint> *_endpoint;
    NSDictionary *_servicesByName;
    NSString *_serviceBundleID;
    BOOL _sessionIsActive;
    NSMutableSet *_requestedServices;
    NSMutableSet *_runningServices;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestedServicesLock;
}

@property (retain) SDSSession *session;
@property (retain) SDSClient *client;
@property (weak, nonatomic) id<ARNetworkingDeviceClientDelegate> delegate;
@property (readonly, nonatomic) NSUUID *sessionID;
@property (readonly, nonatomic) NSArray *services;

+ (id)defaultNetworkServices;

- (void)disconnect;
- (void)dealloc;
- (void)invalidate;
- (void)disconnectWithError:(id)a0;
- (id)initWithSessionID:(id)a0;
- (void).cxx_destruct;
- (void)connectWithEndpoint:(id)a0;
- (void)connectWithLoopbackPort:(unsigned short)a0;
- (id)initWithSessionID:(id)a0 serviceBundleID:(id)a1;
- (void)requestServiceWithServiceName:(id)a0;
- (id)serviceForServiceName:(id)a0;
- (void)_connectWithEndpoint:(id)a0 sdsClient:(id)a1;
- (void)_onSessionActivate;
- (void)_startClientWithSession:(id)a0 error:(id)a1;
- (void)_startRequestedDataStreams;
- (void)dataStreamDidStart:(id)a0;
- (void)dataStreamDidStop:(id)a0 withError:(id)a1;
- (id)initWithSessionID:(id)a0 services:(id)a1;
- (id)initWithSessionID:(id)a0 services:(id)a1 serviceBundleID:(id)a2;
- (void)onReceiveWorldOrigin:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
