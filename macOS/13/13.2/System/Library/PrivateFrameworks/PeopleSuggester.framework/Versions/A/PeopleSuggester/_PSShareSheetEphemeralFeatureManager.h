@class _PSPredictionContext, NSSet, NSArray, _CDInteractionStore;

@interface _PSShareSheetEphemeralFeatureManager : NSObject {
    _PSPredictionContext *_context;
    NSSet *_candidates;
    NSArray *_caches;
    _CDInteractionStore *_store;
    NSSet *_features;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)setCandidates:(id)a0;
- (id)initWithContext:(id)a0 candidates:(id)a1 caches:(id)a2 store:(id)a3;
- (id)computeFeatures;
- (id)callFeatureFunctionWithFeature:(int)a0;

@end
