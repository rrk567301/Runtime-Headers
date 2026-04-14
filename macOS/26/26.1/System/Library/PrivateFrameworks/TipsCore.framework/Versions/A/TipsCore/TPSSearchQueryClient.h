@class NSObject, TPSServiceConnection;
@protocol OS_dispatch_queue;

@interface TPSSearchQueryClient : NSObject

@property (retain, nonatomic) TPSServiceConnection *serviceProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (void)reindexAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)reindexSearchableItemsWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)a0;
- (id)init;
- (void)cancelQueryWithIdentifier:(id)a0;
- (void)_performWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)performQuery:(id)a0 completion:(id /* block */)a1;

@end
