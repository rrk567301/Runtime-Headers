@class NSString, BKHIDEventDeliveryObserverServer;

@interface WSHIDEventDeliveryObserverServer : NSObject <BSDescriptionStreaming, BKHIDEventDeliveryObserverServiceProvider> {
    BKHIDEventDeliveryObserverServer *_server;
}

@property (readonly, nonatomic) BKHIDEventDeliveryObserverServer *bkServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_init;
- (void)appendDescriptionToStream:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (id)deliveryObserverServiceForAuditToken:(id)a0;

@end
