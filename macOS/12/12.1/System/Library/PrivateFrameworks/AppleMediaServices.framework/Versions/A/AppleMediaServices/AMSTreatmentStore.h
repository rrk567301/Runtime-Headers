@class NSXPCConnection, AMSLRUCache;

@interface AMSTreatmentStore : NSObject <AMSTreatmentStoreServiceProtocolClientProtocol> {
    NSXPCConnection *_connection;
}

@property (readonly) AMSLRUCache *areasCache;
@property (readonly) NSXPCConnection *connection;
@property (readonly) AMSLRUCache *treatmentsCache;

+ (id)defaultTreatmentStore;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_serviceProxyWithErrorHandler:(id /* block */)a0;
- (id)areasForTopics:(id)a0;
- (id)treatmentsPayloadForAreas:(id)a0;
- (void)treatmentsDidSyncronizeWithCompletion:(id /* block */)a0;
- (id)_cachedAreasForNamespace:(id)a0;
- (void)_cacheAreas:(id)a0 forNamespace:(id)a1;
- (id)_cachedAreasForTopic:(id)a0;
- (void)_cacheAreas:(id)a0 forTopic:(id)a1;
- (id)_cachedTreatmentForArea:(id)a0;
- (void)_cacheTreatment:(id)a0 forArea:(id)a1;
- (id)treatmentsForAreas:(id)a0;
- (id)areasForNamespaces:(id)a0;
- (id)synchronizeTreatments;

@end
