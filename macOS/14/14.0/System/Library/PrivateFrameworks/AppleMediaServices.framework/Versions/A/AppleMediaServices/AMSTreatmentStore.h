@class AMSEngagement, AMSLRUCache;

@interface AMSTreatmentStore : NSObject

@property (class) BOOL attemptConnectionInTests;

@property (readonly) AMSLRUCache *areasCache;
@property (readonly) long long cachePolicy;
@property (readonly) AMSLRUCache *treatmentsCache;
@property (retain) AMSEngagement *engagement;

+ (id)defaultTreatmentStore;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)areasForTopics:(id)a0;
- (void)_cacheAreas:(id)a0 forNamespace:(id)a1;
- (void)_cacheAreas:(id)a0 forTopic:(id)a1;
- (void)_cacheTreatment:(id)a0 forArea:(id)a1;
- (id)_cachedAreasForNamespace:(id)a0;
- (id)_cachedAreasForTopic:(id)a0;
- (id)_cachedTreatmentForArea:(id)a0;
- (id)_encodeExperimentData:(id)a0;
- (id)_treatmentStoreService;
- (void)_treatmentsDidSyncronize:(id)a0;
- (id)areasForNamespaces:(id)a0;
- (id)encodeExperimentDataForTopic:(id)a0;
- (id)experimentDataForAreas:(id)a0;
- (id)initWithCachePolicy:(long long)a0;
- (id)synchronizeTreatments;
- (id)treatmentsForAreas:(id)a0;
- (id)treatmentsPayloadForAreas:(id)a0;

@end
