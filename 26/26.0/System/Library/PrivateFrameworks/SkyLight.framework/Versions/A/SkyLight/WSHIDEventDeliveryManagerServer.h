@class NSString, BKHIDEventDeliveryManagerServer;

@interface WSHIDEventDeliveryManagerServer : NSObject <BKHIDEventDeliveryManagerServerRuleChangeAuthority, BSDescriptionStreaming, BKHIDEventDeliveryManagerProvider> {
    BKHIDEventDeliveryManagerServer *_server;
}

@property (readonly, nonatomic) BKHIDEventDeliveryManagerServer *server;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_init;
- (void)appendDescriptionToStream:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (id)deliveryManagerForAuditToken:(id)a0;
- (unsigned long long)permittedRuleChangeMaskForAuditToken:(id)a0;

@end
