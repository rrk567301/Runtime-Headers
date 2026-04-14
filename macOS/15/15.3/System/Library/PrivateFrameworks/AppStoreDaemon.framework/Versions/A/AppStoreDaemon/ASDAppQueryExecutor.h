@class ASDServiceBroker, ASDDispatchQueue, NSMutableDictionary;

@interface ASDAppQueryExecutor : NSObject {
    ASDDispatchQueue *_dispatchQueue;
    NSMutableDictionary *_queryPromises;
    ASDServiceBroker *_serviceBroker;
}

@property (nonatomic) long long queryOptions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithServiceBroker:(id)a0;
- (void)executeQueryWithPredicate:(id)a0 onPairedDevice:(id)a1 withResultHandler:(id /* block */)a2;
- (void)executeUpdatesQueryWithPredicateReloadingFromServer:(BOOL)a0 onPairedDevice:(id)a1 withResultHandler:(id /* block */)a2;

@end
