@class NSString, BKHIDDomainServiceServer;
@protocol BKHIDEventDeliveryObserverIncomingServiceConnectionHandler;

@interface BKHIDEventDeliveryObserverServer : NSObject <BKSHIDEventObserverServerInterface, BKHIDDomainServiceDelegate, BKHIDDomainIncomingServiceConnectionHandler, _BKHIDIncomingServiceConnectionHandler> {
    BKHIDDomainServiceServer *_server;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BKHIDEventDeliveryObserverIncomingServiceConnectionHandler> _incomingServiceConnectionHandler;
}

@property (readonly, nonatomic) BKHIDDomainServiceServer *domainServiceServer;
@property (readonly, nonatomic) id<BKHIDEventDeliveryObserverIncomingServiceConnectionHandler> incomingConnectionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionDidTerminate:(id)a0;
- (void)rejectIncomingServiceConnection:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (id)initWithDeliveryObserverServiceProvider:(id)a0;
- (id)initWithIncomingServiceConnectionHandler:(id)a0;
- (void)setObservesDeferringChainIdentities:(id)a0;
- (id)setObservesDeferringResolutions:(id)a0;
- (void)acceptIncomingServiceConnection:(id)a0 mappedObject:(id)a1;
- (void)handleIncomingServiceConnection:(id)a0;

@end
