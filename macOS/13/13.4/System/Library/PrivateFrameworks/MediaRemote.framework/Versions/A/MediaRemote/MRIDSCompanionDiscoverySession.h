@class MRProtocolClientConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MRIDSCompanionDiscoverySession : MRAVRoutingDiscoverySession <MRProtocolClientConnectionDelegate> {
    unsigned int _discoveryMode;
    unsigned int _endpointFeatures;
    NSObject<OS_dispatch_queue> *_idsQueue;
}

@property (retain, nonatomic) MRProtocolClientConnection *discoveryChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)setDiscoveryMode:(unsigned int)a0;
- (id)availableOutputDevices;
- (BOOL)devicePresenceDetected;
- (unsigned int)discoveryMode;
- (void)_handleCompanionDeviceDidConnectNotification:(id)a0;
- (void)_handleCompanionDeviceDisconnectedNotification:(id)a0;
- (void)_onIDSQueue_connectDiscoveryChannel:(id)a0;
- (void)_onIDSQueue_disconnectDiscoveryChannel:(id)a0;
- (void)_onIDSQueue_initializeDiscoveryChannel;
- (void)_syncClientStateToConnection:(id)a0;
- (id)availableEndpoints;
- (void)clientConnection:(id)a0 didReceiveMessage:(id)a1;
- (unsigned int)endpointFeatures;
- (void)handleUpdateOutputDevicesMessage:(id)a0 forClient:(id)a1;

@end
