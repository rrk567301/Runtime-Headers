@class NSMutableDictionary, NSData, NSObject, NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_semaphore;

@interface DRClient : DRPeer

@property (retain, nonatomic) NSMutableDictionary *hidClients;
@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *eventSendTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *rapportSemaphore;
@property (retain, nonatomic) NSData *wxRoute;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)activate:(id /* block */)a0;
- (void)dealloc;
- (void)addAvailableDataTypes:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)addRequestedDataTypes:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)dataHandler:(unsigned long long)a0 opcode:(unsigned long long)a1 data:(id)a2;
- (void)removeAvailableDataTypes:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)removeRequestedDataTypes:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)requestHandler:(unsigned long long)a0 request:(id)a1;
- (void)resetWxDM6;
- (void)resetWxHRM;
- (void)routedWxDeviceChanged:(id)a0;
- (void)sendEvents;

@end
