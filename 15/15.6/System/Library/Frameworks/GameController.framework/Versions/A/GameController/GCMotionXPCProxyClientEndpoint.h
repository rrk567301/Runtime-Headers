@class NSString, GCController;
@protocol NSSecureCoding, GCMotionXPCProxyRemoteServerEndpointInterface, NSCopying, NSObject;

@interface GCMotionXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCControllerMotionConfigurableSensors, GCMotionXPCProxyRemoteClientEndpointInterface> {
    GCController *_controller;
    id<GCMotionXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
}

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char sensorsActive;

- (id)init;
- (void).cxx_destruct;
- (void)setController:(id)a0;
- (void)invalidateConnection;
- (void)fetchObjectIdentifierWithReply:(id /* block */)a0;
- (void)_remoteEndpointSetSensorsActive:(char)a0;
- (id)initWithIdentifier:(id)a0 initialSensorsActive:(char)a1;
- (void)newSensorsActive:(char)a0;
- (void)refreshSensorsActive;
- (void)setRemoteEndpoint:(id)a0 connection:(id)a1;

@end
