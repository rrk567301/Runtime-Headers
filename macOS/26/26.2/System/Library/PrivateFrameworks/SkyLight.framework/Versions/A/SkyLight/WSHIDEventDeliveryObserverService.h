@class WSHIDEventDeliveryObserverServer, BKHIDEventDeliveryObserverService;

@interface WSHIDEventDeliveryObserverService : NSObject {
    WSHIDEventDeliveryObserverServer *_server;
    BKHIDEventDeliveryObserverService *_bkService;
}

@property (readonly, nonatomic) BKHIDEventDeliveryObserverService *bkObserverService;

- (void).cxx_destruct;
- (id)initWithServer:(id)a0;

@end
