@class WSHIDEventDeliveryObserverServer, BKHIDEventDeliveryObserverService;

@interface WSHIDEventDeliveryObserverService : NSObject {
    WSHIDEventDeliveryObserverServer *_server;
    BKHIDEventDeliveryObserverService *_bkService;
}

@property (readonly, nonatomic) BKHIDEventDeliveryObserverService *bkObserverService;

- (id)initWithServer:(id)a0;
- (void).cxx_destruct;

@end
