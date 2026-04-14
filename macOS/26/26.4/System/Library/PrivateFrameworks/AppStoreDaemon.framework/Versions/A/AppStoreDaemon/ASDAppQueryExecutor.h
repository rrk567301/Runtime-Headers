@class ASDServiceBroker, ASDDispatchQueue, NSMutableDictionary;

@interface ASDAppQueryExecutor : NSObject {
    ASDDispatchQueue *_dispatchQueue;
    NSMutableDictionary *_queryPromises;
    ASDServiceBroker *_serviceBroker;
}

@property (nonatomic) long long queryOptions;

- (void)executeQueryWithPredicate:(id)a0 onDeviceWithPairingID:(id)a1 remoteDeviceID:(id)a2 withResultHandler:(id /* block */)a3;
- (id)initWithServiceBroker:(id)a0;
- (void)executeUpdatesQueryWithPredicateReloadingFromServer:(BOOL)a0 onDeviceWithPairingID:(id)a1 remoteDeviceID:(id)a2 withResultHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
