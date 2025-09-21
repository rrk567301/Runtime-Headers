@class NSString;
@protocol BKHIDEventDeliveryObserverServiceProvider;

@interface _BKHIDDeliveryObserverDeprecatedIncomingConnectionHandler : NSObject <BKHIDEventDeliveryObserverIncomingServiceConnectionHandler> {
    id<BKHIDEventDeliveryObserverServiceProvider> _deliveryObserverServiceProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleIncomingDeliveryObserverConnection:(id)a0;

@end
