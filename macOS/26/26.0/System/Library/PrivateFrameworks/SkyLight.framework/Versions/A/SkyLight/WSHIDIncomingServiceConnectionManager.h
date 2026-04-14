@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WSHIDIncomingServiceConnectionManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_incomingConnections_deliveryManager;
    NSMutableArray *_queue_incomingConnections_observerService;
}

+ (id)sharedInstance;

- (id)_init;
- (void)appendDescriptionToStream:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_queue_appendDescriptionToStream:(id)a0;
- (id)_queue_deliveryManagerForAuditToken:(id)a0;
- (id)_queue_description;
- (id)_queue_eventDeliveryObserverServiceForAuditToken:(id)a0;
- (void)didUpdateEventDeliveryManagerForSession;
- (void)handleIncomingDeliveryManagerConnection:(id)a0;
- (void)handleIncomingDeliveryObserverConnection:(id)a0;
- (void)incomingServiceConnectionDidRevoke:(id)a0;

@end
