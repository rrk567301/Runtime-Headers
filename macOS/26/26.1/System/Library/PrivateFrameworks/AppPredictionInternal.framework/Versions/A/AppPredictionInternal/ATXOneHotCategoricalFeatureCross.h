@class NSArray;

@interface ATXOneHotCategoricalFeatureCross : ATXCandidateRelevanceModelOneHotCategoricalFeaturizer {
    NSArray *_features;
}

- (void).cxx_destruct;
- (id)categoricalFeatureValueForContext:(id)a0 candidate:(id)a1;
- (id)initWithFeatures:(id)a0;

@end
