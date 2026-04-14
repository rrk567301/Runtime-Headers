@class AMSLRUCache;

@interface AMSTreatmentStore : NSObject

@property (class) BOOL attemptConnectionInTests;

@property (readonly) AMSLRUCache *areasCache;
@property (readonly) AMSLRUCache *treatmentsCache;

+ (id)defaultTreatmentStore;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)areasForTopics:(id)a0;
- (id)experimentDataForAreas:(id)a0;
- (void)_treatmentsDidSyncronize:(id)a0;
- (id)_cachedAreasForNamespace:(id)a0;
- (id)_treatmentStoreService;
- (void)_cacheAreas:(id)a0 forNamespace:(id)a1;
- (id)_cachedAreasForTopic:(id)a0;
- (void)_cacheAreas:(id)a0 forTopic:(id)a1;
- (id)treatmentsForAreas:(id)a0;
- (id)_cachedTreatmentForArea:(id)a0;
- (void)_cacheTreatment:(id)a0 forArea:(id)a1;
- (id)areasForNamespaces:(id)a0;
- (id)synchronizeTreatments;
- (id)treatmentsPayloadForAreas:(id)a0;

@end
