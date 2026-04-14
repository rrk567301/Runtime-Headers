@class NSMutableDictionary, NSData, NSObject, NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_semaphore;

@interface DRClient : DRPeer

@property (retain, nonatomic) NSMutableDictionary *hidClients;
@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *eventSendTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *rapportSemaphore;
@property (retain, nonatomic) NSData *wxRoute;

- (void)reset;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (void)activate:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setReportHandler:(id)a0;
- (void)addAvailableDataTypes:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)addRequestedDataTypes:(unsigned long long)a0;
- (void)dataHandler:(unsigned long long)a0 serviceID:(unsigned long long)a1 opcode:(unsigned long long)a2 data:(id)a3;
- (void)removeAvailableDataTypes:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)removeRequestedDataTypes:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)resetWxDM6;
- (void)resetWxHRM;
- (void)routedWxDeviceChanged:(id)a0;
- (void)sendEvents;

@end
