@class NSString;

@interface AVFigRoutingContextCommandOutputDeviceConfigurationModification : NSObject <AVOutputDeviceConfigurationModification>

@property (readonly, nonatomic) struct __CFDictionary { } *routingContextCommandPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)setDeviceName:(id)a0;
- (void)addPeerToHomeGroup:(id)a0;
- (void)removePeerWithIDFromHomeGroup:(id)a0;
- (void)setDevicePassword:(id)a0;
- (void)startAutomaticallyAllowingConnectionsFromPeersInHomeGroupAndRejectOtherConnections:(char)a0;
- (void)stopAutomaticallyAllowingConnectionsFromPeersInHomeGroup;

@end
