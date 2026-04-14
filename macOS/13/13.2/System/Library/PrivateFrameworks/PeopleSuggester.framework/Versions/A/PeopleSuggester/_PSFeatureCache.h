@class _PSPredictionContext, NSSet, _CDInteractionStore, _PSShareSheetEphemeralFeatureManager, NSArray, NSDate, NSDictionary;

@interface _PSFeatureCache : NSObject {
    _PSPredictionContext *_context;
    NSSet *_candidates;
    _CDInteractionStore *_store;
    _PSShareSheetEphemeralFeatureManager *_ephemeralFeatureManager;
    NSArray *_caches;
    NSDate *_cacheInvalidationTime;
    NSDictionary *_cache;
    NSDictionary *_histogramCache;
    NSDictionary *_histogramBucketSums;
    NSDictionary *_histogramBucketHasEver;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void).cxx_destruct;
- (id)initWithPredictionContext:(id)a0 candidates:(id)a1 caches:(id)a2 store:(id)a3;
- (id)addSelfToCandidates:(id)a0;
- (void)setPredictionContextWithContext:(id)a0;
- (id)computeEphemeralFeaturesWithCandidates:(id)a0 context:(id)a1;
- (id)fetchFeaturesWithCandidates:(id)a0;
- (void)replaceEphemeralFeaturesWithCache:(id)a0;
- (id)getFeatureValueForNonHistogramValue:(id)a0;
- (void)saveToVirtualStore;
- (id)getHistogramCache;
- (id)getHistogramBucketSums;
- (id)getHistogramBucketHasEver;

@end
