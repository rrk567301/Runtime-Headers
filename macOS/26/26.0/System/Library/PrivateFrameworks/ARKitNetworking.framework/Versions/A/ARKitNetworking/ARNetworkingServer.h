@class NSSet, ARNetworkingDeviceHost, NSMutableSet, NSObject;
@protocol ARNetworkingDevicePoseControl, ARNetworkingServerDelegate, ARNetworkingGraphScheduler, OS_dispatch_queue;

@interface ARNetworkingServer : NSObject <ARNetworkingDeviceHostDelegate> {
    NSObject<OS_dispatch_queue> *_serverQueue;
    ARNetworkingDeviceHost *_deviceHost;
    NSSet *_runningGraphs;
    NSMutableSet *_requestedServices;
}

@property (readonly, nonatomic) id<ARNetworkingGraphScheduler> graphScheduler;
@property (weak, nonatomic) id<ARNetworkingServerDelegate> delegate;
@property (readonly, nonatomic) id<ARNetworkingDevicePoseControl> devicePoseControl;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_getServicesForProtocol:(id)a0;
- (void)_updateAlgorithmConfiguration;
- (void)connectClientWithSessionID:(id)a0;
- (void)connectClientWithSessionID:(id)a0 port:(unsigned short)a1 services:(id)a2;
- (void)deviceHost:(id)a0 didStartDataStream:(id)a1;
- (void)deviceHostDidStart:(id)a0;
- (void)deviceHostDidStop:(id)a0 withError:(id)a1;
- (void)disconnectClientWithSessionID:(id)a0;
- (id)initWithGraphScheduler:(id)a0;
- (void)stopAllGraphs;

@end
