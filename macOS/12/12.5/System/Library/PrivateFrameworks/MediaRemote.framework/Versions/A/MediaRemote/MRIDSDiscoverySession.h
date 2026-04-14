@class MRProtocolClientConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MRIDSDiscoverySession : MRAVRoutingDiscoverySession <MRProtocolClientConnectionDelegate> {
    unsigned int _discoveryMode;
    unsigned int _endpointFeatures;
    NSObject<OS_dispatch_queue> *_idsQueue;
}

@property (retain, nonatomic) MRProtocolClientConnection *discoveryChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (unsigned int)discoveryMode;
- (BOOL)devicePresenceDetected;
- (void)setDiscoveryMode:(unsigned int)a0;
- (id)availableOutputDevices;
- (void)clientConnection:(id)a0 didReceiveMessage:(id)a1;
- (unsigned int)endpointFeatures;
- (void)_handleCompanionDeviceDisconnectedNotification:(id)a0;
- (void)_handleCompanionDeviceDidConnectNotification:(id)a0;
- (void)_onIDSQueue_initializeDiscoveryChannel;
- (void)_onIDSQueue_connectDiscoveryChannel:(id)a0;
- (void)_onIDSQueue_disconnectDiscoveryChannel:(id)a0;
- (void)handleUpdateOutputDevicesMessage:(id)a0 forClient:(id)a1;
- (void)_syncClientStateToConnection:(id)a0;

@end
