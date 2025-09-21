@class AMSEngagement;

@interface AMSTreatmentStore : NSObject

@property (class) BOOL attemptConnectionInTests;

@property (readonly) long long cachePolicy;
@property (retain) AMSEngagement *engagement;

+ (id)defaultTreatmentStore;

- (id)activeTreatmentsForAreas:(id)a0;
- (id)areasForTopics:(id)a0;
- (id)areasForNamespaces:(id)a0;
- (id)treatmentsForAreas:(id)a0;
- (id)areasWithIDs:(id)a0;
- (id)initWithCachePolicy:(long long)a0;
- (id)init;
- (id)treatmentsPayloadForAreas:(id)a0;
- (id)synchronizeTreatments;
- (id)encodeExperimentDataForTopic:(id)a0;
- (id)treatmentsForAreas:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)_treatmentOverridesForAreas:(id)a0;
- (id)experimentDataForAreas:(id)a0;
- (id)_treatmentStoreService;
- (id)_encodeExperimentData:(id)a0;
- (void).cxx_destruct;
- (id)treatmentsPayloadForTreatments:(id)a0;

@end
