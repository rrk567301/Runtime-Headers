@class NSString, BKHIDDomainServiceServer;
@protocol BKHIDEventDeliveryManagerServerRuleChangeAuthority, BKHIDEventDeliveryManagerIncomingServiceConnectionHandler;

@interface BKHIDEventDeliveryManagerServer : NSObject <BKSHIDEventDeliveryManagerServerInterface, BKHIDDomainServiceDelegate, BKHIDDomainIncomingServiceConnectionHandler, _BKHIDIncomingServiceConnectionHandler> {
    BKHIDDomainServiceServer *_server;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BKHIDEventDeliveryManagerServerRuleChangeAuthority> _ruleChangeAuthority;
    id<BKHIDEventDeliveryManagerIncomingServiceConnectionHandler> _incomingServiceConnectionHandler;
}

@property (readonly, nonatomic) id<BKHIDEventDeliveryManagerIncomingServiceConnectionHandler> incomingConnectionHandler;
@property (readonly, nonatomic) id<BKHIDEventDeliveryManagerServerRuleChangeAuthority> ruleChangeAuthority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionDidTerminate:(id)a0;
- (void)rejectIncomingServiceConnection:(id)a0;
- (id)deliveryGraphDescription;
- (id)connectionDescriptionForDeferringRuleIdentity:(id)a0;
- (void)activate;
- (id)deliveryChainsDescription;
- (void).cxx_destruct;
- (id)initWithDeliveryManagerProvider:(id)a0 ruleChangeAuthority:(id)a1;
- (id)initWithIncomingServiceConnectionHandler:(id)a0 ruleChangeAuthority:(id)a1;
- (id)resolutionDescriptionForEventDescriptor:(id)a0 senderDescriptor:(id)a1;
- (id)resolutionDescriptionForKeyCommand:(id)a0 senderDescriptor:(id)a1;
- (oneway void)submitRuleChanges:(id)a0;
- (void)acceptIncomingServiceConnection:(id)a0 mappedObject:(id)a1;
- (void)handleIncomingServiceConnection:(id)a0;

@end
