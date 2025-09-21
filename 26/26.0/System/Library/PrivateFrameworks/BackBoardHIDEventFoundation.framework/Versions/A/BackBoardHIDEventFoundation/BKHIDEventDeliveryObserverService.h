@class BKThreeLevelForest, NSString, NSMutableDictionary, NSMutableSet, BSMutableIntegerMap, BKHIDDomainServiceServer;

@interface BKHIDEventDeliveryObserverService : NSObject <BKHIDEventDeliveryResolutionObserver> {
    BKHIDDomainServiceServer *_server;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSMutableIntegerMap *_lock_observationsByPID;
    NSMutableSet *_lock_deferringChainObserverConnections;
    BKThreeLevelForest *_lock_identityToPIDToObservations;
    NSMutableDictionary *_lock_identityToChain;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionDidTerminate:(id)a0;
- (void)connection:(id)a0 setObservesDeferringChainIdentities:(id)a1 entitled:(BOOL)a2;
- (id)connection:(id)a0 setObservesDeferringResolutions:(BOOL)a1;
- (void)deliveryChainDidUpdate:(id)a0 forIdentity:(id)a1 reason:(id)a2;
- (id)initWithDomainServiceServer:(id)a0;
- (id)initWithServer:(id)a0;
- (void).cxx_destruct;

@end
