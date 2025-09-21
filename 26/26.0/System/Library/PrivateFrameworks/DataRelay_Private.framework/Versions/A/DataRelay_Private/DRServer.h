@class NSData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface DRServer : DRPeer

@property (retain, nonatomic) NSMutableDictionary *hidDevices;
@property (nonatomic) unsigned long long availableDataTypesFromLocalDiscovery;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *rapportSemaphore;
@property (nonatomic) unsigned long long availableDataTypes;
@property (nonatomic) unsigned long long availableDataTypesFromServer;
@property (readonly, copy, nonatomic) NSData *wxAddress;

- (void)reset;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_removeRequestedDataTypes:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)addAvailableDataTypes:(unsigned long long)a0 fromServer:(BOOL)a1 completion:(id /* block */)a2;
- (void)addRequestedDataTypes:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)eventsHandler:(id)a0;
- (void)removeAvailableDataTypes:(unsigned long long)a0 fromServer:(BOOL)a1 completion:(id /* block */)a2;
- (void)removeRequestedDataTypes:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)serviceAddedHandler:(id)a0;
- (void)serviceRemovedHandler:(id)a0;
- (void)setWxAddress:(id)a0;

@end
