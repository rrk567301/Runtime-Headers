@class NSString;
@protocol BKHIDEventDeliveryManagerProvider;

@interface _BKHIDDeliveryManagerDeprecatedIncomingConnectionHandler : NSObject <BKHIDEventDeliveryManagerIncomingServiceConnectionHandler> {
    id<BKHIDEventDeliveryManagerProvider> _deliveryManagerProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleIncomingDeliveryManagerConnection:(id)a0;

@end
